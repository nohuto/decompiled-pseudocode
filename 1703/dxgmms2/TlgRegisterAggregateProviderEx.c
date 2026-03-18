/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0076A1C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0076CF4 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C0076AF8 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C0076B88 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0076C2C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C00ADB5C (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  void *v2; // rbx
  TLG_STATUS v3; // esi
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v7; // rax

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1);
  v2 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 384) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 392) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 400) = &hProvider;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v3 = TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback, v2);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C003C520, 0LL);
    v4 = qword_1C003C6C8;
    if ( !qword_1C003C6C8 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C003C090,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v4 = qword_1C003C6C8;
    }
    v5 = &qword_1C003C6C8;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *(_UNKNOWN **)(v7 + 400) == &hProvider )
          break;
        v5 = (__int64 *)(v7 + 408);
        if ( !*v5 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v5 = (__int64)v2;
    }
    ExReleasePushLockExclusiveEx(&unk_1C003C520, 0LL);
    return 0;
  }
}
