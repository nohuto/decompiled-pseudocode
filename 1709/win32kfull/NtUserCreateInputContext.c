/*
 * XREFs of NtUserCreateInputContext @ 0x1C01402B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00F8900 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *InputContext; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = 0LL;
    if ( a1 )
    {
      InputContext = (__int64 *)CreateInputContext(a1, gpsi);
      if ( InputContext )
        v2 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL, gpsi);
    }
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
