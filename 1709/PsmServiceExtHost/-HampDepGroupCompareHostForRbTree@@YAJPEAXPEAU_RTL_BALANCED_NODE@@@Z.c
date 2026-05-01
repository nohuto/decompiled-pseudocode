/*
 * XREFs of ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800446C8
 * Callers:
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190A0 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampDepGroupCompareHostForRbTree(unsigned __int64 *a1, struct _RTL_BALANCED_NODE *a2)
{
  return HampUtilCompareHostIds(*a1, (unsigned __int64)a2[-29].Children[1]);
}
