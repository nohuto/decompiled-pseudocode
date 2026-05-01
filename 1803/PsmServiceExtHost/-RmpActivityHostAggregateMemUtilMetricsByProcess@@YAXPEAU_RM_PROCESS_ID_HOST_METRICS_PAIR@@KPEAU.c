/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x18002E524
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18002E214 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18002E7AC (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rbx
  int v8; // ecx
  __int64 v9; // rsi
  int v10; // edx
  char *v11; // rdi
  __int16 v12; // bx
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rcx
  int v16; // [rsp+3Ch] [rbp-CCh]
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h]
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]
  __int16 v26; // [rsp+A6h] [rbp-62h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  int *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int64 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  char *v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  char *v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  char *v40; // [rsp+128h] [rbp+20h]
  __int64 v41; // [rsp+130h] [rbp+28h]

  v4 = a2;
  memset_0(v22, 0, 0x40uLL);
  v8 = (2 * (a4 & 4)) | 1;
  v9 = 0LL;
  if ( (a4 & 8) == 0 )
    v8 = 2 * (a4 & 4);
  v10 = v8 | 0x40;
  if ( (a4 & 0x20) == 0 )
    v10 = v8;
  v16 = v10;
  if ( (_DWORD)v4 )
  {
    v20 = v4;
    v11 = (char *)a3 + 4;
    v12 = v26;
    do
    {
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 != v9 )
      {
        if ( v9 )
        {
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v22);
          v13 = *(_QWORD *)a1;
        }
        memset_0(v22, 0, 0x40uLL);
        v10 = v16;
        v12 = a4;
        v26 = a4;
        v9 = v13;
      }
      if ( hProvider > 5u )
      {
        if ( (qword_1800920C0 & 1) == 0 || (v14 = 1, (qword_1800920C8 & 1) != qword_1800920C8) )
          v14 = 0;
        if ( v14 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL);
          v28 = &v21;
          v17 = *((_DWORD *)v11 - 1);
          v30 = &v17;
          v32 = &v18;
          LODWORD(v19) = *(_DWORD *)v11;
          v34 = &v19;
          v36 = v11 + 12;
          v38 = v11 + 20;
          v40 = v11 + 44;
          v21 = v15;
          v29 = 8LL;
          v31 = 4LL;
          v18 = v10;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 8LL;
          v39 = 8LL;
          v41 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007DE39, 0LL, 0LL, 9u, &pData);
        }
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v11 & 8) != 0 )
        {
          v23 += *(_QWORD *)(v11 + 20);
        }
        else
        {
          v12 &= ~4u;
          v26 = v12;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v11 & 1) != 0 )
        {
          v24 += *(_QWORD *)(v11 + 12);
        }
        else
        {
          v12 &= ~8u;
          v26 = v12;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v11 & 0x40) != 0 )
        {
          v25 += *(_QWORD *)(v11 + 44);
        }
        else
        {
          v12 &= ~0x20u;
          v26 = v12;
        }
      }
      v10 = v16;
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v11 += 64;
      --v20;
    }
    while ( v20 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v22);
}
