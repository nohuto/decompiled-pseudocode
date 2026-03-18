/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C008D950
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v4; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rdi
  __int64 *DomainLockRef; // rbx
  PVOID v22; // rcx
  tagObjLock *v23; // [rsp+48h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v17, v16, v18, v19);
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
    v20 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v20[2];
        v20[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v20);
        RIMLockExclusive((__int64)DomainLockRef);
        v20 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v23);
  }
  else
  {
    v4 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
    if ( v4 )
      v4[1] = KeQueryPerformanceCounter(0LL);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v6 )
        v5 = *v6;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v5 == gptiRit )
          break;
        _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v22 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v5 == gptiRit )
          break;
        _InterlockedIncrement(&gcDITHitTestWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v22 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v22, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredSharedUserCrit(v11, v10, v12, v13);
  }
}
