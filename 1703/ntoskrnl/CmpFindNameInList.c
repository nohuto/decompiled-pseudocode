/*
 * XREFs of CmpFindNameInList @ 0x140490580
 * Callers:
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404CC0FC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140573C38 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     CmpFindValueByName @ 0x1405B6E28 (CmpFindValueByName.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BD1FC (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405D2B18 (CmpMarkCurrentProfileDirty.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x14066F3AC (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140674D18 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14067546C (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 */

_BOOL8 __fastcall CmpFindNameInList(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
