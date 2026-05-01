/*
 * XREFs of ?HampPkgFindPackage@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18004694C
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180046A80 (-HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 * Callees:
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046F54 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcTableFind @ 0x1800493B8 (CemRcTableFind.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindPackage(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  struct _HAM_PACKAGE *v2; // rax
  struct _HAM_PACKAGE *v3; // rbx

  v2 = (struct _HAM_PACKAGE *)CemRcTableFind((char *)a1 + 128, a2, HampPkgCompareByIdentity);
  v3 = 0LL;
  if ( v2 )
  {
    v3 = v2;
    HampPkgWaitForInitializationComplete(v2);
  }
  return v3;
}
