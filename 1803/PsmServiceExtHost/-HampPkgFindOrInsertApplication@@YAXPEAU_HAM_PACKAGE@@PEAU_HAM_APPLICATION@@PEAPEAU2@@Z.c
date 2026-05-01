/*
 * XREFs of ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x180009CB8
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18000B074 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180027880 (CemRcTableFindOrInsertEx.c)
 */

void __fastcall HampPkgFindOrInsertApplication(
        struct _HAM_PACKAGE *a1,
        struct _HAM_APPLICATION *a2,
        struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *v3; // rbx
  struct _HAM_APPLICATION *v5; // [rsp+40h] [rbp+8h]

  v3 = a2;
  CemRcTableFindOrInsertEx((_DWORD)a1 + 40, (_DWORD)a2 + 96, (unsigned int)HampAppCompareByIdentity, (_DWORD)a2);
  if ( v5 != v3 )
    v3 = v5;
  *a3 = v3;
}
