/*
 * XREFs of RtlBarrierForDelete @ 0x1800E6580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlBarrierForDelete(PRTL_BARRIER Barrier, ULONG Flags)
{
  return RtlBarrier_0(Barrier, Flags | 0x10000);
}
