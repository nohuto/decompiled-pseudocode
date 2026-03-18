/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C0016810 (NtMITWaitForMultipleObjectsEx.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0026560 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     NtUserGetHDevName @ 0x1C005AF10 (NtUserGetHDevName.c)
 *     NtUserEnumDisplayMonitors @ 0x1C005C8D0 (NtUserEnumDisplayMonitors.c)
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     NtUserToUnicodeEx @ 0x1C0071380 (NtUserToUnicodeEx.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0087C60 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtMITActivateInputProcessing @ 0x1C0090090 (NtMITActivateInputProcessing.c)
 *     NtUserSetSysColors @ 0x1C0092C00 (NtUserSetSysColors.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 *     NtDWMBindCursorToOutputConfig @ 0x1C00E5710 (NtDWMBindCursorToOutputConfig.c)
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00E5A50 (NtDWMSetInputSystemOutputConfig.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00E5D90 (NtMITBindInputTypeToMonitors.c)
 *     NtMITInitMinuserThread @ 0x1C00E6680 (NtMITInitMinuserThread.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00E6840 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00E6C30 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00E6D80 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E6E80 (NtMITSynthesizeTouchInput.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E71C0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetClipCursor @ 0x1C00E7BA0 (NtUserGetClipCursor.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00E87C0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E8E70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E9120 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E92C0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E9450 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E95B0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSetDisplayConfig @ 0x1C00E99F0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E9F40 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00EA300 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00EA7B0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v8, v7, v9, v10);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v14);
  v11 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v11[2];
      v11[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v11);
      RIMLockExclusive((__int64)DomainLockRef);
      v11 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v14);
  return this;
}
