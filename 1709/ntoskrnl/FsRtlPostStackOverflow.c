/*
 * XREFs of FsRtlPostStackOverflow @ 0x1401E9510
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpPostStackOverflow @ 0x1401E95A4 (FsRtlpPostStackOverflow.c)
 */

void __stdcall FsRtlPostStackOverflow(PVOID Context, PKEVENT Event, PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine)
{
  FsRtlpPostStackOverflow(Context, Event, StackOverflowRoutine, 0LL);
}
