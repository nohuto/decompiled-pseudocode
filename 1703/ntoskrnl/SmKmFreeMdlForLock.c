/*
 * XREFs of SmKmFreeMdlForLock @ 0x14003AEF0
 * Callers:
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *a1)
{
  SmAcquireReleaseCharges(a1[10], 3LL, 1LL);
  ExFreePoolWithTag(a1, 0);
}
