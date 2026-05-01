/*
 * XREFs of ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180066478
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003F978 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180063C64 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x18000B168 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000B184 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

struct _HAM_APPLICATION *__fastcall HampAppFind(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_APPLICATION_INFO *a2)
{
  struct _HAM_PACKAGE *v4; // rax
  struct _HAM_APPLICATION *App; // rbx
  struct _CEM_RC_OBJECT *v6; // rdi
  _BYTE v8[208]; // [rsp+20h] [rbp-E8h] BYREF

  HampPkgInfoFromAppInfo(a2, (struct _HAM_PACKAGE_INFO *)v8);
  v4 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v8);
  App = 0LL;
  v6 = v4;
  if ( v4 )
  {
    App = HampPkgFindApp(v4, a2);
    CemRcObjectDereference(v6);
  }
  return App;
}
