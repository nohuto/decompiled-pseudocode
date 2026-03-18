/*
 * XREFs of MiPrefetchNormally @ 0x14012B448
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14012B490 (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x14012B500 (MiCommitmentAvailable.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d

  return *(__int64 *)(a1 + 7104) >= 160
      && (unsigned __int64)MiCommitmentAvailable(a1, a2, (unsigned int)a2) >= 0x1080
      && MiGetAvailablePagesBelowPriority(v2, v3) != 0;
}
