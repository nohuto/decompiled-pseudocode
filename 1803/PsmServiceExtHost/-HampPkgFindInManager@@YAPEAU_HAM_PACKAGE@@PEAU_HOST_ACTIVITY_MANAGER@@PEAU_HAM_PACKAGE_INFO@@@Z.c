/*
 * XREFs of ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58
 * Callers:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180003920 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180005138 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HamSrvPackageGetDebugMode@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKPEAE@Z @ 0x18000EB60 (-HamSrvPackageGetDebugMode@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKPEAE@Z.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003FB60 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003FDA8 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180066478 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EEE0 (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x18000EF1C (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18000EF38 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000F02C (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  struct _HAM_SESSION *v3; // rax
  struct _CEM_RC_OBJECT *v4; // rsi
  struct _HAM_USER *v5; // rax
  struct _CEM_RC_OBJECT *v6; // rdi
  struct _HAM_PACKAGE *v7; // rax
  struct _HAM_PACKAGE *v8; // rbx

  v3 = HampSessionFindInManager(a1, *((_DWORD *)a2 + 50));
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = HampUserFindInSession(v3, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132));
  v6 = v5;
  if ( v5 && (v7 = HampPkgFindInUser(v5, a2), (v8 = v7) != 0LL) )
    HampPkgWaitForInitializationComplete(v7);
  else
    v8 = 0LL;
  CemRcObjectDereference(v4);
  if ( v6 )
    CemRcObjectDereference(v6);
  return v8;
}
