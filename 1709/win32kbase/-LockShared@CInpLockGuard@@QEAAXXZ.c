/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0124D60 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0007674 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C012A410 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int IsResourceAcquiredExclusiveLite; // r14d
  _BOOL8 v8; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  __int64 *DomainLockRef; // rbx
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // rcx
  __int64 v27; // rdx
  CInpLockGuard *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  tagObjLock *v35; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v8 = qword_1C01936E0 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v2 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5, v6);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v12, v11, v13, v14);
        gptiCurrent = v10;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v35);
        v15 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          DomainLockRef = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v15[2];
            v15[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v15);
            RIMLockExclusive((__int64)DomainLockRef);
            v15 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v35);
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v17 = 0LL;
        while ( 1 )
        {
          v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v18 )
            v17 = *v18;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
            break;
          if ( gbRITBlockedOnDIT )
          {
            if ( v17 == gptiRit )
              break;
            _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v26 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v17 == gptiRit )
              break;
            _InterlockedIncrement(&gcDITHitTestWaiters);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v26 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v26, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredSharedUserCrit(v23, v22, v24, v25);
      }
      if ( v8 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v28, v27, v29, v30) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v8 )
    {
      qword_1C01936E0 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v33 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v32, v31, v33, v34);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v2 = 1;
  }
}
