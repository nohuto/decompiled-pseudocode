/*
 * XREFs of PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250
 * Callers:
 *     PpmCheckUpdateDeliveredPerformanceIfTracingEnabled @ 0x140136100 (PpmCheckUpdateDeliveredPerformanceIfTracingEnabled.c)
 * Callees:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x14001B890 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400F3740 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  unsigned int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  int v17; // r9d
  unsigned __int64 *v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int16 v22; // di
  unsigned int v23; // esi
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int16 v28; // [rsp+40h] [rbp-C0h]
  __int16 Group; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+60h] [rbp-A0h]
  int v34; // [rsp+68h] [rbp-98h]
  int v35; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v37; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v38[21]; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  int *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  int *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]

  KeCopyAffinityEx((__int64)&v37, PpmCheckRegistered);
  v1 = v38[0];
  v2 = 0;
  v28 = 0;
  while ( 1 )
  {
    v32 = v37;
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
      goto LABEL_19;
    p_Time = &PerfCheck->CurrentSnap.Time;
    LOBYTE(v0) = 1;
    v9 = PpmSnapPerformanceAccumulation((int)v5, 0, v6, v0, &PerfCheck->CurrentSnap);
    v2 = v28;
    if ( v9 )
    {
      v0 = *p_Time;
      Time = PerfCheck->LastDeliveredSnap.Time;
      if ( *p_Time > Time )
      {
        v0 -= Time;
        v11 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
        v33 = v0;
        if ( v11 > v0 )
        {
          if ( !v6 )
          {
LABEL_32:
            PpmPerfCheckForIllegalProcessorThrottle((__int64)v5);
            v0 = v33;
            goto LABEL_10;
          }
          v2 = v28;
        }
        else
        {
          if ( !v6 )
            goto LABEL_32;
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
              v31 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive)
                  / v11;
              v30 = v12;
              if ( PpmEtwRegistered )
              {
                if ( PpmEtwHandle )
                {
                  if ( (v13 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v13 + 80))
                    && (unsigned __int8)(*(_BYTE *)(v13 + 84) - 1) > 2u
                    && *(char *)(v13 + 96) < 0
                    && (*(_QWORD *)(v13 + 104) & 0x80LL) == *(_QWORD *)(v13 + 104)
                    || *(_BYTE *)(PpmEtwHandle + 101)
                    && EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, 4u, 128LL) )
                  {
                    Group = v5->Group;
                    v36 = PpmConvertTime(v0, PopQpcFrequency, 0xF4240uLL);
                    *(_QWORD *)&UserData.Size = 2LL;
                    UserData.Ptr = (ULONGLONG)&Group;
                    v41 = 1LL;
                    p_GroupIndex = &v5->GroupIndex;
                    v42 = &v30;
                    v44 = &v36;
                    v46 = &v31;
                    v43 = 4LL;
                    v45 = 8LL;
                    v47 = 4LL;
                    EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
                  }
                }
              }
            }
          }
          v2 = v28;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)p_Time;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
          *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
          *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
LABEL_19:
          v14 = KiProcessorIndexToNumberMappingTable[v4];
          v15 = v14 >> 6;
          if ( v32 > (unsigned int)v15 )
          {
            v16 = &v38[v15];
            *v16 &= ~(1LL << (v14 & 0x3F));
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v28 = ++v2;
    if ( v2 >= (unsigned int)v37 )
      break;
    v1 = v38[v2];
    if ( v1 )
      goto LABEL_3;
  }
  v17 = 0;
  if ( v37 )
  {
    v18 = v38;
    v19 = v37;
    do
    {
      v20 = *v18++;
      v17 += (unsigned int)((0x101010101010101LL
                           * ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v19;
    }
    while ( v19 );
  }
  PpmCheckCount = v17;
  if ( !v17 )
    return 1;
  v21 = v38[0];
  v22 = 0;
  v23 = v37;
  while ( v21 )
  {
LABEL_28:
    _BitScanForward64(&v24, v21);
    v21 &= ~(1LL << v24);
    v35 = v24;
    v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v22 + (unsigned __int8)v24];
    if ( (unsigned int)v25 >= (unsigned int)KeNumberProcessors_0 )
      v26 = 0LL;
    else
      v26 = KiProcessorBlock[v25];
    _m_prefetchw((const void *)(v26 + 24272));
    if ( !_InterlockedOr((volatile signed __int32 *)(v26 + 24272), 1u) )
      KiInsertQueueDpc(v26 + 24208, 0LL, 0LL, 0LL, 0);
  }
  while ( ++v22 < v23 )
  {
    v21 = v38[v22];
    if ( v21 )
      goto LABEL_28;
  }
  return 0;
}
