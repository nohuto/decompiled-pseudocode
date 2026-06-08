/*
 * XREFs of _TlgKeywordOn @ 0x1C00076F8
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004288 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007690 (ProcLibTraceUnexpectedTurboDisable.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C00365E8 (ProcLibTraceInvalidPowerCurve.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (keyword & qword_1C0014070) != 0 && (keyword & qword_1C0014078) == qword_1C0014078;
}
