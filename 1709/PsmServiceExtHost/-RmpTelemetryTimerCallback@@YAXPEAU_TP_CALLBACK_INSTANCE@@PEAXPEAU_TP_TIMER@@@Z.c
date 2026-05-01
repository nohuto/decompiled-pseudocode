/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180020270
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000F9E0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rdx
  DWORD v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // r10
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v12[80]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  char *v14; // [rsp+B0h] [rbp-50h]
  __int64 v15; // [rsp+B8h] [rbp-48h]
  char *v16; // [rsp+C0h] [rbp-40h]
  __int64 v17; // [rsp+C8h] [rbp-38h]
  char *v18; // [rsp+D0h] [rbp-30h]
  __int64 v19; // [rsp+D8h] [rbp-28h]
  char *v20; // [rsp+E0h] [rbp-20h]
  __int64 v21; // [rsp+E8h] [rbp-18h]
  int *v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+F8h] [rbp-8h]
  int *v24; // [rsp+100h] [rbp+0h]
  __int64 v25; // [rsp+108h] [rbp+8h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  RmpAcquireGlobalLock();
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_PARTITION_TABLE *)(a2 + 312),
    v4,
    RmpTelemetryLogPartitionState,
    0LL);
  if ( *((_DWORD *)a2 + 77) )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v23 = v9;
      v15 = (unsigned int)(v9 + 4);
      v14 = a2 + 272;
      v16 = a2 + 280;
      v18 = a2 + 288;
      v20 = a2 + 296;
      v10 = *((_DWORD *)a2 + 76);
      v22 = &v10;
      v24 = &v11;
      v17 = v15;
      v19 = v15;
      v21 = v15;
      v11 = (int)v8;
      v25 = v9;
      TlgWrite(v6, &unk_180055CD1, v7, v8, v9 + 4, &pData);
    }
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    *((_QWORD *)a2 + 38) = 0LL;
  }
  *((_DWORD *)a2 + 142) = GetTickCount();
  RmpReleaseGlobalLock();
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
}
