/*
 * XREFs of HvpReleaseHCell @ 0x14008D080
 * Callers:
 *     HvpDelistFreeCell @ 0x14048CB3C (HvpDelistFreeCell.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpReleaseHCell(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 16))();
}
