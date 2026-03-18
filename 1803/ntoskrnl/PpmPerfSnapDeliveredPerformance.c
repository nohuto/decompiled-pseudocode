/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x140109130
 * Callers:
 *     PpmPerfAction @ 0x140109090 (PpmPerfAction.c)
 * Callees:
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x140109F20 (PpmSnapPerformanceAccumulation.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14027D0E8 (PopDiagTraceIllegalProcessorThrottle.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(struct _KPRCB *a1)
{
  bool v2; // r12
  _PROC_PERF_CHECK *PerfCheck; // rbx
  _PROC_PERF_CHECK_SNAP *p_CurrentSnap; // rsi
  char result; // al
  unsigned __int64 Time; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r12
  _PROC_PERF_DOMAIN *Domain; // r13
  void (__fastcall *GetFFHThrottleState)(unsigned __int64 *); // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  __int16 Group; // [rsp+40h] [rbp-59h] BYREF
  int v20; // [rsp+48h] [rbp-51h] BYREF
  int v21; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int8 *p_GroupIndex; // [rsp+80h] [rbp-19h]
  __int64 v26; // [rsp+88h] [rbp-11h]
  int *v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  unsigned __int64 *v29; // [rsp+A0h] [rbp+7h]
  __int64 v30; // [rsp+A8h] [rbp+Fh]
  int *v31; // [rsp+B0h] [rbp+17h]
  __int64 v32; // [rsp+B8h] [rbp+1Fh]

  v2 = a1 != KeGetCurrentPrcb();
  PerfCheck = a1->PowerState.PerfCheck;
  if ( !PerfCheck )
    return 1;
  p_CurrentSnap = &PerfCheck->CurrentSnap;
  result = PpmSnapPerformanceAccumulation((int)a1, 0, v2, 1, &PerfCheck->CurrentSnap);
  if ( result )
  {
    Time = PerfCheck->LastDeliveredSnap.Time;
    if ( p_CurrentSnap->Time <= Time )
      return 0;
    v7 = p_CurrentSnap->Time - Time;
    v8 = PerfCheck->CurrentSnap.Active - PerfCheck->LastDeliveredSnap.Active;
    if ( v8 > v7 )
    {
      if ( v2 )
        return 0;
    }
    else if ( v2 )
    {
LABEL_15:
      if ( v8 )
      {
        v12 = (PerfCheck->CurrentSnap.PerformanceScaledActive - PerfCheck->LastDeliveredSnap.PerformanceScaledActive)
            / v8;
        v13 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive) % v8;
        if ( __PAIR64__(
               (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive) / v8,
               v12) != *(_QWORD *)&PerfCheck->LastDeliveredPerformance )
        {
          v21 = (PerfCheck->CurrentSnap.FrequencyScaledActive - PerfCheck->LastDeliveredSnap.FrequencyScaledActive) / v8;
          v20 = v12;
          if ( PpmEtwRegistered )
          {
            if ( PpmEtwHandle )
            {
              LOBYTE(v13) = 4;
              if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, v13, 128LL)
                || *(_BYTE *)(v16 + 101)
                && (LOBYTE(v14) = 4, (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v16 + 40) + 80LL, v14, v15)) )
              {
                Group = a1->Group;
                v23 = PpmConvertTime(v7, PopQpcFrequency, 0xF4240uLL);
                *(_QWORD *)&UserData.Size = 2LL;
                v26 = 1LL;
                UserData.Ptr = (ULONGLONG)&Group;
                v28 = 4LL;
                p_GroupIndex = &a1->GroupIndex;
                v30 = 8LL;
                v27 = &v20;
                v29 = &v23;
                v31 = &v21;
                v32 = 4LL;
                EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              }
            }
          }
        }
      }
      result = 1;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.Time = *(_OWORD *)&p_CurrentSnap->Time;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.Stall = *(_OWORD *)&PerfCheck->CurrentSnap.Stall;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.PerformanceScaledActive = *(_OWORD *)&PerfCheck->CurrentSnap.PerformanceScaledActive;
      *(_OWORD *)&PerfCheck->LastDeliveredSnap.CyclesActive = *(_OWORD *)&PerfCheck->CurrentSnap.CyclesActive;
      *(_OWORD *)PerfCheck->LastDeliveredSnap.TaggedThreadCycles = *(_OWORD *)PerfCheck->CurrentSnap.TaggedThreadCycles;
      return result;
    }
    PerfConstraint = a1->PowerState.PerfConstraint;
    Domain = a1->PowerState.Domain;
    if ( PopProcessorThrottleLogInterval )
    {
      if ( Domain )
      {
        if ( PerfConstraint )
        {
          GetFFHThrottleState = Domain->GetFFHThrottleState;
          if ( GetFFHThrottleState )
          {
            if ( a1->PowerState.FFHThrottleStateInfo.EnableLogging )
            {
              GetFFHThrottleState(&v22);
              if ( PerfConstraint->Selection.SelectedPercent < Domain->MinPerfPercent )
              {
                a1->PowerState.FFHThrottleStateInfo.Initialized = 0;
              }
              else if ( a1->PowerState.FFHThrottleStateInfo.Initialized )
              {
                if ( a1->PowerState.FFHThrottleStateInfo.LastValue != v22 )
                {
                  v18 = a1->PowerState.FFHThrottleStateInfo.MismatchCount + 1;
                  a1->PowerState.FFHThrottleStateInfo.MismatchCount = v18;
                  if ( !((unsigned int)v18 % PopProcessorThrottleLogInterval) || (_DWORD)v18 == 1 )
                  {
                    LODWORD(v18) = KeGetPcr()->Prcb.Number;
                    PopDiagTraceIllegalProcessorThrottle(
                      v18,
                      v22,
                      &a1->PowerState.FFHThrottleStateInfo.LastLogTickCount);
                  }
                }
              }
              else
              {
                a1->PowerState.FFHThrottleStateInfo.Initialized = 1;
              }
              a1->PowerState.FFHThrottleStateInfo.LastValue = v22;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  return result;
}
