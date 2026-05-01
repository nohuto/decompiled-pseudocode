/*
 * XREFs of ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180008764
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000B844 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x18000862C (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKG.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800095C8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009610 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampPkgQueryBackgroundAccessState(struct _HAM_PACKAGE *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  result = HampSessionCheckBackgroundAccessAllowed(
             *(struct _HAM_SESSION **)(*((_QWORD *)a1 + 11) + 160LL),
             (struct _HAM_PACKAGE *)((char *)a1 + 96),
             (enum BACKGROUND_ACCESS_STATE *)&v3);
  if ( (int)result >= 0 )
  {
    HampPkgAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 90) = v3;
    *((_BYTE *)a1 + 356) = 1;
    HampPkgReleaseLockExclusive(a1);
    RtlWakeAddressAll((char *)a1 + 356);
    return 0LL;
  }
  return result;
}
