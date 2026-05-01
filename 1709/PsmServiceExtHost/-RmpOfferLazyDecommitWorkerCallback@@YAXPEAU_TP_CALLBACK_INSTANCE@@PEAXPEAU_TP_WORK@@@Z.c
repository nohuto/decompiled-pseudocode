/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180035C00 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // r15d
  __int64 **v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 **v12; // rcx
  int v13; // eax
  int v14; // edx
  const GUID *v15; // r8
  const GUID *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  DWORD v21; // ebx
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  _BYTE v30[80]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]
  __int64 *v38; // [rsp+108h] [rbp+0h]
  int v39; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+114h] [rbp+Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800594B4, v4, v5, 2u, &pData);
  RtlQueryUnbiasedInterruptTime(&v25);
  v22 = 0LL;
  v6 = 0;
  RmpAcquireGlobalLock();
  v7 = (__int64 **)(a2 + 1);
  while ( *v7 != (__int64 *)v7 )
  {
    v8 = (__int64)(*v7 - 23);
    v9 = *v7;
    v10 = **v7;
    v11 = (__int64)(*v7 - 132);
    if ( *(__int64 **)(v10 + 8) != *v7 || (v12 = (__int64 **)v9[1], *v12 != v9) )
      __fastfail(3u);
    *v12 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v12;
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( *(int *)(v11 + 20) < 0 || (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 1892LL) & 2) != 0 )
    {
      RmpReleaseGlobalLock();
    }
    else
    {
      if ( (*(_BYTE *)(v11 + 1012) & 0x10) != 0 )
        *(_DWORD *)(v8 + 136) |= 8u;
      v27 = -1LL;
      v29 = 0LL;
      v28 = 0LL;
      LODWORD(v29) = (*(_DWORD *)(v11 + 1012) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)v11,
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v27) >= 0 )
      {
        v22 += v28;
        ++v6;
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)(v11 + 48), (struct _RM_SYSTEM_MEMORY_METRICS *)&v31);
        *(_QWORD *)(v8 + 112) = v38;
      }
      RmpAcquireGlobalLock();
      v13 = *(_DWORD *)(v8 + 136);
      if ( (v13 & 8) != 0 )
      {
        *(_DWORD *)(v8 + 136) = v13 & 0xFFFFFFF7;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v11, 0);
      }
    }
    RmpObjectRelease((char *)v11);
  }
  RtlQueryUnbiasedInterruptTime(&v24);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x19uLL) )
  {
    v34 = 0;
    v37 = 0;
    v32 = &v22;
    v35 = &v23;
    v40 = 0;
    v26 = v24 - v25;
    v38 = &v26;
    v33 = v14 - 17;
    LODWORD(v23) = v6;
    v36 = 4;
    v39 = v14 - 17;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800594DC, v15, v16, 5u, &v31);
  }
  v17 = v22;
  a2[7] += v22;
  v18 = a2[8];
  if ( v17 < v18 )
    v18 = v17;
  a2[8] = v18;
  v19 = a2[9];
  if ( v17 > v19 )
    v19 = v17;
  v20 = v24;
  *((_DWORD *)a2 + 22) += v6;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v19;
  a2[10] += v20 - v25;
  a2[4] = v20;
  RmpReleaseGlobalLock();
  v21 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v21, 0LL);
  }
}
