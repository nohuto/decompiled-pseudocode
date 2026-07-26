/*
 * XREFs of TraceLoggingProviderEnabled @ 0x1C001EF1C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C007EA74 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
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
