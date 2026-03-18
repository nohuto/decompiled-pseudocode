/*
 * XREFs of CmpFindNameInList @ 0x1404A389C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14054F244 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405DF3F0 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405DF734 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMarkCurrentProfileDirty @ 0x14062CC34 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x1406336C0 (CmpMarkCurrentValueDirty.c)
 *     CmpFindControlSet @ 0x140634C90 (CmpFindControlSet.c)
 *     CmpFindValueByName @ 0x1406351C8 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x1406FE0DC (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140704D74 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
