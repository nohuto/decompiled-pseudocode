/*
 * XREFs of ?HampDepGroupCompareHostDependencyForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044684
 * Callers:
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004497C (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepGroupCompareHostDependencyForHost(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  return HampUtilCompareHostIds(*a1, *(_QWORD *)(a2[-3].ParentValue - 40));
}
