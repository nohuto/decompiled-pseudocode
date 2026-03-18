/*
 * XREFs of UserSetLastError @ 0x1C0071864
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserQueryDisplayConfig @ 0x1C000CCB0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D080 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D420 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0026990 (NtUserEnumDisplayMonitors.c)
 *     GetHDevName @ 0x1C00274F0 (GetHDevName.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0027E70 (NtUserGetProcessDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     InternalMapVirtualKeyEx @ 0x1C0028EF0 (InternalMapVirtualKeyEx.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0040ED8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     HMValidateHandle @ 0x1C004488C (HMValidateHandle.c)
 *     ValidateHmenu @ 0x1C00449C0 (ValidateHmenu.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 *     NtUserGetAsyncKeyState @ 0x1C004E480 (NtUserGetAsyncKeyState.c)
 *     _GetAsyncKeyState @ 0x1C004E6C0 (_GetAsyncKeyState.c)
 *     NtUserChangeDisplaySettings @ 0x1C0057D70 (NtUserChangeDisplaySettings.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636C4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     NtUserSetSysColors @ 0x1C0063820 (NtUserSetSysColors.c)
 *     NtUserRegisterSessionPort @ 0x1C0066170 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtMITSetInputCallbacks @ 0x1C0069B30 (NtMITSetInputCallbacks.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C006B430 (NtMITCoreMsgKOpenConnectionTo.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C006FBB0 (UserDeleteAtomFromAtomTable.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0071318 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 *     CheckDesktopPolicy @ 0x1C00719E0 (CheckDesktopPolicy.c)
 *     SnapshotMonitorRects @ 0x1C0074200 (SnapshotMonitorRects.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0075670 (UserAddAtomToAtomTableEx.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0077450 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserToUnicodeEx @ 0x1C0078E50 (NtUserToUnicodeEx.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0079760 (xxxSafeLoadKeyboardLayoutEx.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     UserFindAtom @ 0x1C007B940 (UserFindAtom.c)
 *     UserGetAtomName @ 0x1C007BB40 (UserGetAtomName.c)
 *     InitClientInfo @ 0x1C007CED0 (InitClientInfo.c)
 *     UserGetAtomNameFromAtomTable @ 0x1C0082F20 (UserGetAtomNameFromAtomTable.c)
 *     ValidateHdesk @ 0x1C00845C0 (ValidateHdesk.c)
 *     ValidateHwinsta @ 0x1C00889D0 (ValidateHwinsta.c)
 *     NtMITActivateInputProcessing @ 0x1C008AFE0 (NtMITActivateInputProcessing.c)
 *     NtMITDeactivateInputProcessing @ 0x1C008BB90 (NtMITDeactivateInputProcessing.c)
 *     NtUserCheckProcessSession @ 0x1C008BE10 (NtUserCheckProcessSession.c)
 *     UserFindAtomFromAtomTable @ 0x1C008DC10 (UserFindAtomFromAtomTable.c)
 *     _RegisterLogonProcess @ 0x1C008E8F0 (_RegisterLogonProcess.c)
 *     IsPrivileged @ 0x1C008E9A0 (IsPrivileged.c)
 *     NtUserRegisterManipulationThread @ 0x1C0091F00 (NtUserRegisterManipulationThread.c)
 *     UserAddAtom @ 0x1C0092160 (UserAddAtom.c)
 *     NtUserClipCursor @ 0x1C0097F10 (NtUserClipCursor.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C009CE3C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ValidateHbwnd @ 0x1C00D5660 (ValidateHbwnd.c)
 *     ValidatePwndDesktop @ 0x1C00D5770 (ValidatePwndDesktop.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00DEA80 (NtMITBindInputTypeToMonitors.c)
 *     NtMITCoreMsgKGetConnectionHandle @ 0x1C00DED50 (NtMITCoreMsgKGetConnectionHandle.c)
 *     NtMITCoreMsgKSend @ 0x1C00DF0F0 (NtMITCoreMsgKSend.c)
 *     NtMITDisableMouseIntercept @ 0x1C00DF3E0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00DF5B0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C00DF780 (NtMITInitMinuserThread.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00DFEF0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00E0170 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E03A0 (NtMITSynthesizeTouchInput.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00E0CE0 (NtUserEnableTouchPad.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetClipCursor @ 0x1C00E15C0 (NtUserGetClipCursor.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00E17E0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E1C70 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E2230 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E24C0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E2C00 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E2E90 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSetDisplayConfig @ 0x1C00E3450 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00E4260 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00E4870 (NtUserSystemParametersInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00E5C00 (NtUserUnregisterSessionPort.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0105F90 (RIMExtractPointerPropertyValues.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C0120A40 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C012157C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 *     _GetKeyNameText @ 0x1C0130250 (_GetKeyNameText.c)
 *     SetLastNtError @ 0x1C013E9AC (SetLastNtError.c)
 *     UserSetLastStatus @ 0x1C013E9C8 (UserSetLastStatus.c)
 *     InitCreateUserCrit @ 0x1C01D5008 (InitCreateUserCrit.c)
 *     InitCreateSharedSection @ 0x1C01D74A4 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

struct _NT_TIB *__fastcall UserSetLastError(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  struct _NT_TIB *result; // rax

  v4 = a1;
  if ( (_DWORD)a1 == dword_1C01896CC
    && (!qword_1C018FAC0 || qword_1C018FAC0 == PsGetCurrentProcess(a1, a2, a3, a4))
    && (_BYTE)KdDebuggerEnabled )
  {
    __debugbreak();
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[1].Self) = v4;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[147].StackBase) = v4;
    }
  }
  return result;
}
