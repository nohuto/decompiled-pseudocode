/*
 * XREFs of ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027AF0
 * Callers:
 *     ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x180026F7C (-HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPEND.c)
 *     ?HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_DEPENDENCY_LINK@@@Z @ 0x180027644 (-HampDepGroupCreateLink@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@PEAPEAU_HAM_.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067264 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180027B1C (-HampUtilCompareHostIds@@YAJ_K0@Z.c)
 */

__int64 __fastcall HampDepGroupCompareDependencyLinkForRbTree(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = HampUtilCompareHostIds(*a1, (unsigned __int64)a2[1].Children[0]);
  if ( !(_DWORD)result )
    return HampUtilCompareHostIds(*(_QWORD *)(v4 + 8), *(_QWORD *)(v3 + 32));
  return result;
}
