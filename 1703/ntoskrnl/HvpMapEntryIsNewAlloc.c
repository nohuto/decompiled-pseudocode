/*
 * XREFs of HvpMapEntryIsNewAlloc @ 0x140053008
 * Callers:
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     HvpFindNextDirtyBlock @ 0x1404B7A5C (HvpFindNextDirtyBlock.c)
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 *     HvpFreeAllocatedBins @ 0x14066A270 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsNewAlloc(__int64 a1)
{
  return *(_BYTE *)(a1 + 8) & 1;
}
