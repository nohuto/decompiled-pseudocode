/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x14064AF18
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x14062013C (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x14064AEFC (TlgRegisterAggregateProvider.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x14064B048 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x14064B0EC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1407F5708 (DestroyAggregateSession.c)
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
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  char v17; // al

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
  v8 = TraceLoggingRegisterEx(hProvider, (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback, v7);
  if ( v8 < 0 )
  {
    DestroyAggregateSession(v7);
    return v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_1403D1C30, 0LL, 0);
    v13 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403D1C30, 0LL);
    v14 = v9;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx(&qword_1403D1C30, v9, (ULONG_PTR)&qword_1403D1C30);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = qword_1403E95F8;
    if ( !qword_1403E95F8 )
    {
      TraceLoggingRegisterEx(&stru_1403978A0, (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback, 0LL);
      v15 = qword_1403E95F8;
    }
    v16 = &qword_1403E95F8;
    while ( v15 )
    {
      if ( *(TraceLoggingHProvider *)(v15 + 344) == hProvider )
        goto LABEL_14;
      v16 = (__int64 *)(v15 + 352);
      v15 = *(_QWORD *)(v15 + 352);
    }
    *v16 = (__int64)v7;
LABEL_14:
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403D1C30, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403D1C30, v10, v11, v12);
    KeAbPostRelease((ULONG_PTR)&qword_1403D1C30);
    return 0;
  }
}
