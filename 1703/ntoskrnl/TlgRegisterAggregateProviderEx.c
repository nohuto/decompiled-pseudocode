/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1405CDEF8
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x1405A76F8 (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1405CDEE8 (TlgRegisterAggregateProvider.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1405CE024 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1405CE0C8 (CreateTlgAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1407469E8 (CancelTimerCallbacksAndDeleteTimer.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  const struct _TlgProvider_t *v3; // rsi
  __int64 TlgAggregateSession; // rax
  _QWORD *v7; // rbx
  TLG_STATUS v8; // edi
  PRTL_BALANCED_NODE v9; // rax
  signed __int8 v10; // cf
  PRTL_BALANCED_NODE v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax

  v3 = hProvider;
  LOBYTE(hProvider) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(hProvider);
  v7 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx(v3, pEnableCallback, pCallbackContext);
  *(_QWORD *)(TlgAggregateSession + 384) = pEnableCallback;
  *(_QWORD *)(TlgAggregateSession + 392) = pCallbackContext;
  *(_QWORD *)(TlgAggregateSession + 400) = v3;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx(v3, (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback, v7);
  if ( v8 < 0 )
  {
    if ( v7[52] )
      CancelTimerCallbacksAndDeleteTimer(v7);
    ExFreePoolWithTag(v7, 0);
    return v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_14036F560, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14036F560, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_14036F560, v9, (ULONG_PTR)&qword_14036F560);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    v12 = qword_140387AA8;
    if ( !qword_140387AA8 )
    {
      TraceLoggingRegisterEx(&stru_14033CC50, (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback, 0LL);
      v12 = qword_140387AA8;
    }
    v13 = &qword_140387AA8;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = *v13;
        if ( *(const struct _TlgProvider_t **)(v14 + 400) == v3 )
          break;
        v13 = (__int64 *)(v14 + 408);
        if ( !*v13 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      *v13 = (__int64)v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036F560, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036F560);
    KeAbPostRelease((ULONG_PTR)&qword_14036F560);
    return 0;
  }
}
