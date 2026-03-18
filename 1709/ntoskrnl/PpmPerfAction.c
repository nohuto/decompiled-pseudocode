/*
 * XREFs of PpmPerfAction @ 0x1400953A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x140095B50 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x14014D4E4 (PpmPerfApplyProcessorState.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x14024644C (PopDiagTraceIllegalProcessorThrottle.c)
 *     PpmParkReportParkedCore @ 0x14024CB54 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x14024CBD8 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        _BYTE *SystemArgument2)
{
  _QWORD *v4; // rbx
  char v5; // r14
  bool v6; // r12
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  void (__fastcall *v14)(__int64 *); // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int16 v18; // [rsp+48h] [rbp-59h] BYREF
  int v19; // [rsp+50h] [rbp-51h] BYREF
  int v20; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-39h]
  unsigned __int64 v23; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  char *v25; // [rsp+88h] [rbp-19h]
  __int64 v26; // [rsp+90h] [rbp-11h]
  int *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  unsigned __int64 *v29; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]
  int *v31; // [rsp+B8h] [rbp+17h]
  __int64 v32; // [rsp+C0h] [rbp+1Fh]

  v4 = (_QWORD *)DeferredContext;
  v5 = _InterlockedExchange((volatile __int32 *)(DeferredContext + 24144), 0);
  if ( (v5 & 1) == 0 )
    goto LABEL_26;
  v6 = DeferredContext != (_QWORD)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(DeferredContext + 24168);
  if ( !v7 )
    goto LABEL_26;
  LOBYTE(SystemArgument2) = 1;
  v8 = (unsigned __int64 *)(v7 + 104);
  if ( !(unsigned __int8)PpmSnapPerformanceAccumulation(
                           DeferredContext,
                           0,
                           v6,
                           (int)SystemArgument2,
                           (void *)(v7 + 104)) )
    goto LABEL_26;
  v9 = *(_QWORD *)(v7 + 184);
  if ( *v8 <= v9 )
    goto LABEL_26;
  v10 = *v8 - v9;
  v11 = *(_QWORD *)(v7 + 112) - *(_QWORD *)(v7 + 192);
  v22 = v10;
  if ( v11 > v10 )
  {
    if ( v6 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( !v6 )
  {
LABEL_7:
    v12 = v4[3023];
    v13 = v4[3022];
    if ( PopProcessorThrottleLogInterval )
    {
      if ( v13 )
      {
        if ( v12 )
        {
          v14 = *(void (__fastcall **)(__int64 *))(v13 + 216);
          if ( v14 )
          {
            if ( *((_BYTE *)v4 + 24048) )
            {
              v14(&v21);
              if ( *(_DWORD *)(v12 + 72) < *(_DWORD *)(v13 + 324) )
              {
                *((_BYTE *)v4 + 24056) = 0;
              }
              else if ( *((_BYTE *)v4 + 24056) )
              {
                if ( v4[3008] != v21 )
                {
                  HIDWORD(DeferredContext) = 0;
                  v17 = (unsigned int)(*((_DWORD *)v4 + 6013) + 1);
                  *((_DWORD *)v4 + 6013) = v17;
                  LODWORD(DeferredContext) = (unsigned int)v17 % PopProcessorThrottleLogInterval;
                  if ( !((unsigned int)v17 % PopProcessorThrottleLogInterval) || (_DWORD)v17 == 1 )
                  {
                    LODWORD(v17) = KeGetPcr()->Prcb.Number;
                    PopDiagTraceIllegalProcessorThrottle(v17, v21, v4 + 3009);
                  }
                }
              }
              else
              {
                *((_BYTE *)v4 + 24056) = 1;
              }
              v10 = v22;
              v4[3008] = v21;
            }
          }
        }
      }
    }
  }
  if ( v11 )
  {
    SystemArgument1 = (*(_QWORD *)(v7 + 136) - *(_QWORD *)(v7 + 216)) / v11;
    DeferredContext = (*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 208)) % v11;
    if ( __PAIR64__((*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 208)) / v11, SystemArgument1) != *(_QWORD *)(v7 + 264) )
    {
      v20 = (*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 208)) / v11;
      v19 = SystemArgument1;
      if ( PpmEtwRegistered )
      {
        SystemArgument2 = (_BYTE *)PpmEtwHandle;
        if ( PpmEtwHandle )
        {
          LOBYTE(DeferredContext) = 4;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                                  *(_QWORD *)(PpmEtwHandle + 32) + 80LL,
                                  DeferredContext,
                                  128LL,
                                  PpmEtwHandle)
            || SystemArgument2[101]
            && (LOBYTE(DeferredContext) = 4,
                (unsigned __int8)EtwpLevelKeywordEnabled(
                                   *((_QWORD *)SystemArgument2 + 5) + 80LL,
                                   DeferredContext,
                                   SystemArgument1,
                                   SystemArgument2)) )
          {
            v18 = *((unsigned __int8 *)v4 + 208);
            v23 = PpmConvertTime(v10, PopQpcFrequency, 0xF4240uLL);
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v18;
            v26 = 1LL;
            v25 = (char *)v4 + 209;
            v27 = &v19;
            v29 = &v23;
            v31 = &v20;
            v28 = 4LL;
            v30 = 8LL;
            v32 = 4LL;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_DELIVERED_PERF_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
          }
        }
      }
    }
  }
  *(_OWORD *)(v7 + 184) = *(_OWORD *)v8;
  *(_OWORD *)(v7 + 200) = *(_OWORD *)(v7 + 120);
  *(_OWORD *)(v7 + 216) = *(_OWORD *)(v7 + 136);
  *(_OWORD *)(v7 + 232) = *(_OWORD *)(v7 + 152);
  *(_OWORD *)(v7 + 248) = *(_OWORD *)(v7 + 168);
LABEL_26:
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v16 = v4[3023];
    if ( *(_BYTE *)(v16 + 120) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v16 + 120) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
