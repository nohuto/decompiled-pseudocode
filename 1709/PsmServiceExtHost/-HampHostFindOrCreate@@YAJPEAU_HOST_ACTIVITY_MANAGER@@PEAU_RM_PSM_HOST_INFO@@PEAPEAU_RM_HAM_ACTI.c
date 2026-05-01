/*
 * XREFs of ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043810
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x1800423B4 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019FA0 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068 (-RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVI.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043390 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  int v4; // eax
  __int64 v5; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  int v7; // edi
  struct _RM_HAM_ACTIVITY_HOST *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = RmHamFindOrCreateHost(a1, a2, &v10);
  v6 = v10;
  v7 = v4;
  if ( v4 >= 0 )
  {
    v7 = HampHostCheckCompletePackageInsertion(v10, v5);
    if ( v7 >= 0 )
    {
      *a3 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v6 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64));
    RmpReleaseGlobalLock();
  }
  return (unsigned int)v7;
}
