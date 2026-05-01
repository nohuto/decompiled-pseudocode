/*
 * XREFs of ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046F54
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampPkgFindPackage@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18004694C (-HampPkgFindPackage@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465E8 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046EA4 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampPkgWaitForInitializationComplete(struct _HAM_PACKAGE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  HampPkgAcquireLockShared(a1, a2);
  while ( 1 )
  {
    v5 = *((_BYTE *)a1 + 356);
    if ( v5 )
      break;
    HampPkgReleaseLockShared(a1, v3);
    RtlWaitOnAddress((char *)a1 + 356, &v5, 1LL);
    HampPkgAcquireLockShared(a1, v4);
  }
  HampPkgReleaseLockShared(a1, v3);
}
