/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C011A8E0 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C009F238 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C009F274 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0124E20 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int IsResourceAcquiredExclusiveLite; // r14d
  _BOOL8 v9; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rdi
  struct tagTHREADINFO *v26; // rbx
  struct tagTHREADINFO **v27; // rax
  __int64 v28; // rcx
  PVOID v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  CInpLockGuard *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  tagObjLock *v37; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  v4 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v9 = qword_1C01A1668 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v4 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v11 = 0LL;
        while ( 1 )
        {
          v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v12 )
            v11 = *v12;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v13);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v11 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17);
        gptiCurrent = v11;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v37);
        while ( 1 )
        {
          v25 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
          v20 = *v25;
          v25[2] = 0LL;
          if ( !*(_DWORD *)(v20 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
          DomainLockRef = GetDomainLockRef(8LL, v18);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v25);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v24);
        }
        tagObjLock::UnLock(v37);
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v26 = 0LL;
        while ( 1 )
        {
          v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v27 )
            v26 = *v27;
          v29 = (PVOID)PsGetCurrentProcess(v28);
          if ( v29 )
          {
            if ( v29 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v31) == gpepCSRSS && v26 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v26 == gptiRit )
          {
            break;
          }
          _InterlockedIncrement(&gcDITHitTestWaiters);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredSharedUserCrit(v31, v30, v32);
      }
      if ( v9 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v33) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v9 )
    {
      qword_1C01A1668 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v35, v34, v36);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v4 = 1;
  }
}
