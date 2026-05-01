/*
 * XREFs of ?HampUtilCompareHostIds@@YAJ_K0@Z @ 0x180042F60
 * Callers:
 *     ?HampDepGroupCompareHostDependencyForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044684 (-HampDepGroupCompareHostDependencyForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180044694 (-HampDepGroupCompareHostDependencyForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800446C8 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180044B28 (-HampDepGroupLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCompareHostIds(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( a1 >= a2 )
    return a2 < a1;
  else
    return 0xFFFFFFFFLL;
}
