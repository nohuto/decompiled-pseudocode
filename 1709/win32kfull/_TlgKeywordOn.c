/*
 * XREFs of _TlgKeywordOn @ 0x1C00414C0
 * Callers:
 *     UmfdQueryFontData @ 0x1C00368E0 (UmfdQueryFontData.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdLoadFontFile @ 0x1C0041350 (UmfdLoadFontFile.c)
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0042670 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00429C0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042AB8 (-xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042B8C (-xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C0042FA0 (-TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z.c)
 *     ?TraceLoggingSendMixedModeTelemetry@@YAHXZ @ 0x1C0043080 (-TraceLoggingSendMixedModeTelemetry@@YAHXZ.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00430FC (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00435EC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C0043748 (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0044158 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CEC84 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00CEFD4 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     InitProcessSystemDpi @ 0x1C00E0EF0 (InitProcessSystemDpi.c)
 *     ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C0124CE8 (-TraceLoggingAutoRotationStateEvent@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x1C0125C90 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01406D0 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C014225C (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     ?TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z @ 0x1C01A2024 (-TraceLoggingEdgePalmRejection@@YAXUtagPOINT@@0@Z.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01A2104 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C01A220C (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C01A2588 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01A261C (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C01A27EC (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C01A2904 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01A2AE0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A2CEC (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01A2E98 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01A3088 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01A3278 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01A3330 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C01A33E8 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C01A34A0 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C01A357C (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C01A3654 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x1C01A36C8 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C01A3780 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YAXXZ @ 0x1C01A38F8 (-TraceLoggingWinPHotKeyEvent@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01A396C (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     TraceLoggingPTPWarpBack @ 0x1C01A3C00 (TraceLoggingPTPWarpBack.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01ACB9C (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01ACF74 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01AD080 (-xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01AD154 (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AD21C (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01D9024 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     NtUserDrawMenuBarTemp @ 0x1C01E4510 (NtUserDrawMenuBarTemp.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C020F268 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02201B4 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 *     ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C024B1D8 (-LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}
