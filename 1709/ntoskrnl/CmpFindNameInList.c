/*
 * XREFs of CmpFindNameInList @ 0x140479444
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14044C0DC (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14044C6E4 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1405A55BC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1405A6C70 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpFindControlSet @ 0x1405BC7FC (CmpFindControlSet.c)
 *     CmpFindValueByName @ 0x1405BCD40 (CmpFindValueByName.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BF128 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405C3490 (CmpMarkCurrentProfileDirty.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x140699A74 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140699C54 (CmpPreserveSystemHiveData.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
