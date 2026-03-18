/*
 * XREFs of NtUserSetCursor @ 0x1C009A9A0
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( a1 )
  {
    LOBYTE(v2) = 3;
    v6 = HMValidateHandle(a1, v2, v3, v4);
    if ( !v6 )
      goto LABEL_5;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = (__int64 *)zzzSetCursor(v6);
  if ( v9 )
    v5 = *v9;
LABEL_5:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
