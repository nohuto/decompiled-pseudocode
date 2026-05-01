/*
 * XREFs of ?HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044694
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_HOST_DEPENDENCY_ID@@@Z @ 0x180044A0C (-HampDepGroupFindHostDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM.c)
 * Callees:
 *     ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180042F60 (-HampUtilCompareHostIds@@YAJ_K0@Z.c)
 */

__int64 __fastcall HampDepGroupCompareHostDependencyForRbTree(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = HampUtilCompareHostIds(*a1, *(_QWORD *)(a2[-3].ParentValue - 40));
  if ( !(_DWORD)result )
    return HampUtilCompareHostIds(*(_QWORD *)(v4 + 8), *(_QWORD *)(*(_QWORD *)(v3 - 48) - 40LL));
  return result;
}
