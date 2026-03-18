/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0012C00 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C00427C0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0057380 (NtUserEnumDisplayMonitors.c)
 *     NtUserGetDpiForMonitor @ 0x1C0059620 (NtUserGetDpiForMonitor.c)
 *     NtUserLockCursor @ 0x1C0059860 (NtUserLockCursor.c)
 *     NtUserToUnicodeEx @ 0x1C005B5F0 (NtUserToUnicodeEx.c)
 *     NtUserClipCursor @ 0x1C0072D80 (NtUserClipCursor.c)
 *     NtDWMBindCursorToOutputConfig @ 0x1C00B3090 (NtDWMBindCursorToOutputConfig.c)
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00B34F0 (NtDWMSetInputSystemOutputConfig.c)
 *     NtMITActivateInputProcessing @ 0x1C00B3860 (NtMITActivateInputProcessing.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00B38F0 (NtMITBindInputTypeToMonitors.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C00B3A90 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtMITInitMinuserThread @ 0x1C00B4310 (NtMITInitMinuserThread.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00B44D0 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00B4D40 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00B4E90 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00B4F90 (NtMITSynthesizeTouchInput.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00B5540 (NtMITWaitForMultipleObjectsEx.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00B55E0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B5830 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetClipCursor @ 0x1C00B6280 (NtUserGetClipCursor.c)
 *     NtUserGetHDevName @ 0x1C00B63C0 (NtUserGetHDevName.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00B7760 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B7AA0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00B7CF0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00B7E40 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00B8190 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B8340 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00B84E0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00B8650 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSetDisplayConfig @ 0x1C00B8EC0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B9430 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00B9810 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00B9B20 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetSysColors @ 0x1C00B9CD0 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 *     NtMapVisualRelativePoints @ 0x1C00BBA80 (NtMapVisualRelativePoints.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  __int64 *v19; // rdi
  tagObjLock *v21; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v21);
  while ( 1 )
  {
    v19 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v14 = *v19;
    v19[2] = 0LL;
    if ( !*(_DWORD *)(v14 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    DomainLockRef = GetDomainLockRef(8LL, v12);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v19);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v18);
  }
  tagObjLock::UnLock(v21);
  return this;
}
