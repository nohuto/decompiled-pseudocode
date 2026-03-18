/*
 * XREFs of KiFlushViaHypervisor @ 0x1400D9420
 * Callers:
 *     KeFlushProcessTb @ 0x140063154 (KeFlushProcessTb.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1401590B0 (KeFlushEntireTb.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 */

_BOOL8 KiFlushViaHypervisor()
{
  return (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1);
}
