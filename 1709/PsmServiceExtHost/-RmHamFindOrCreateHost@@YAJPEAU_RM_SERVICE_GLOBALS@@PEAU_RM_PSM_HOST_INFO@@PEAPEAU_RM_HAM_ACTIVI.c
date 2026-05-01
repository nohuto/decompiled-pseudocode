/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180040068
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043810 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180014AD0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800366DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180040500 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?HampRmHostInfoToPackageInfo@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800440D4 (-HampRmHostInfoToPackageInfo@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800460A8 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEA.c)
 *     CemRcObjectDereference @ 0x1800492EC (CemRcObjectDereference.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _RM_SERVICE_GLOBALS *v3; // r15
  HANDLE *v4; // rsi
  struct _HAM_APPLICATION *v5; // r14
  char *v8; // rbx
  int ActivityHost; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_PARTITION *v15; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_APPLICATION *v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[208]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[464]; // [rsp+120h] [rbp+20h] BYREF

  v3 = RmSvcGlobals;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  RmpAcquireGlobalLock();
  if ( (int)RmpActivityHostFindByHostId(v3, *((_QWORD *)a2 + 68), (struct _RM_ACTIVITY_HOST **)&P) >= 0 )
  {
    v8 = (char *)P;
    if ( (*((_BYTE *)P + 772) & 1) != 0 )
    {
      ++*((_QWORD *)P + 80);
      *a3 = (struct _RM_HAM_ACTIVITY_HOST *)(v8 + 64);
      ActivityHost = 0;
    }
    else
    {
      ActivityHost = -1073741776;
    }
LABEL_11:
    RmpReleaseGlobalLock();
    goto LABEL_14;
  }
  RmpReleaseGlobalLock();
  ActivityHost = RmpHamQueryActivityHostPartition(v3, a2, &v15);
  if ( ActivityHost >= 0 )
  {
    StringCchCopyW(v18, 232LL, (char *)a2);
    ActivityHost = HampRmHostInfoToPackageInfo(a2, (struct _HAM_PACKAGE_INFO *)v17);
    if ( ActivityHost >= 0 )
    {
      ActivityHost = HampAppFindOrCreate(
                       (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1288),
                       (struct _RM_PSM_KEY *)v18,
                       (struct _HAM_PACKAGE_INFO *)v17,
                       &v16);
      if ( ActivityHost >= 0 )
      {
        RmpAcquireGlobalLock();
        v4 = (HANDLE *)v15;
        v5 = v16;
        ActivityHost = RmHamFindOrCreateActivityHost(v3, a2, v16, v15, (struct _RM_ACTIVITY_HOST **)&P);
        if ( ActivityHost >= 0 )
        {
          RmpReleaseGlobalLock();
          v8 = (char *)P;
          ActivityHost = 0;
          *a3 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64);
          goto LABEL_14;
        }
        v8 = (char *)P;
        goto LABEL_11;
      }
      v5 = v16;
    }
  }
  v4 = (HANDLE *)v15;
  v8 = (char *)P;
LABEL_14:
  if ( v8 )
    RmpObjectRelease(v8);
  if ( v4 )
    RmpPartitionRelease(v4);
  if ( v5 )
    CemRcObjectDereference(v5, v10, v11, v12);
  return (unsigned int)ActivityHost;
}
