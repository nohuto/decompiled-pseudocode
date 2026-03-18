/*
 * XREFs of TraceLoggingProviderEnabled @ 0x14006F0C4
 * Callers:
 *     EtwpCoverageProvEnableCallback @ 0x14048BCC0 (EtwpCoverageProvEnableCallback.c)
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1405108B4 (EtwpWriteAppStateChangeSummary.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     PopNotifyTelemetryOsState @ 0x1405EBEF8 (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x140624944 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x140738A04 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x140738F94 (PnpTraceRebalanceResult.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9
  BOOLEAN v4; // al

  v3 = 0;
  if ( eventLevel < hProvider->LevelPlus1 )
  {
    v4 = TlgKeywordOn(hProvider, eventKeyword);
    if ( v4 != v3 )
      return 1;
  }
  return v3;
}
