/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1405AB198
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x1405ABC7C (TlgRegisterAggregateProvider.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405F23E4 (CmpRegisterTraceLoggingProvider.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1405AB35C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1405AB400 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140788F40 (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  ETWENABLECALLBACK *v3; // rbp
  __int64 TlgAggregateSession; // rax
  void *v7; // rbx
  TLG_STATUS v8; // edi
  PRTL_BALANCED_NODE v9; // rax
  signed __int8 v10; // cf
  PRTL_BALANCED_NODE v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  char v15; // al

  v3 = pEnableCallback;
  LOBYTE(pEnableCallback) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, pEnableCallback);
  v7 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx(hProvider, v3, pCallbackContext);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = pCallbackContext;
  *(_QWORD *)(TlgAggregateSession + 344) = hProvider;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx(hProvider, (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback, v7);
  if ( v8 < 0 )
  {
    DestroyAggregateSession(v7);
    return v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_14038DDF0, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14038DDF0, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_14038DDF0, (__int64)v9, (__int16 *)&qword_14038DDF0);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    v12 = qword_1403A3038;
    if ( !qword_1403A3038 )
    {
      TraceLoggingRegisterEx(&stru_140354C10, (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback, 0LL);
      v12 = qword_1403A3038;
    }
    v13 = &qword_1403A3038;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = *v13;
        if ( *(TraceLoggingHProvider *)(v14 + 344) == hProvider )
          break;
        v13 = (__int64 *)(v14 + 352);
        if ( !*v13 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      *v13 = (__int64)v7;
    }
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038DDF0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14038DDF0);
    KeAbPostRelease((ULONG_PTR)&qword_14038DDF0);
    return 0;
  }
}
