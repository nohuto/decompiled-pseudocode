/*
 * XREFs of ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00A9524
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     CleanupLogonProcess @ 0x1C00A1D90 (CleanupLogonProcess.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00A96EC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall Win32kNtUserCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  tagObjLock *v21; // [rsp+40h] [rbp+8h] BYREF

  if ( gpresUser )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v5 )
        v4 = *v5;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v4 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10);
    gptiCurrent = v4;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
    while ( 1 )
    {
      v18 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v13 = *v18;
      v18[2] = 0LL;
      if ( !*(_DWORD *)(v13 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      DomainLockRef = GetDomainLockRef(8LL, v11);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v18);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v17);
    }
    tagObjLock::UnLock(v21);
    Win32kNtUserCleanupInternal();
    UserSessionSwitchLeaveCrit(v19);
    ExDeleteResourceLite(gpresUser);
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
  }
  else
  {
    Win32kNtUserCleanupInternal();
  }
  if ( (int)IsCheckupHidLeakSupported() >= 0 )
    CheckupHidLeak();
  if ( ghWinstaDirectory )
    ZwClose(ghWinstaDirectory);
  CleanupLogonProcess();
  if ( (int)IsCleanupPlaySoundSupported() >= 0 )
    CleanupPlaySound();
  return 1LL;
}
