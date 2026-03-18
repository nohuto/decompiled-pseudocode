/*
 * XREFs of PopInputDisabled @ 0x1406D45C8
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1405C2C70 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MmGetSessionId @ 0x14008BB90 (MmGetSessionId.c)
 *     PopSetSessionUserStatus @ 0x1404205E4 (PopSetSessionUserStatus.c)
 *     PsIsServiceSession @ 0x14045DFB0 (PsIsServiceSession.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  struct _KPROCESS *i; // rcx
  unsigned int SessionId; // edi
  struct _KPROCESS *NextSession; // rax
  struct _KPROCESS *v8; // rbx

  if ( a3 )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextSession = (struct _KPROCESS *)MmGetNextSession(i);
      v8 = NextSession;
      if ( !NextSession )
        break;
      SessionId = MmGetSessionId(NextSession);
      if ( !PsIsServiceSession(SessionId) && a1 != SessionId )
        PopSetSessionUserStatus(SessionId, 0);
    }
  }
  if ( a2 )
    PopSetSessionUserStatus(a1, 0);
}
