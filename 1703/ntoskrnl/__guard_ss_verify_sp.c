/*
 * XREFs of __guard_ss_verify_sp @ 0x14017DC40
 * Callers:
 *     __security_check_cookie_ex_sp @ 0x140169280 (__security_check_cookie_ex_sp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall _guard_ss_verify_sp(__int64 a1, __int64 a2, __int64 a3)
{
  return _guard_ss_verify_sp_fptr(a1, a2, a3);
}
