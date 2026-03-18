/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C01BD5F0
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     DestroyAggregateSession @ 0x1C01BD354 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1C01BD6C0 (TraceLoggingRegisterEx.c)
 *     CreateTlgAggregateSession @ 0x1C01BD750 (CreateTlgAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  _QWORD *v1; // rbx
  TLG_STATUS v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v6; // rax

  TlgAggregateSession = (_QWORD *)CreateTlgAggregateSession(0LL);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01867E0, 0LL, 0LL);
  TlgAggregateSession[48] = 0LL;
  TlgAggregateSession[49] = 0LL;
  TlgAggregateSession[50] = &dword_1C01867E0;
  v2 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C01867E0,
         (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback,
         TlgAggregateSession);
  if ( v2 < 0 )
  {
    DestroyAggregateSession(v1);
    return v2;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C018E958, 0LL);
    v3 = qword_1C018E960;
    if ( !qword_1C018E960 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C0186C70,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v3 = qword_1C018E960;
    }
    v4 = &qword_1C018E960;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *(_UNKNOWN **)(v6 + 400) == &dword_1C01867E0 )
          break;
        v4 = (__int64 *)(v6 + 408);
        if ( !*v4 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v4 = (__int64)v1;
    }
    ExReleasePushLockExclusiveEx(&unk_1C018E958, 0LL);
    return 0;
  }
}
