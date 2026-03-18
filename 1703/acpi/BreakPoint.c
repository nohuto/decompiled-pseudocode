/*
 * XREFs of BreakPoint @ 0x1C005F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
