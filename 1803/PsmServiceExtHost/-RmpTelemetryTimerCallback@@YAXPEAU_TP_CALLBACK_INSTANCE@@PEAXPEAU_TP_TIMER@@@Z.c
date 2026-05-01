/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800341C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18001E210 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  __int64 v4; // rdx
  DWORD v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // r9d
  __int64 v8; // r10
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  char *v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  char *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]
  char *v17; // [rsp+110h] [rbp+10h]
  __int64 v18; // [rsp+118h] [rbp+18h]
  char *v19; // [rsp+120h] [rbp+20h]
  __int64 v20; // [rsp+128h] [rbp+28h]
  int *v21; // [rsp+130h] [rbp+30h]
  __int64 v22; // [rsp+138h] [rbp+38h]
  int *v23; // [rsp+140h] [rbp+40h]
  __int64 v24; // [rsp+148h] [rbp+48h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  RmpAcquireGlobalLock();
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_PARTITION_TABLE *)(a2 + 336),
    v4,
    RmpTelemetryLogPartitionState,
    0LL);
  if ( *((_DWORD *)a2 + 83) )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000001uLL) )
    {
      v22 = v8;
      v14 = (unsigned int)(v8 + 4);
      v13 = a2 + 296;
      v15 = a2 + 304;
      v17 = a2 + 312;
      v19 = a2 + 320;
      v9 = *((_DWORD *)a2 + 82);
      v21 = &v9;
      v23 = &v10;
      v16 = v14;
      v18 = v14;
      v20 = v14;
      v10 = v7;
      v24 = v8;
      TlgWrite(v6, &unk_18007C1CA, 0LL, 0LL, v8 + 4, &pData);
    }
    *((_QWORD *)a2 + 38) = -1LL;
    *((_QWORD *)a2 + 37) = 0LL;
    *((_QWORD *)a2 + 39) = 0LL;
    *((_QWORD *)a2 + 40) = 0LL;
    *((_QWORD *)a2 + 41) = 0LL;
  }
  *((_DWORD *)a2 + 148) = GetTickCount();
  RmpReleaseGlobalLock();
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, 0LL);
  }
}
