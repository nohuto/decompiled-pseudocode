/*
 * XREFs of NtUserRealChildWindowFromPoint @ 0x1C01EA780
 * Callers:
 *     <none>
 * Callees:
 *     _RealChildWindowFromPoint @ 0x1C0212FA8 (_RealChildWindowFromPoint.c)
 */

__int64 __fastcall NtUserRealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 *v8; // rax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = (__int64 *)RealChildWindowFromPoint(v4, a2);
    if ( v8 )
      v7 = *v8;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
