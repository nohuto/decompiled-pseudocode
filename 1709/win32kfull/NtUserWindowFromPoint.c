/*
 * XREFs of NtUserWindowFromPoint @ 0x1C0060A90
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowFromPoint @ 0x1C0061E0C (xxxWindowFromPoint.c)
 */

__int64 __fastcall NtUserWindowFromPoint(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx

  EnterCrit(0LL, 1LL);
  v2 = (__int64 *)xxxWindowFromPoint(a1);
  v5 = 0LL;
  if ( v2 )
    v5 = *v2;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
