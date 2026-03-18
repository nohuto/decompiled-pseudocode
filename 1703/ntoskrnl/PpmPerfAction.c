/*
 * XREFs of PpmPerfAction @ 0x1400F2880
 * Callers:
 *     <none>
 * Callees:
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400F3740 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x140146C0C (PpmPerfApplyProcessorState.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x140231BB4 (PopDiagTraceIllegalProcessorThrottle.c)
 *     PpmParkReportParkedCore @ 0x140237AB0 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x140237B34 (PpmParkReportUnparkedCore.c)
 */

void __fastcall PpmPerfAction(
        struct _KDPC *Dpc,
        unsigned __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        _BYTE *SystemArgument2)
{
  _QWORD *v4; // rbx
  char v5; // r14
  bool v6; // r13
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  void (__fastcall *v14)(__int64 *); // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int16 v17; // [rsp+48h] [rbp-59h] BYREF
  int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+58h] [rbp-49h] BYREF
  __int64 v20; // [rsp+60h] [rbp-41h] BYREF
  __int64 v21; // [rsp+68h] [rbp-39h]
  unsigned __int64 v22; // [rsp+70h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-29h] BYREF
  char *v24; // [rsp+88h] [rbp-19h]
  __int64 v25; // [rsp+90h] [rbp-11h]
  int *v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  unsigned __int64 *v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  int *v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]

  v4 = (_QWORD *)DeferredContext;
  v5 = _InterlockedExchange((volatile __int32 *)(DeferredContext + 24272), 0);
  if ( (v5 & 1) == 0 )
    goto LABEL_23;
  v6 = DeferredContext != (_QWORD)KeGetCurrentPrcb();
  v7 = *(_QWORD *)(DeferredContext + 24296);
  if ( !v7 )
    goto LABEL_23;
  LOBYTE(SystemArgument2) = 1;
  v8 = (unsigned __int64 *)(v7 + 104);
  if ( !(unsigned __int8)PpmSnapPerformanceAccumulation(
                           DeferredContext,
                           0,
                           v6,
                           (int)SystemArgument2,
                           (void *)(v7 + 104)) )
    goto LABEL_23;
  v9 = *(_QWORD *)(v7 + 184);
  if ( *v8 <= v9 )
    goto LABEL_23;
  v10 = *v8 - v9;
  v11 = *(_QWORD *)(v7 + 112) - *(_QWORD *)(v7 + 192);
  if ( v11 > v10 )
  {
    if ( v6 )
      goto LABEL_23;
    goto LABEL_7;
  }
  if ( !v6 )
  {
LABEL_7:
    v12 = v4[3039];
    v13 = v4[3038];
    v21 = v12;
    if ( PopProcessorThrottleLogInterval )
    {
      if ( v13 )
      {
        if ( v12 )
        {
          v14 = *(void (__fastcall **)(__int64 *))(v13 + 216);
          if ( v14 )
          {
            if ( *((_BYTE *)v4 + 24176) )
            {
              v14(&v20);
              if ( *(_DWORD *)(v21 + 96) < *(_DWORD *)(v13 + 324) )
              {
                *((_BYTE *)v4 + 24184) = 0;
              }
              else if ( *((_BYTE *)v4 + 24184) )
              {
                if ( v4[3024] != v20 )
                {
                  HIDWORD(DeferredContext) = 0;
                  v16 = (unsigned int)(*((_DWORD *)v4 + 6045) + 1);
                  *((_DWORD *)v4 + 6045) = v16;
                  LODWORD(DeferredContext) = (unsigned int)v16 % PopProcessorThrottleLogInterval;
                  if ( !((unsigned int)v16 % PopProcessorThrottleLogInterval) || (_DWORD)v16 == 1 )
                  {
                    LODWORD(v16) = KeGetPcr()->Prcb.Number;
                    PopDiagTraceIllegalProcessorThrottle(v16, v20, v4 + 3025);
                  }
                }
              }
              else
              {
                *((_BYTE *)v4 + 24184) = 1;
              }
              v4[3024] = v20;
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
      v19 = (*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 208)) / v11;
      v18 = SystemArgument1;
      if ( PpmEtwRegistered )
      {
        SystemArgument2 = (_BYTE *)PpmEtwHandle;
        if ( PpmEtwHandle )
        {
          LOBYTE(DeferredContext) = 4;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, DeferredContext, 128LL)
            || SystemArgument2[101]
            && (unsigned __int8)EtwpLevelKeywordEnabled(
                                  *((_QWORD *)SystemArgument2 + 5) + 80LL,
                                  DeferredContext,
                                  SystemArgument1) )
          {
            v17 = *((unsigned __int8 *)v4 + 208);
            v22 = PpmConvertTime(v10, PopQpcFrequency, 0xF4240uLL);
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v17;
            v25 = 1LL;
            v24 = (char *)v4 + 209;
            v26 = &v18;
            v28 = &v22;
            v30 = &v19;
            v27 = 4LL;
            v29 = 8LL;
            v31 = 4LL;
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
LABEL_23:
  if ( (v5 & 2) != 0 )
    PpmParkReportUnparkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( (v5 & 4) != 0 )
  {
    v15 = v4[3039];
    if ( *(_BYTE *)(v15 + 144) )
    {
      LOBYTE(DeferredContext) = 1;
      *(_BYTE *)(v15 + 144) = 0;
      PpmPerfApplyProcessorState(v4, DeferredContext, SystemArgument1, SystemArgument2);
    }
    PpmPerfApplyProcessorState(v4, 0LL, SystemArgument1, SystemArgument2);
  }
  if ( (v5 & 8) != 0 )
    PpmParkReportParkedCore(v4, DeferredContext, SystemArgument1, SystemArgument2);
  if ( _InterlockedExchangeAdd(&PpmCheckCount, 0xFFFFFFFF) == 1 )
    KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0LL, 0LL, 0LL, 0);
}
