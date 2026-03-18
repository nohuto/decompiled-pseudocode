/*
 * XREFs of _TlgKeywordOn @ 0x1C00533FC
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0008ADC (RIMUpdateMonitorQuirk.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C004E8FC (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C004EB78 (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C00522F8 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     TraceLoggingProviderEnabled @ 0x1C0052E80 (TraceLoggingProviderEnabled.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0055910 (xxxUserChangeDisplaySettings.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C0065238 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0065320 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerIsDimTimeOutManual @ 0x1C006D324 (PowerIsDimTimeOutManual.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0084864 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C009B01C (RIMLogDeviceHealthTelemetry.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00D6710 (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     NtUserWin32kSysCallFilterStub @ 0x1C00E5D80 (NtUserWin32kSysCallFilterStub.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010490C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0117138 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01174FC (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C012C2F4 (-SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0139230 (-OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C01393E0 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01394D0 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01396D0 (-OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0139860 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0153E20 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     LookUpTableFlushComplete @ 0x1C01BD3B4 (LookUpTableFlushComplete.c)
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
