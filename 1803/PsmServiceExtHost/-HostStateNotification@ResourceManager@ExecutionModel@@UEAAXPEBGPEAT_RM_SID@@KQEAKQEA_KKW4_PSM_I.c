/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18001BDF0
 * Callers:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 * Callees:
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18000B6F0 (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D788 (-RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIV.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800100F0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpRpExtHostEmptyNotification@@YAXPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800323FC (-RmpRpExtHostEmptyNotification@@YAXPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B94 (-RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180032D9C (-HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        int a4,
        unsigned int *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  void *v8; // rdi
  wchar_t *v10; // rbx
  int v12; // eax
  __int64 v14; // r12
  int v15; // eax
  char *v16; // rdi
  __int64 v17; // rbx
  int ObjectByHandleWithLock; // eax
  __int64 v19; // rcx
  PVOID v20; // rbx
  unsigned int v21; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  void *v23; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v25; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v26; // [rsp+58h] [rbp-A8h]
  wchar_t v27[280]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Destination[280]; // [rsp+290h] [rbp+190h] BYREF

  v8 = a3;
  v10 = a2;
  v21 = a4;
  v23 = a3;
  v26 = a2;
  if ( a8 <= 0xA )
  {
    v12 = 1697;
    if ( _bittest(&v12, a8) )
    {
      if ( a7 )
      {
        v14 = a7;
        while ( a8 )
        {
          switch ( a8 )
          {
            case 5u:
              goto LABEL_14;
            case 7u:
              if ( *a5 != 2 )
                break;
              RmpPsmAppInstanceIdInitialize(v27, v10, v8, a4, 2u, *a6);
              if ( (int)RmpActivityHostFindByPsmId(
                          *(struct _RM_SERVICE_GLOBALS **)(a1 + 144),
                          (struct _RM_PSM_HOST_INFO *)v27,
                          (struct _RM_ACTIVITY_HOST **)&P) >= 0 )
              {
                RmpAcquireGlobalLock();
                RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)P);
                RmpReleaseGlobalLock();
                RmpObjectRelease(P);
              }
              goto LABEL_20;
            case 9u:
LABEL_14:
              RmpAcquireGlobalLock();
              v17 = *(_QWORD *)(a1 + 144);
              v24 = *a6;
              RtlAcquireSRWLockShared(v17 + 32);
              ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(
                                         (struct _RM_OBJECT_TABLE *)(v17 + 16),
                                         &v24,
                                         (struct _RM_OBJECT_HEADER **)&v25);
              v19 = v17 + 32;
              LODWORD(v17) = ObjectByHandleWithLock;
              RtlReleaseSRWLockShared(v19);
              if ( (int)v17 >= 0 )
              {
                v20 = v25;
                P = v25;
                if ( a8 == 5 )
                  RmpActivityHostNewProcessNotification((struct _RM_ACTIVITY_HOST *)v25);
                RmpObjectRelease(v20);
              }
              RmpReleaseGlobalLock();
LABEL_19:
              v8 = v23;
LABEL_20:
              a4 = v21;
              break;
            case 0xAu:
              P = 0LL;
              RmpAcquireGlobalLock();
              v15 = RmpActivityHostFindByHostId(
                      *(struct _RM_SERVICE_GLOBALS **)(a1 + 144),
                      *a6,
                      (struct _RM_ACTIVITY_HOST **)&P);
              v16 = (char *)P;
              if ( v15 >= 0 )
              {
                HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
                HampHostCompleteQuiesce((struct _RM_HAM_ACTIVITY_HOST *)(v16 + 64));
                HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v16 + 64));
              }
              RmpReleaseGlobalLock();
              if ( v16 )
                RmpObjectRelease(v16);
              goto LABEL_19;
          }
          v10 = v26;
          ++a6;
          ++a5;
          if ( !--v14 )
            return;
        }
        RmpPsmAppInstanceIdInitialize(Destination, v10, v8, a4, *a5, *a6);
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(a1 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
        RmpRpExtHostEmptyNotification(
          (struct _RM_RESOURCE_POLICY_CONTEXT *)(*(_QWORD *)(a1 + 144) + 688LL),
          v10,
          (union _RM_SID *)v8,
          v21,
          *a5,
          *a6);
        goto LABEL_20;
      }
    }
  }
}
