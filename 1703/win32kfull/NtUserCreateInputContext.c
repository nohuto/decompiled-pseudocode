/*
 * XREFs of NtUserCreateInputContext @ 0x1C01396C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CreateInputContext @ 0x1C00E7A90 (CreateInputContext.c)
 */

__int64 __fastcall NtUserCreateInputContext(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *InputContext; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  EnterCrit(0LL, 1LL);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = 0LL;
    if ( a1 )
    {
      InputContext = (__int64 *)CreateInputContext(a1);
      if ( InputContext )
        v2 = *InputContext;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(120LL);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
