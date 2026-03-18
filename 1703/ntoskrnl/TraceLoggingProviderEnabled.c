/*
 * XREFs of TraceLoggingProviderEnabled @ 0x140082CB4
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x14045E258 (CmpLogTransactionAbortedWithChildName.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1404E915C (EtwpWriteAppStateChangeSummary.c)
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 *     PopNotifyTelemetryOsState @ 0x140576768 (PopNotifyTelemetryOsState.c)
 *     PopTransitionTelemetryOsState @ 0x1405B9204 (PopTransitionTelemetryOsState.c)
 *     PnpTraceDeviceRemovalForResetComplete @ 0x1406A611C (PnpTraceDeviceRemovalForResetComplete.c)
 *     PnpTraceRebalanceResult @ 0x1406A65E8 (PnpTraceRebalanceResult.c)
 *     EtwTraceDeniedTokenCreation @ 0x14070A5D8 (EtwTraceDeniedTokenCreation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
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
