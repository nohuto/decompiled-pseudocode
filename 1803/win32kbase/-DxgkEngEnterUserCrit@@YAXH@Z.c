/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C006A810
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *v3; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v25; // rdx
  __int64 *v26; // rdi
  tagObjLock *v27; // [rsp+48h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v17, v16, v18);
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v27);
    while ( 1 )
    {
      v26 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v21 = *v26;
      v26[2] = 0LL;
      if ( !*(_DWORD *)(v21 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
      DomainLockRef = GetDomainLockRef(8LL, v19);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v26);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v25);
    }
    tagObjLock::UnLock(v27);
  }
  else
  {
    v3 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( v3 )
      v3[1] = KeQueryPerformanceCounter(0LL);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v5 )
        v4 = *v5;
      v7 = (PVOID)PsGetCurrentProcess(v6);
      if ( v7 )
      {
        if ( v7 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredSharedUserCrit(v9, v8, v10);
  }
}
