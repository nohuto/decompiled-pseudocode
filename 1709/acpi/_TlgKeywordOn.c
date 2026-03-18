/*
 * XREFs of _TlgKeywordOn @ 0x1C0025458
 * Callers:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0041048 (AcpiDiagTraceAmliWatchdogTimeout.c)
 *     AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0041B08 (AcpiDiagTraceRecordAmlEvaluationStatistics.c)
 *     IrqTraceAffinityPolicy @ 0x1C0085740 (IrqTraceAffinityPolicy.c)
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
