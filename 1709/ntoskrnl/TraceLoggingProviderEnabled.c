/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1400BA300
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     EtwpCoverageProvEnableCallback @ 0x1404F18A0 (EtwpCoverageProvEnableCallback.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404FE504 (EtwpWriteAppStateChangeSummary.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     PopTransitionTelemetryOsState @ 0x1405ACF48 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x1406D1054 (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x1406D15E4 (PnpTraceRebalanceResult.c)
 *     PopNotifyTelemetryOsState @ 0x1407060AC (PopNotifyTelemetryOsState.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, eventKeyword) != 0;
  return v3;
}
