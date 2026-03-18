/*
 * XREFs of NtUserChildWindowFromPointEx @ 0x1C0138C70
 * Callers:
 *     <none>
 * Callees:
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 */

__int64 __fastcall NtUserChildWindowFromPointEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v6 )
  {
    v10 = (__int64 *)ChildWindowFromPointEx(v6, a2, a3);
    if ( v10 )
      v9 = *v10;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
