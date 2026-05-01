/*
 * XREFs of ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18000B074
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010DC0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800099C4 (-HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z @ 0x180009CB8 (-HampPkgFindOrInsertApplication@@YAXPEAU_HAM_PACKAGE@@PEAU_HAM_APPLICATION@@PEAPEAU2@@Z.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x18000B168 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000B184 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000B844 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_APPLICATION_INFO *a2,
        struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *v5; // rdi
  int v7; // ebx
  struct _HAM_APPLICATION *App; // rax
  int v9; // eax
  struct _HAM_PACKAGE *v11; // [rsp+20h] [rbp-E0h] BYREF
  struct _HAM_APPLICATION *v12; // [rsp+28h] [rbp-D8h] BYREF
  struct _HAM_APPLICATION *v13; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v14[208]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  HampPkgInfoFromAppInfo(a2, (struct _HAM_PACKAGE_INFO *)v14);
  v7 = HampPkgFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)v14, &v11);
  if ( v7 >= 0 )
  {
    App = HampPkgFindApp(v11, a2);
    v13 = App;
    if ( App )
      goto LABEL_12;
    v9 = HampAppCreate(v11, a2, &v12);
    v5 = v12;
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_7;
    HampPkgFindOrInsertApplication(v11, v12, &v13);
    App = v13;
    if ( v13 != v5 )
    {
LABEL_12:
      *a3 = App;
    }
    else
    {
      *a3 = v5;
      v5 = 0LL;
    }
    v7 = 0;
  }
LABEL_7:
  if ( v11 )
    CemRcObjectDereference(v11);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v7;
}
