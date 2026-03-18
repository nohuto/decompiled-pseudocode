/*
 * XREFs of NtUserSetCursor @ 0x1C003E520
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( a1 )
  {
    LOBYTE(v2) = 3;
    v4 = HMValidateHandle(a1, v2);
    if ( !v4 )
      goto LABEL_5;
  }
  else
  {
    v4 = 0LL;
  }
  v9 = (__int64 *)zzzSetCursor(v4);
  if ( v9 )
    v3 = *v9;
LABEL_5:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v3;
}
