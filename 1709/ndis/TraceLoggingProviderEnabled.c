/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C0012B48
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0022104 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     NdisMSetMiniportAttributes @ 0x1C00BFE50 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 */

BOOLEAN __stdcall TraceLoggingProviderEnabled(
        TraceLoggingHProvider hProvider,
        UCHAR eventLevel,
        ULONGLONG eventKeyword)
{
  BOOLEAN v3; // r9

  v3 = 0;
  if ( hProvider->LevelPlus1 )
    return TlgKeywordOn(hProvider, 0LL) != 0;
  return v3;
}
