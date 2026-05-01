/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010DC0
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011250 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 * Callees:
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000AFC8 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x18000B074 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010F30 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180028384 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031AB0 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180066560 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _CEM_RC_OBJECT *v3; // rdi
  int HostWithFullInfo; // ebx
  ULONG v8; // eax
  __int64 v9; // rdx
  PVOID v10; // rsi
  struct _RM_PARTITION *v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_APPLICATION *v13; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[544]; // [rsp+50h] [rbp-B0h] BYREF

  P = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  HostWithFullInfo = RmHamFindHostWithFullInfo(a1, a2, a3);
  if ( HostWithFullInfo == -1073741275 )
  {
    HostWithFullInfo = RmpHamQueryActivityHostPartition((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1312), a2, &v12);
    if ( HostWithFullInfo >= 0 )
    {
      v8 = RtlLengthSid((char *)a2 + 464);
      HampAppInfoInitialize(
        (const unsigned __int16 *)a2,
        (unsigned __int8 *)a2 + 464,
        v8,
        *((_DWORD *)a2 + 133),
        (struct _HAM_APPLICATION_INFO *)v15);
      HostWithFullInfo = HampAppFindOrCreate(a1, (struct _HAM_APPLICATION_INFO *)v15, &v13);
      if ( HostWithFullInfo < 0 )
      {
        v3 = v13;
      }
      else
      {
        RmpAcquireGlobalLock();
        v3 = v13;
        HostWithFullInfo = RmHamFindOrCreateActivityHost(
                             (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1312),
                             a2,
                             v13,
                             v12,
                             (struct _RM_ACTIVITY_HOST **)&P);
        RmpReleaseGlobalLock();
        v10 = P;
        if ( HostWithFullInfo >= 0 )
        {
          HostWithFullInfo = 0;
          *a3 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64);
        }
        else if ( HostWithFullInfo == -1058275322 )
        {
          HampAppQueueTerminate(v3, v9, 4864LL);
        }
        if ( v10 )
          RmpObjectRelease(v10);
      }
    }
    if ( v12 )
      RmpPartitionRelease(v12);
    if ( v3 )
      CemRcObjectDereference(v3);
  }
  return (unsigned int)HostWithFullInfo;
}
