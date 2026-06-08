/*
 * XREFs of _TlgKeywordOn @ 0x1C0007768
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C00040D8 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007714 (ProcLibTraceUnexpectedTurboDisable.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (qword_1C0013070 & 0x400000000000LL) != 0 && (qword_1C0013078 & 0x400000000000LL) == qword_1C0013078;
}
