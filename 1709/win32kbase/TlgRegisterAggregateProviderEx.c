/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C01C40AC
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     CreateTlgAggregateSession @ 0x1C01C4008 (CreateTlgAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1C01C4184 (TraceLoggingRegisterEx.c)
 *     DestroyAggregateSession @ 0x1C01C43B4 (DestroyAggregateSession.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  void *v1; // rbx
  TLG_STATUS v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v6; // rax

  TlgAggregateSession = CreateTlgAggregateSession(1, 0);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01887E0, 0LL, 0LL);
  TlgAggregateSession[41] = 0LL;
  TlgAggregateSession[42] = 0LL;
  TlgAggregateSession[43] = &dword_1C01887E0;
  *((_BYTE *)TlgAggregateSession + 373) = 1;
  v2 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C01887E0,
         RegisteredProviderEtwCallback,
         TlgAggregateSession);
  if ( v2 < 0 )
  {
    DestroyAggregateSession(v1);
    return v2;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C01937C0, 0LL);
    v3 = qword_1C01937C8;
    if ( !qword_1C01937C8 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0188C80, TlgAggregateInternalProviderCallback, 0LL);
      v3 = qword_1C01937C8;
    }
    v4 = &qword_1C01937C8;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *(int **)(v6 + 344) == &dword_1C01887E0 )
          break;
        v4 = (__int64 *)(v6 + 352);
        if ( !*v4 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v4 = (__int64)v1;
    }
    ExReleasePushLockExclusiveEx(&unk_1C01937C0, 0LL);
    return 0;
  }
}
