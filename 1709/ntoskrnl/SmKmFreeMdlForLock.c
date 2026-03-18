/*
 * XREFs of SmKmFreeMdlForLock @ 0x14027358C
 * Callers:
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     SmFpFree @ 0x140272EDC (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1LL);
  ExFreePoolWithTag(P, 0);
}
