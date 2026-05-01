/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180004994
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180004834 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x180004180 (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  _QWORD *Heap; // rsi
  unsigned int v7; // edi
  unsigned int i; // r12d
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // r9
  int v14; // ecx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v17; // rax
  __int64 result; // rax
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned int v21; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-45h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  int v24; // [rsp+50h] [rbp-39h]
  unsigned int v25; // [rsp+54h] [rbp-35h] BYREF
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR **v26; // [rsp+58h] [rbp-31h]
  unsigned int *v27; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v29; // [rsp+88h] [rbp-1h]
  int v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+94h] [rbp+Bh]

  v26 = a3;
  v27 = a4;
  v24 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v25 = a2;
  P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
  if ( P )
  {
    v7 = 0;
    for ( i = 0; i < a2; a1 = (struct _RM_ACTIVITY_HOST_METRICS *)((char *)a1 + 64) )
    {
      v9 = *((_QWORD *)a1 + 6);
      v10 = *(_DWORD *)(v9 + 56);
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v21 = -1073741811;
          goto LABEL_13;
        }
        *Heap = *(unsigned int *)(v9 + 88);
        v22 = 1;
      }
      else
      {
        v11 = v24;
        while ( 1 )
        {
          v22 = v11;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL) + 152LL))(
                  v9 + 552,
                  *(unsigned int *)(v9 + 620),
                  v9 + 88,
                  *(unsigned int *)(v9 + 624),
                  *(_QWORD *)(v9 + 24),
                  Heap,
                  &v22);
          v21 = v12;
          if ( v12 >= 0 )
            break;
          if ( v12 != -2147483643 )
          {
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
            {
              v31 = 0;
              v29 = &v21;
              v30 = 4;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057ABE, v19, v20, 3u, &pData);
            }
            goto LABEL_11;
          }
          Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v22);
          if ( !Heap )
          {
            result = 3221225495LL;
            v21 = -1073741801;
            goto LABEL_14;
          }
          v11 = v22;
          v24 = v22;
        }
        v10 = v22;
        if ( !v22 )
          goto LABEL_11;
      }
      if ( v25 - v7 < v10 )
      {
        v21 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&P, &v25, v10 + v7);
        if ( v21 )
          goto LABEL_13;
        v10 = v22;
      }
      v13 = 0LL;
      if ( v10 )
      {
        do
        {
          v14 = Heap[v13];
          v13 = (unsigned int)(v13 + 1);
          v15 = P;
          v16 = v7++;
          v16 *= 2LL;
          *((_DWORD *)P + 2 * v16 + 2) = v14;
          v15[v16] = a1;
        }
        while ( (unsigned int)v13 < v22 );
      }
LABEL_11:
      ++i;
    }
    v17 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
    P = 0LL;
    v21 = 0;
    *v26 = v17;
    *v27 = v7;
  }
  else
  {
    v21 = -1073741801;
  }
LABEL_13:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  result = v21;
LABEL_14:
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v21;
  }
  return result;
}
