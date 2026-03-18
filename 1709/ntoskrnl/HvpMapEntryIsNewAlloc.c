/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x140016590
 * Callers:
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 *     HvpFindNextDirtyBlock @ 0x140513F8C (HvpFindNextDirtyBlock.c)
 *     HvpFreeAllocatedBins @ 0x140694950 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
