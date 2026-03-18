/*
 * XREFs of ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0007400 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0007C20 (W32kEtwEnableCallback.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0019A84 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C001A5D0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00217C8 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0023B9C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     UserProcessMITInput @ 0x1C003B0F0 (UserProcessMITInput.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     UserThreadCallout @ 0x1C003B840 (UserThreadCallout.c)
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C003BBE0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     EnterCrit @ 0x1C003BF20 (EnterCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     W32CalloutDispatch @ 0x1C0048FA0 (W32CalloutDispatch.c)
 *     NtUserChangeDisplaySettings @ 0x1C0064B40 (NtUserChangeDisplaySettings.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C006E990 (NtGdiDdDDISetDisplayMode.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0070B80 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0075320 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0075B60 (xxxCreateSystemThreads.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0076320 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C007A9B0 (NtUserRegisterSessionPort.c)
 *     InitSystemThread @ 0x1C007D230 (InitSystemThread.c)
 *     NtMITSetInputCallbacks @ 0x1C00863D0 (NtMITSetInputCallbacks.c)
 *     UserProcessFreezeCallout @ 0x1C008A418 (UserProcessFreezeCallout.c)
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C008AD50 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 *     UserProcessThawCallout @ 0x1C008C4C8 (UserProcessThawCallout.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C008D950 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C008FAA0 (NtMITUpdateInputGlobals.c)
 *     ChangeAcquireResourceType @ 0x1C00903C0 (ChangeAcquireResourceType.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0091D40 (NtMITDeactivateInputProcessing.c)
 *     NtUserCheckProcessSession @ 0x1C0092200 (NtUserCheckProcessSession.c)
 *     UserEnterUserCritSec @ 0x1C0093280 (UserEnterUserCritSec.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C0093680 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0096010 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C009AEE0 (NtMITGetCursorUpdateHandle.c)
 *     NtUserRegisterManipulationThread @ 0x1C009AFF0 (NtUserRegisterManipulationThread.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3150 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A37C0 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00A421C (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57F0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     VideoPortCallout @ 0x1C00A6C50 (VideoPortCallout.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00A7078 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _DrvProcessWin32kEscape_::_93_::UserCritShared::UserCritShared @ 0x1C00AA1B4 (_DrvProcessWin32kEscape_--_93_--UserCritShared--UserCritShared.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00DB7E0 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC88C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DCBF4 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD0D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     UserProcessTimerDelayCallout @ 0x1C00DE4AC (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00DE5A0 (UserProcessTimerStatisticsCallout.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtDWMCommitInputSystemOutputConfig @ 0x1C00E5800 (NtDWMCommitInputSystemOutputConfig.c)
 *     NtDWMSetCursorOrientation @ 0x1C00E5920 (NtDWMSetCursorOrientation.c)
 *     NtMITDisableMouseIntercept @ 0x1C00E63F0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C00E6530 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C00E6A70 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C00E6B50 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C00E7060 (NtMITUninitMinuserThread.c)
 *     NtUserEnableTouchPad @ 0x1C00E74E0 (NtUserEnableTouchPad.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E8FE0 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00E9880 (NtUserRemoveInjectionDevice.c)
 *     NtUserStopAndEndInertia @ 0x1C00EA690 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C00EB800 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C00EB8F0 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C00EC0BC (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00FFDD0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnPnpNotification @ 0x1C01000D0 (NtRIMOnPnpNotification.c)
 *     NtRIMOnTimerNotification @ 0x1C01001C0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0100310 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01181F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01183A0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118540 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C01244F0 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C0129C50 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
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
 *     <none>
 */

__int64 *__fastcall GetDomainLockRef(int a1)
{
  __int64 *result; // rax

  switch ( a1 )
  {
    case 0:
      return &gDomainThreadInfoLock;
    case 2:
      return (__int64 *)&gDomainPostLock;
    case 1:
      return (__int64 *)&gDomainSmsLock;
    case 3:
      return &gDomainQueueLock;
    case 4:
      return &gDomainHookLock;
    case 5:
      return &gDomainWinEventLock;
    case 7:
      return &gDomainClientLibLock;
    case 6:
      return &gDomainWindowLock;
  }
  result = &gDomainTlLock;
  if ( a1 != 8 )
    return &gDomainDummyLock;
  return result;
}
