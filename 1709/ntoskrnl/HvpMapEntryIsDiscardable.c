/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x140080F80
 * Callers:
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
