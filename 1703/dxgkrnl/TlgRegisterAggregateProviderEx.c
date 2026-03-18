/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C011CC48
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C011CD2C (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C011CDBC (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C011CE60 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C01E8E48 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx(
             (TraceLoggingHProvider)&dword_1C006E810,
             (TLG_PENABLECALLBACK)EnableDxgkrnlTelemetryProviderCallback,
             0LL);
  *(_QWORD *)(TlgAggregateSession + 392) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 384) = EnableDxgkrnlTelemetryProviderCallback;
  *(_QWORD *)(TlgAggregateSession + 400) = &dword_1C006E810;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v3 = TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C006E810, RegisteredProviderEtwCallback, v2);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C00700D8, 0LL);
    v4 = qword_1C0070BB8;
    if ( !qword_1C0070BB8 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C006E890, TlgAggregateInternalProviderCallback, 0LL);
      v4 = qword_1C0070BB8;
    }
    v5 = &qword_1C0070BB8;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *(_UNKNOWN **)(v7 + 400) == &dword_1C006E810 )
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
    ExReleasePushLockExclusiveEx(&unk_1C00700D8, 0LL);
    return 0;
  }
}
