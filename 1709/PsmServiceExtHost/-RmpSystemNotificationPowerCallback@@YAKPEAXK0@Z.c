/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180020590
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180020740 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x1800321DC (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x1800322D8 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  struct ExecutionModel::BaseResourceSet *v10; // r8
  ExecutionModel::ResourceManager *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // eax
  DWORD v16; // ebx
  int v18; // edx
  bool v19; // zf
  unsigned __int64 v20; // rdx
  unsigned int v21; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-55h]
  int v23; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-4Dh] BYREF
  char v25[80]; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+7h] BYREF
  int *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  unsigned int *v30; // [rsp+C8h] [rbp+37h]
  int v31; // [rsp+D0h] [rbp+3Fh]
  int v32; // [rsp+D4h] [rbp+43h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  RmpAcquireGlobalLock();
  v6 = *((_DWORD *)a1 + 164);
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  if ( v7 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v8 = v6 & 0xFFFFFFFD;
    else
      v8 = v6 | 2;
  }
  else if ( *((_DWORD *)a3 + 5) )
  {
    v8 = v6 | 1;
  }
  else
  {
    v8 = v6 & 0xFFFFFFFE;
  }
  v21 = *((_DWORD *)a1 + 164);
  v22 = v8;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v5,
    (__int64 (__fastcall *)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v21);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = (struct ExecutionModel::BaseResourceSet *)*((unsigned int *)a1 + 131);
  v11 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 237);
  if ( (_DWORD)v10 )
  {
    v18 = (v22 >> 1) & 1;
    if ( ((v21 >> 1) & 1) != v18 )
    {
      v19 = v18 == 0;
      v20 = *((unsigned int *)a1 + 131);
      if ( v19 )
      {
        *((_QWORD *)v11 + 15) -= v10;
        if ( (*(_BYTE *)(*((_QWORD *)v11 + 13) + 1392LL) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v11, v20);
      }
      else
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v11, v20, v10);
      }
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v15 = *((_DWORD *)a1 + 164);
    v29 = 0;
    v32 = 0;
    v23 = v15;
    v27 = &v23;
    v30 = &v24;
    v28 = 4;
    v24 = v8;
    v31 = 4;
    TlgWrite(v12, &unk_180058552, v13, v14, 4u, &pData);
  }
  *((_DWORD *)a1 + 164) = v8;
  RmpReleaseGlobalLock();
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
  return 0LL;
}
