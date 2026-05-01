/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800540F0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  int v4; // r14d
  _QWORD **v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  DWORD v16; // ebx
  unsigned __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  int v29; // [rsp+12Ch] [rbp+2Ch]
  int *v30; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+138h] [rbp+38h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F66B, 0LL, 0LL, 2u, &pData);
  RtlQueryUnbiasedInterruptTime(&v20);
  v17 = 0LL;
  v4 = 0;
  RmpAcquireGlobalLock();
  v5 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v7 = *v6;
    v8 = v6 - 150;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( *((int *)v8 + 6) >= 0 && (*(_BYTE *)(v8[6] + 2228LL) & 2) == 0 )
    {
      if ( (*((_BYTE *)v8 + 1156) & 0x10) != 0 )
        *((_DWORD *)v6 - 12) |= 8u;
      v22 = -1LL;
      v24 = 0LL;
      v23 = 0LL;
      LODWORD(v24) = (*((_DWORD *)v8 + 289) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v6 - 150),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v22) >= 0 )
      {
        v17 += v23;
        ++v4;
        RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v8[7], (struct _RM_SYSTEM_MEMORY_METRICS *)&v26);
        *(v6 - 9) = v33;
      }
      RmpAcquireGlobalLock();
      v10 = *((_DWORD *)v6 - 12);
      if ( (v10 & 8) != 0 )
      {
        *((_DWORD *)v6 - 12) = v10 & 0xFFFFFFF7;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v6 - 150));
      }
    }
    RmpObjectRelease((char *)v6 - 1200);
  }
  RtlQueryUnbiasedInterruptTime(&v19);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x19uLL) )
  {
    v29 = 0;
    v32 = 0;
    v27 = &v17;
    v30 = &v18;
    v35 = 0;
    v21 = v19 - v20;
    v33 = &v21;
    v28 = v11 - 17;
    v18 = v4;
    v31 = 4;
    v34 = v11 - 17;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F693, 0LL, 0LL, 5u, &v26);
  }
  v12 = v17;
  a2[7] += v17;
  v13 = a2[8];
  if ( v12 < v13 )
    v13 = v12;
  a2[8] = v13;
  v14 = a2[9];
  if ( v12 > v14 )
    v14 = v12;
  v15 = v19;
  *((_DWORD *)a2 + 22) += v4;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v14;
  a2[10] += v15 - v20;
  a2[4] = v15;
  RmpReleaseGlobalLock();
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
}
