/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C011D57C
 * Callers:
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C011D668 (TraceLoggingRegisterEx.c)
 *     ComputeFlushPeriod @ 0x1C011D6F8 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C011D79C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C02035A4 (DestroyAggregateSession.c)
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
    return TraceLoggingRegisterEx(
             (TraceLoggingHProvider)&dword_1C005F810,
             (TLG_PENABLECALLBACK)EnableDxgkrnlTelemetryProviderCallback,
             0LL);
  *(_QWORD *)(TlgAggregateSession + 336) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 328) = EnableDxgkrnlTelemetryProviderCallback;
  *(_QWORD *)(TlgAggregateSession + 344) = &dword_1C005F810;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v4 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C005F810,
         (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback,
         v3);
  if ( v4 < 0 )
  {
    DestroyAggregateSession(v3);
    return v4;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C0060F68, 0LL);
    v5 = qword_1C0061A50;
    if ( !qword_1C0061A50 )
    {
      TraceLoggingRegisterEx(
        (TraceLoggingHProvider)&dword_1C005F890,
        (TLG_PENABLECALLBACK)TlgAggregateInternalProviderCallback,
        0LL);
      v5 = qword_1C0061A50;
    }
    v6 = &qword_1C0061A50;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = *v6;
        if ( *(_UNKNOWN **)(v8 + 344) == &dword_1C005F810 )
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
    ExReleasePushLockExclusiveEx(&unk_1C0060F68, 0LL);
    return 0;
  }
}
