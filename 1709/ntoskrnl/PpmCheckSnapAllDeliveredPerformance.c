/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x140095700
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x1401313E0 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x14011512C (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char PpmCheckSnapAllDeliveredPerformance()
{
  unsigned __int64 v0; // r9
  unsigned __int64 v1; // rsi
  unsigned __int16 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // r12
  struct _KPRCB *v5; // rdi
  bool v6; // r15
  _PROC_PERF_CHECK *PerfCheck; // rbx
  unsigned __int64 *p_Time; // r14
  char v9; // al
  unsigned __int64 Time; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  int v18; // r9d
  unsigned __int64 *v19; // r10
  __int64 v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int16 v23; // di
  unsigned int v24; // esi
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int16 v29; // [rsp+40h] [rbp-C0h]
  __int16 Group; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  int v35; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+68h] [rbp-98h]
  unsigned __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v38; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v39[21]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  int *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]

  KeCopyAffinityEx((__int64)&v38, PpmCheckRegistered);
  v1 = v39[0];
  v2 = 0;
  v29 = 0;
  while ( 1 )
  {
    v33 = v38;
    if ( !v1 )
      break;
LABEL_3:
    _BitScanForward64(&v3, v1);
    v1 &= ~(1LL << v3);
    v34 = v3;
    v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + (unsigned __int8)v3];
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      v5 = 0LL;
    }
    else
    {
      _mm_lfence();
      v5 = (struct _KPRCB *)KiProcessorBlock[v4];
    }
    v6 = v5 != KeGetCurrentPrcb();
    PerfCheck = v5->PowerState.PerfCheck;
    if ( !PerfCheck )
      goto LABEL_22;
    p_Time = &PerfCheck->CurrentSnap.Time;
    LOBYTE(v0) = 1;
    v9 = PpmSnapPerformanceAccumulation((int)v5, 0, v6, v0, &PerfCheck->CurrentSnap);
    v2 = v29;
    if ( v9 )
    {
      v0 = *p_Time;
      Time = PerfCheck->LastDeliveredSnap.Time;
      if ( *p_Time > Time )
      {
        v0 -= Time;
        v11 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
        v36 = v0;
        if ( v11 <= v0 )
        {
          if ( v6 )
            goto LABEL_10;
          goto LABEL_35;
        }
        if ( v6 )
        {
          v2 = v29;
        }
        else
        {
LABEL_35:
          PpmPerfCheckForIllegalProcessorThrottle(v5);
          v0 = v36;
LABEL_10:
          if ( v11 )
          {
            v12 = (PerfCheck->CurrentSnap.PerformanceScaledActive - PerfCheck->LastDeliveredSnap.PerformanceScaledActive)
                / v11;
            if ( __PAIR64__(
                   (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                 / v11,
                   v12) != *(_QWORD *)&PerfCheck->LastDeliveredPerformance )
            {
              v32 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                  / v11;
              v31 = v12;
              if ( PpmEtwRegistered && PpmEtwHandle )
              {
                if ( (v13 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v13 + 80))
                  && (unsigned __int8)(*(_BYTE *)(v13 + 84) - 1) > 2u
                  && *(char *)(v13 + 96) < 0
                  && (*(_QWORD *)(v13 + 104) & 0x80LL) == *(_QWORD *)(v13 + 104)
                  || *(_BYTE *)(PpmEtwHandle + 101)
                  && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, 4u, 128LL) )
                {
                  Group = v5->Group;
                  v37 = PpmConvertTime(v0, PopQpcFrequency, 0xF4240uLL);
                  *(_QWORD *)&UserData.Size = 2LL;
                  UserData.Ptr = (ULONGLONG)&Group;
                  v42 = 1LL;
                  p_GroupIndex = &v5->GroupIndex;
                  v43 = &v31;
                  v45 = &v37;
                  v47 = &v32;
                  v44 = 4LL;
                  v46 = 8LL;
                  v48 = 4LL;
                  EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                }
              }
            }
          }
          v2 = v29;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)p_Time;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
          *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
LABEL_22:
          v15 = KiProcessorIndexToNumberMappingTable[v4];
          v16 = v15 >> 6;
          if ( v33 > (unsigned int)v16 )
          {
            v17 = &v39[v16];
            *v17 &= ~(1LL << (v15 & 0x3F));
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v29 = ++v2;
    if ( v2 >= (unsigned int)v38 )
      break;
    v1 = v39[v2];
    if ( v1 )
      goto LABEL_3;
  }
  v18 = 0;
  if ( v38 )
  {
    v19 = v39;
    v20 = v38;
    do
    {
      v21 = *v19++;
      v18 += (unsigned int)((0x101010101010101LL
                           * ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v21 - ((v21 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v21 - ((v21 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v20;
    }
    while ( v20 );
  }
  PpmCheckCount = v18;
  if ( !v18 )
    return 1;
  v22 = v39[0];
  v23 = 0;
  v24 = v38;
  while ( v22 )
  {
LABEL_31:
    _BitScanForward64(&v25, v22);
    v22 &= ~(1LL << v25);
    v35 = v25;
    v26 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v23 + (unsigned __int8)v25];
    if ( (unsigned int)v26 >= (unsigned int)KeNumberProcessors_0 )
      v27 = 0LL;
    else
      v27 = KiProcessorBlock[v26];
    _m_prefetchw((const void *)(v27 + 24144));
    if ( !_InterlockedOr((volatile signed __int32 *)(v27 + 24144), 1u) )
      KiInsertQueueDpc(v27 + 24080, 0LL, 0LL, 0LL, 0);
  }
  while ( ++v23 < v24 )
  {
    v22 = v39[v23];
    if ( v22 )
      goto LABEL_31;
  }
  return 0;
}
