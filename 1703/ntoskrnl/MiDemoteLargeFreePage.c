/*
 * XREFs of MiDemoteLargeFreePage @ 0x140128B94
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiTryUnlinkNodeLargePage @ 0x140128BFC (MiTryUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreePage(__int64 a1, int a2)
{
  __int64 v3; // rbx

  v3 = a1 & ~(MiLargePageSizes[a2] - 1);
  if ( (int)MiTryUnlinkNodeLargePage(v3) > 1 )
    return 0LL;
  MiInsertLargePageInFreeOrZeroList(48 * v3 - 0x58000000000LL, a2, 0);
  return 1LL;
}
