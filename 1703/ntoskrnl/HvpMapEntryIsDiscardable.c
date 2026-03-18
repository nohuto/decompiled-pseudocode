/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x14008CFF0
 * Callers:
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
