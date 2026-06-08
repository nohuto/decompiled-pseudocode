/*
 * XREFs of _TlgKeywordOn @ 0x1C0007A9C
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004328 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007A28 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0037670 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0015070) != 0 && (keyword & qword_1C0015078) == qword_1C0015078;
}
