/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C002EBD0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0004B00 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000544C (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C000D420 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0010728 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0026990 (NtUserEnumDisplayMonitors.c)
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0026D34 (DrvGetCurrentDpiInfo.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00279FC (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0027E70 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     GreGetDCPoint @ 0x1C00286C0 (GreGetDCPoint.c)
 *     UserReleaseDC @ 0x1C0028B90 (UserReleaseDC.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0029060 (NtUserMapVirtualKeyEx.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     W32CalloutDispatch @ 0x1C002D340 (W32CalloutDispatch.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     UserThreadCallout @ 0x1C004ACF0 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 *     UserProcessMITInput @ 0x1C004C450 (UserProcessMITInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C004CE30 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtUserGetAsyncKeyState @ 0x1C004E480 (NtUserGetAsyncKeyState.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C004EFEC (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C004FB80 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0051368 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C0057D70 (NtUserChangeDisplaySettings.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B880 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C00629F0 (NtGdiDdDDISetDisplayMode.c)
 *     NtUserSetSysColors @ 0x1C0063820 (NtUserSetSysColors.c)
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0065C78 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0065D74 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C0066170 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006737C (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0068060 (xxxCreateSystemThreads.c)
 *     NtMITSetInputCallbacks @ 0x1C0069B30 (NtMITSetInputCallbacks.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C006B430 (NtMITCoreMsgKOpenConnectionTo.c)
 *     ReferenceDwmApiPort @ 0x1C00700A0 (ReferenceDwmApiPort.c)
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0074FA0 (W32kEtwEnableCallback.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0077450 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserToUnicodeEx @ 0x1C0078E50 (NtUserToUnicodeEx.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C007B4BC (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     InitSystemThread @ 0x1C007CCE0 (InitSystemThread.c)
 *     UserLeaveUserCritSec @ 0x1C0081BB0 (UserLeaveUserCritSec.c)
 *     UserProcessFreezeCallout @ 0x1C008395C (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0087EB0 (UserProcessThawCallout.c)
 *     NtMITUpdateInputGlobals @ 0x1C0088840 (NtMITUpdateInputGlobals.c)
 *     NtMITActivateInputProcessing @ 0x1C008AFE0 (NtMITActivateInputProcessing.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008BA50 (ResetAccessibilityCountersOnMouseInput.c)
 *     NtMITDeactivateInputProcessing @ 0x1C008BB90 (NtMITDeactivateInputProcessing.c)
 *     NtUserCheckProcessSession @ 0x1C008BE10 (NtUserCheckProcessSession.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0090980 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     NtUserRegisterManipulationThread @ 0x1C0091F00 (NtUserRegisterManipulationThread.c)
 *     NtUserClipCursor @ 0x1C0097F10 (NtUserClipCursor.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C0099060 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0099790 (xxxSendWinlogonPowerMessage.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C009A4A0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A820 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C009B5F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCallout @ 0x1C009CCB0 (VideoPortCallout.c)
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00D5320 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D6494 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00D689C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6E24 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     UserDeleteW32Process @ 0x1C00D8090 (UserDeleteW32Process.c)
 *     UserDeleteW32Thread @ 0x1C00D8150 (UserDeleteW32Thread.c)
 *     UserProcessTimerDelayCallout @ 0x1C00D826C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00D83E8 (UserProcessTimerStatisticsCallout.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00D9284 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITBindInputTypeToMonitors @ 0x1C00DEA80 (NtMITBindInputTypeToMonitors.c)
 *     NtMITCoreMsgKGetConnectionHandle @ 0x1C00DED50 (NtMITCoreMsgKGetConnectionHandle.c)
 *     NtMITCoreMsgKSend @ 0x1C00DF0F0 (NtMITCoreMsgKSend.c)
 *     NtMITDisableMouseIntercept @ 0x1C00DF3E0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00DF5B0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C00DF780 (NtMITInitMinuserThread.c)
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00DFA90 (NtMITInjectLegacyISMTouchFrame.c)
 *     NtMITMinuserWindowCreated @ 0x1C00DFC30 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C00DFD90 (NtMITMinuserWindowDestroyed.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00DFEF0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00E0170 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00E03A0 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C00E06B0 (NtMITUninitMinuserThread.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00E0890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserEnableTouchPad @ 0x1C00E0CE0 (NtUserEnableTouchPad.c)
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
 *     NtUserRemoveInjectionDevice @ 0x1C00E3270 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetDisplayConfig @ 0x1C00E3450 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00E4260 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00E4560 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00E4870 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C00E5A90 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C00E5C00 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C00E6A4C (UserFindBaseWindowHandle.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00E7E80 (W32pLkmdDataCollectionCallback.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00EDE00 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00EDF50 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00EE070 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00EE100 (NtGdiDestroyOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00EE140 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetCertificate @ 0x1C00EE1C0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateByHandle @ 0x1C00EE300 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetCertificateSize @ 0x1C00EE420 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C00EE4A0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetOPMInformation @ 0x1C00EE520 (NtGdiGetOPMInformation.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C00EE5A0 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00EE620 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00EE680 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F1690 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F1DF0 (NtHWCursorUpdatePointer.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00FAD40 (NtGdiGetGammaRampCapability.c)
 *     NtRIMOnPnpNotification @ 0x1C00FFB60 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C00FFCD0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C00FFE90 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01193C0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119610 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119850 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C011A480 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C0124E98 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C012C7B0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z @ 0x1C012CC70 (-ProcessPTPMouseInput@CHidInput@@QEAAHUtagMOUSEINPUT@@H@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130ED0 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01314CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013D860 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C01502A8 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void UserSessionSwitchLeaveCrit()
{
  struct tagTHREADINFO *v0; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v6; // r8d

  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v0 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  if ( v0 == gptiRit && !gbRITBlockedOnDIT )
  {
    v3 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x200000010000000LL) != 0
    && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2, 0x200000010000000LL, v3);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v6,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
