/*
 * XREFs of ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180068D2C
 * Callers:
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068DA8 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x180068E4C (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSlsBlockerEntryCompare(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  return HampUtilCompareHostIds(*a1, a2[1].Children[0][-2].ParentValue);
}
