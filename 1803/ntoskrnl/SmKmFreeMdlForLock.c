/*
 * XREFs of SmKmFreeMdlForLock @ 0x14009728C
 * Callers:
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     SmFpCleanup @ 0x14009AD84 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3LL, 1LL);
  ExFreePoolWithTag(P, 0);
}
