/*
 * XREFs of PopInputDisabled @ 0x14076D90C
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x1406256E0 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x14003F520 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PsIsServiceSession @ 0x1405845C0 (PsIsServiceSession.c)
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
