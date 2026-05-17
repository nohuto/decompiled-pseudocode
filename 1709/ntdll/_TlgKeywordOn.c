/*
 * XREFs of _TlgKeywordOn @ 0x18007F4A8
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x18007F19C (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18007F364 (LdrpLogCFGModuleInfoTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
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
