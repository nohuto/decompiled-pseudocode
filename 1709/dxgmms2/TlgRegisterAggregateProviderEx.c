/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C007D5EC
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C007D944 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C007D6D4 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C007D764 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C007D808 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C00B6574 (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  TLG_STATUS v4; // esi
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v8; // rax

  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v3 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 328) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 344) = &hProvider;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback, v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00406D0, 0LL);
    v5 = qword_1C0040740;
    if ( !qword_1C0040740 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C0040090,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C0040740;
    }
    v6 = &qword_1C0040740;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *(int **)(v8 + 344) == &hProvider )
          break;
        v6 = (__int64 *)(v8 + 352);
        if ( !*v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v6 = (__int64)v3;
    }
    ExReleasePushLockExclusiveEx(&unk_1C00406D0, 0LL);
    return 0;
  }
}
