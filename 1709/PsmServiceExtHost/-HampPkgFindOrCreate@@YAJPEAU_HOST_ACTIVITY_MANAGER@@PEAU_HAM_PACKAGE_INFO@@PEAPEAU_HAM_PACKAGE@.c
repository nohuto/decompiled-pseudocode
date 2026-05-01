/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800460A8 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEA.c)
 * Callees:
 *     ?HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800466A0 (-HampPkgCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgFindPackage@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18004694C (-HampPkgFindPackage@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180046E18 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046F54 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x18004947C (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *Package; // rax
  int BackgroundAccessState; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _HAM_PACKAGE *v12; // rdi
  struct _HAM_PACKAGE *v13; // rbx
  struct _HAM_PACKAGE *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Package = HampPkgFindPackage(a1, a2);
  if ( Package )
  {
    *a3 = Package;
    return 0;
  }
  v8 = HampPkgCreate(a1, a2, &v15);
  v12 = v15;
  BackgroundAccessState = v8;
  if ( v8 >= 0 )
  {
    CemRcTableFindOrInsertEx((_DWORD)a1 + 128, (_DWORD)a2, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v15);
    v13 = v15;
    if ( v15 == v12 )
    {
      BackgroundAccessState = HampPkgQueryBackgroundAccessState(v12);
      if ( BackgroundAccessState >= 0 )
      {
        *a3 = v12;
        return 0;
      }
    }
    else
    {
      HampPkgWaitForInitializationComplete(v15);
      *a3 = v13;
      BackgroundAccessState = 0;
    }
  }
  if ( v12 )
    CemRcObjectDereference(v12, v9, v10, v11);
  return (unsigned int)BackgroundAccessState;
}
