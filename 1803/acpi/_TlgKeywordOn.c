/*
 * XREFs of _TlgKeywordOn @ 0x1C000803C
 * Callers:
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0006C5C (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     IrqTraceAffinityPolicy @ 0x1C0092A9C (IrqTraceAffinityPolicy.c)
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
