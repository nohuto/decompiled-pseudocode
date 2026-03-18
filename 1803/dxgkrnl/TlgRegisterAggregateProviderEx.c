/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C023D15C
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C01974D8 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C023CB60 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C023CC04 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C023CD48 (DestroyAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  TLG_STATUS v4; // esi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rcx

  TlgAggregateSession = CreateTlgAggregateSession(0, 1);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0079090, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[43] = &dword_1C0079090;
  *((_BYTE *)TlgAggregateSession + 373) = 0;
  *((_DWORD *)TlgAggregateSession + 92) = ComputeFlushPeriod((unsigned __int64)TlgAggregateSession);
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C0079090,
         (TLG_PENABLECALLBACK)TlgAggregateInternalRegisteredProviderEtwCallback,
         v1);
  if ( v4 >= 0 )
  {
    ExAcquirePushLockExclusiveEx(&unk_1C007AEA0, 0LL);
    v6 = qword_1C007BE50;
    if ( !qword_1C007BE50 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C0079D70,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v6 = qword_1C007BE50;
    }
    v7 = &qword_1C007BE50;
    while ( v6 )
    {
      if ( *(_UNKNOWN **)(v6 + 344) == &dword_1C0079090 )
        goto LABEL_12;
      v7 = (__int64 *)(v6 + 352);
      v6 = *(_QWORD *)(v6 + 352);
    }
    *v7 = (__int64)v1;
LABEL_12:
    ExReleasePushLockExclusiveEx(&unk_1C007AEA0, 0LL);
    return 0;
  }
  else
  {
    DestroyAggregateSession(v1, v3, v5);
    return v4;
  }
}
