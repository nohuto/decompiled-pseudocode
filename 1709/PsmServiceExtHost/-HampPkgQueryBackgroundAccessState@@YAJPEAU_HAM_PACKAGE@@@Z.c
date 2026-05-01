/*
 * XREFs of ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180046E18
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x180048E4C (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKG.c)
 */

__int64 __fastcall HampPkgQueryBackgroundAccessState(struct _HAM_PACKAGE *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  result = HampSessionCheckBackgroundAccessAllowed(
             *((struct _HAM_SESSION **)a1 + 31),
             (struct _HAM_PACKAGE *)((char *)a1 + 40),
             (enum BACKGROUND_ACCESS_STATE *)&v4);
  if ( (int)result >= 0 )
  {
    HampPkgAcquireLockExclusive(a1, v3);
    *((_DWORD *)a1 + 90) = v4;
    *((_BYTE *)a1 + 356) = 1;
    HampPkgReleaseLockExclusive(a1);
    RtlWakeAddressAll((char *)a1 + 356);
    return 0LL;
  }
  return result;
}
