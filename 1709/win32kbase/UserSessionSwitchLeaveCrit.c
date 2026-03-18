/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C00479B0
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0003F50 (NtUserGetPointerInfoList.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0007C20 (W32kEtwEnableCallback.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtUserGetAsyncKeyState @ 0x1C00101F0 (NtUserGetAsyncKeyState.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C0016810 (NtMITWaitForMultipleObjectsEx.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0019990 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0019A84 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C001A5D0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00217C8 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0023B9C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0026560 (NtUserDisplayConfigGetDeviceInfo.c)
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     UserProcessMITInput @ 0x1C003B0F0 (UserProcessMITInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     UserThreadCallout @ 0x1C003B840 (UserThreadCallout.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C003BBE0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     UserReleaseDC @ 0x1C00573D0 (UserReleaseDC.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00574B8 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0057750 (NtUserMapVirtualKeyEx.c)
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     NtUserGetHDevName @ 0x1C005AF10 (NtUserGetHDevName.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B034 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 *     DrvGetCurrentDpiInfo @ 0x1C005B6E8 (DrvGetCurrentDpiInfo.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 *     NtUserEnumDisplayMonitors @ 0x1C005C8D0 (NtUserEnumDisplayMonitors.c)
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     ReferenceDwmApiPort @ 0x1C0062B40 (ReferenceDwmApiPort.c)
 *     NtUserChangeDisplaySettings @ 0x1C0064B40 (NtUserChangeDisplaySettings.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067BD0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C006E990 (NtGdiDdDDISetDisplayMode.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0070B80 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserToUnicodeEx @ 0x1C0071380 (NtUserToUnicodeEx.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0075320 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0075B60 (xxxCreateSystemThreads.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0076320 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C007A9B0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     InitSystemThread @ 0x1C007D230 (InitSystemThread.c)
 *     UserDeleteW32Thread @ 0x1C007DB50 (UserDeleteW32Thread.c)
 *     UserDeleteW32Process @ 0x1C0080810 (UserDeleteW32Process.c)
 *     NtMITSetInputCallbacks @ 0x1C00863D0 (NtMITSetInputCallbacks.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0087C60 (NtMITCoreMsgKOpenConnectionTo.c)
 *     UserProcessFreezeCallout @ 0x1C008A418 (UserProcessFreezeCallout.c)
 *     UserLeaveUserCritSec @ 0x1C008B010 (UserLeaveUserCritSec.c)
 *     UserProcessThawCallout @ 0x1C008C4C8 (UserProcessThawCallout.c)
 *     NtMITUpdateInputGlobals @ 0x1C008FAA0 (NtMITUpdateInputGlobals.c)
 *     NtMITActivateInputProcessing @ 0x1C0090090 (NtMITActivateInputProcessing.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0091D40 (NtMITDeactivateInputProcessing.c)
 *     NtUserCheckProcessSession @ 0x1C0092200 (NtUserCheckProcessSession.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0092420 (ResetAccessibilityCountersOnMouseInput.c)
 *     NtUserSetSysColors @ 0x1C0092C00 (NtUserSetSysColors.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0093680 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0096010 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C009AEE0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserRegisterManipulationThread @ 0x1C009AFF0 (NtUserRegisterManipulationThread.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00A0570 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00A05D0 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00A0660 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00A0720 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C00A0840 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00A0910 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00A09B0 (NtGdiDestroyOPMProtectedOutput.c)
 *     NtGdiGetOPMInformation @ 0x1C00A0CB0 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3150 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A37C0 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57F0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     VideoPortCallout @ 0x1C00A6C50 (VideoPortCallout.c)
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00DB7B0 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC88C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCBF4 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD0D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     UserProcessTimerDelayCallout @ 0x1C00DE4AC (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00DE5A0 (UserProcessTimerStatisticsCallout.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtDWMBindCursorToOutputConfig @ 0x1C00E5710 (NtDWMBindCursorToOutputConfig.c)
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00E5800 (NtDWMCommitInputSystemOutputConfig.c)
 *     NtDWMSetCursorOrientation @ 0x1C00E5920 (NtDWMSetCursorOrientation.c)
 *     NtDWMSetInputSystemOutputConfig @ 0x1C00E5A50 (NtDWMSetInputSystemOutputConfig.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00E5D90 (NtMITBindInputTypeToMonitors.c)
 *     NtMITCoreMsgKGetConnectionHandle @ 0x1C00E5F30 (NtMITCoreMsgKGetConnectionHandle.c)
 *     NtMITCoreMsgKSend @ 0x1C00E61F0 (NtMITCoreMsgKSend.c)
 *     NtMITDisableMouseIntercept @ 0x1C00E63F0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00E6530 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C00E6680 (NtMITInitMinuserThread.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00E6840 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITMinuserWindowCreated @ 0x1C00E6A70 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C00E6B50 (NtMITMinuserWindowDestroyed.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00E6C30 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00E6D80 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E6E80 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C00E7060 (NtMITUninitMinuserThread.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E71C0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00E74E0 (NtUserEnableTouchPad.c)
 *     NtUserGetClipCursor @ 0x1C00E7BA0 (NtUserGetClipCursor.c)
 *     NtUserGetPointerCursorId @ 0x1C00E7CE0 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00E7EC0 (NtUserGetPointerFrameArrivalTimes.c)
 *     NtUserGetPointerInputTransform @ 0x1C00E80B0 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C00E82C0 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00E84C0 (NtUserGetRawPointerDeviceData.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00E87C0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E8E70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E8FE0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E9120 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E92C0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E9450 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E95B0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00E9880 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetDisplayConfig @ 0x1C00E99F0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E9F40 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00EA300 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00EA4E0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserStopAndEndInertia @ 0x1C00EA690 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C00EA7B0 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C00EB800 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C00EB8F0 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C00EC0BC (UserFindBaseWindowHandle.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00ED470 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00F0F50 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00F10A0 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00F11C0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetCertificate @ 0x1C00F1240 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00F1380 (NtGdiGetCertificateSize.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F4400 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F4B30 (NtHWCursorUpdatePointer.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00FFDD0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnPnpNotification @ 0x1C01000D0 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C01001C0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0100310 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01181F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01183A0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118540 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C012BEE0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C000 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C012C2B0 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012F200 (ProcessKeyboardInputWorker.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130668 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0130BCC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013CD30 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C0151278 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

void __fastcall UserSessionSwitchLeaveCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v10; // r8d

  v4 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread(), a2, v4, a4) == gptiRit
    && !gbRITBlockedOnDIT )
  {
    v6 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x200000010000000LL) != 0
    && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, 0x200000010000000LL, v6, v7);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        McTemplateK0xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v10,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
