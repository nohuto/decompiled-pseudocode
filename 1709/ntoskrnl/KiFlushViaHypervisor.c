/*
 * XREFs of KiFlushViaHypervisor @ 0x140059270
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     KeFlushEntireTb @ 0x140143A40 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 */

_BOOL8 KiFlushViaHypervisor()
{
  return (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1);
}
