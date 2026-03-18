/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     UserDeleteW32Thread @ 0x1C0034990 (UserDeleteW32Thread.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 *     UserDeleteW32Process @ 0x1C00641D0 (UserDeleteW32Process.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C006AAA0 (ResetAccessibilityCountersOnMouseInput.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0124210 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v21; // rdx
  tagObjLock *v22; // [rsp+40h] [rbp+8h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v8 )
        v7 = *v8;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v7 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12);
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
    while ( 1 )
    {
      v15 = (_QWORD *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v17 = *v15;
      v15[2] = 0LL;
      if ( !*(_DWORD *)(v17 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      DomainLockRef = GetDomainLockRef(8LL, v13);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v15);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v21);
    }
    tagObjLock::UnLock(v22);
  }
  return this;
}
