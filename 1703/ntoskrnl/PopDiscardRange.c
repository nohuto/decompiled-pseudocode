/*
 * XREFs of PopDiscardRange @ 0x14040DDD0
 * Callers:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     PopSetRange @ 0x14013F13C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
