/*
 * XREFs of CmSiUnmapViewOfSection @ 0x1400CC138
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140496F3C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140566C84 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14057AA08 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapShrinkStorage @ 0x140706E50 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1401A7A00 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall CmSiUnmapViewOfSection(__int64 a1, HANDLE *a2, void *a3)
{
  return ZwUnmapViewOfSection(*a2, a3);
}
