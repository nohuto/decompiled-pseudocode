/*
 * XREFs of ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x1800468FC
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800460A8 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEA.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x18004947C (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampPkgFindOrInsertApplication(
        struct _HAM_PACKAGE *a1,
        struct _HAM_APPLICATION *a2,
        struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *v5; // rax
  struct _HAM_APPLICATION *v6; // [rsp+40h] [rbp+8h]

  CemRcTableFindOrInsertEx((_DWORD)a1 + 272, (_DWORD)a2 + 128, (unsigned int)HampAppCompareByIdentity, (_DWORD)a2);
  v5 = v6;
  if ( v6 == a2 )
    v5 = a2;
  *a3 = v5;
}
