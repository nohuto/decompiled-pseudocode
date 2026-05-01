/*
 * XREFs of ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800460A8
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068 (-RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVI.c)
 * Callees:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180045FCC (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180046840 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x1800468FC (-HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 *     CemRcTableFind @ 0x1800493B8 (CemRcTableFind.c)
 */

__int64 __fastcall HampAppFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_KEY *a2,
        struct _HAM_PACKAGE_INFO *a3,
        struct _HAM_APPLICATION **a4)
{
  struct _HAM_APPLICATION *v5; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _HAM_PACKAGE *v11; // rsi
  unsigned int v12; // edi
  struct _HAM_APPLICATION *v13; // rax
  int v14; // eax
  struct _HAM_APPLICATION *v16; // [rsp+20h] [rbp-18h] BYREF
  struct _HAM_PACKAGE *v17[2]; // [rsp+28h] [rbp-10h] BYREF

  v17[0] = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v7 = HampPkgFindOrCreate(a1, a3, v17);
  v11 = v17[0];
  v12 = v7;
  if ( v7 >= 0 )
  {
    v13 = (struct _HAM_APPLICATION *)CemRcTableFind((char *)v17[0] + 272, a2, HampAppCompareByIdentity);
    if ( v13 )
      goto LABEL_6;
    v17[0] = 0LL;
    v14 = HampAppCreate(v11, a2, &v16);
    v5 = v16;
    v12 = v14;
    if ( v14 < 0 )
      goto LABEL_8;
    HampPkgFindOrInsertApplication(v11, v16, v17);
    v13 = v17[0];
    if ( v17[0] != v5 )
    {
LABEL_6:
      *a4 = v13;
    }
    else
    {
      *a4 = v5;
      v5 = 0LL;
    }
    v12 = 0;
  }
LABEL_8:
  if ( v11 )
    CemRcObjectDereference(v11, v8, v9, v10);
  if ( v5 )
    CemRcObjectDereference(v5, v8, v9, v10);
  return v12;
}
