/*
 * XREFs of PopDiscardRange @ 0x1404772B8
 * Callers:
 *     PopSetRange @ 0x140156C6C (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
