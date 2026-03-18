/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C01DE660
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C0211A94 (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 *v10; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( v4 )
  {
    v10 = (__int64 *)RealChildWindowFromPoint(v4, a2);
    if ( v10 )
      v9 = *v10;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
