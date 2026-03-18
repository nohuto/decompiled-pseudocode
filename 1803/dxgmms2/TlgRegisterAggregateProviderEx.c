/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C00821E0
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0082538 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C00822C8 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C0082358 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C00823FC (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C00BFE3C (DestroyAggregateSession.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1, __int64 a2)
{
  __int64 TlgAggregateSession; // rax
  void *v3; // rbx
  TLG_STATUS v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx

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
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&hProvider,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00476E8, 0LL);
    v5 = qword_1C0047758;
    if ( !qword_1C0047758 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C0047090,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C0047758;
    }
    v6 = &qword_1C0047758;
    while ( v5 )
    {
      if ( *(int **)(v5 + 344) == &hProvider )
        goto LABEL_8;
      v6 = (__int64 *)(v5 + 352);
      v5 = *(_QWORD *)(v5 + 352);
    }
    *v6 = (__int64)v3;
LABEL_8:
    ExReleasePushLockExclusiveEx(&unk_1C00476E8, 0LL);
    return 0;
  }
}
