/*
 * XREFs of ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0
 * Callers:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EDB4 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000E7D0 (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EEC0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001825C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A79C (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpUtilIsProcessLive@@YAKK@Z @ 0x180031820 (-RmpUtilIsProcessLive@@YAKK@Z.c)
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180035850 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035B0C (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 *     ?RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z @ 0x18003AF80 (-RmpEnforcementInfoInitializeProcess@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ApplyResourceSet_Legacy(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        DWORD dwProcessId,
        struct _RM_ACTIVITY_HOST **a4)
{
  ExecutionModel::ResourceManager *v6; // rbx
  char v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  FILETIME ProcessStartTime; // rdi
  __int64 v11; // r14
  struct ExecutionModel::ResourceSet *v12; // r14
  __int64 v13; // rax
  struct _RM_SERVICE_GLOBALS *v14; // rcx
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  int v21; // ebx
  int v23; // [rsp+30h] [rbp-D0h]
  _RM_PROCESS_INFO pData; // [rsp+34h] [rbp-CCh] BYREF

  pData.Process.ProcessStartTime = 0LL;
  v23 = 0;
  v6 = this;
  *(_QWORD *)pData.strAppName = this;
  *(_QWORD *)&pData.strAppName[4] = a4;
  v7 = 0;
  v8 = 0LL;
  memset_0(&pData.strAppName[8], 0, 0x228uLL);
  v9 = *((_QWORD *)v6 + 26);
  *(_DWORD *)&pData.strAppName[8] = dwProcessId;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(
              v9,
              1,
              (unsigned __int8 *)&pData.strAppName[8],
              (__int64 *)&pData.Process.ProcessStartTime) < 0 )
  {
    v13 = *((_QWORD *)a2 + 179);
    v14 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)v6 + 26);
    v12 = 0LL;
    pData.Process.dwProcessId = dwProcessId;
    v15 = RmpActivityHostCreateHostProcess(
            v14,
            *(struct _RM_PARTITION **)(v13 + 112),
            &pData,
            (struct _RM_ACTIVITY_HOST **)&pData.Process.ProcessStartTime);
    ProcessStartTime = pData.Process.ProcessStartTime;
    if ( v15 < 0 )
    {
      v16 = v15 | 0x10000000;
      goto LABEL_43;
    }
    v6 = *(ExecutionModel::ResourceManager **)pData.strAppName;
    v7 = 1;
  }
  else
  {
    ProcessStartTime = pData.Process.ProcessStartTime;
    v11 = *(_QWORD *)(*(_QWORD *)&pData.Process.ProcessStartTime + 840LL);
    if ( v11 == *(_QWORD *)&pData.Process.ProcessStartTime + 840LL )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = (struct ExecutionModel::ResourceSet *)(v11 - 1416);
      if ( v12 )
        (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( v12 == a2 )
    goto LABEL_36;
  v8 = *((_QWORD *)a2 + 235);
  if ( !v8 )
    goto LABEL_16;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)a2 + 235));
  if ( v12 )
  {
    if ( (struct ExecutionModel::ResourceSet *)v8 != v12 )
    {
LABEL_13:
      v16 = -2147024809;
      goto LABEL_37;
    }
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v8 + 1400) )
  {
LABEL_16:
    if ( (*((_BYTE *)a2 + 1452) & 2) != 0 && !v12 )
    {
      **(_QWORD **)&pData.strAppName[4] = 0LL;
      v16 = 0;
      goto LABEL_39;
    }
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 1400) != 2 || *(_BYTE *)(v8 + 12) != 1 && (*(_BYTE *)(v8 + 1452) & 4) != 0 )
        goto LABEL_13;
      ExecutionModel::ResourceManager::TransitionResources(v6, (struct ExecutionModel::ResourceSet *)v8, a2);
      v16 = RmpResourceSetTransition(*(struct _RM_RESOURCE_SET **)(v8 + 1432), *((struct _RM_RESOURCE_SET **)a2 + 179));
      if ( v16 < 0 )
      {
LABEL_37:
        if ( v12 )
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
        goto LABEL_39;
      }
    }
    *((_QWORD *)a2 + 18) = *(_QWORD *)(*(_QWORD *)&ProcessStartTime + 24LL);
    if ( v12 )
      RmpActivityHostUnapplyResourceSet(*(struct _RM_ACTIVITY_HOST **)&ProcessStartTime, v12, 1);
    RmpActivityHostApplyResourceSet(*(struct _RM_ACTIVITY_HOST **)&ProcessStartTime, a2);
    RmpActivityHostResourceSetsChanged(*(struct _RM_ACTIVITY_HOST **)&ProcessStartTime, 3);
    if ( v7
      && (v17 = RmpEnforcementInfoInitializeProcess(
                  *(PVOID *)&ProcessStartTime,
                  dwProcessId,
                  *(void **)(*(_QWORD *)(*(_QWORD *)pData.strAppName + 208LL) + 40LL)),
          v16 = v17 | 0x10000000,
          v17 < 0) )
    {
      if ( (unsigned int)RmpUtilIsProcessLive(dwProcessId) )
      {
        v23 = 0;
        goto LABEL_37;
      }
      v23 = 1;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        *(_DWORD *)&pData.strServiceShortName[54] = 0;
        *(_QWORD *)&pData.strServiceShortName[48] = &pData;
        pData.Process.dwProcessId = dwProcessId;
        *(_DWORD *)&pData.strServiceShortName[52] = 4;
        TlgWrite(v18, &unk_180055ED6, v19, v20, 3u, (EVENT_DATA_DESCRIPTOR *)&pData.strServiceShortName[32]);
      }
    }
    else
    {
      v21 = RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)&ProcessStartTime);
      if ( v21 < 0 )
      {
        v16 = v21 | 0x10000000;
        goto LABEL_37;
      }
      ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        *(ExecutionModel::ResourceManager **)pData.strAppName,
        *(struct _RM_ACTIVITY_HOST **)&ProcessStartTime);
      **(_QWORD **)&pData.strAppName[4] = ProcessStartTime;
      ProcessStartTime = 0LL;
    }
LABEL_36:
    v16 = 0;
    goto LABEL_37;
  }
  v16 = -2147220218;
LABEL_39:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v23 )
  {
    RmpActivityHostZeroProcessNotification(*(char **)&ProcessStartTime);
    v7 = 0;
  }
LABEL_43:
  if ( ProcessStartTime )
  {
    if ( v7 )
      RmpActivityHostDelete(*(struct _RTL_BITMAP ***)&ProcessStartTime);
    RmpObjectRelease(*(char **)&ProcessStartTime);
  }
  return (unsigned int)v16;
}
