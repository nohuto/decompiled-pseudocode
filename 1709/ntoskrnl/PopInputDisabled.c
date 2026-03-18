/*
 * XREFs of PopInputDisabled @ 0x140709D18
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1405B8560 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x1400A5510 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PsIsServiceSession @ 0x1405EC7EC (PsIsServiceSession.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  void *i; // rcx
  unsigned int SessionId; // edi
  __int64 NextSession; // rax
  void *v8; // rbx

  if ( a3 )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextSession = MmGetNextSession(i);
      v8 = (void *)NextSession;
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
