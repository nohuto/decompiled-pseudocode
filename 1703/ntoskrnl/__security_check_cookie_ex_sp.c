/*
 * XREFs of __security_check_cookie_ex_sp @ 0x140169280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _security_check_cookie_ex_sp(uintptr_t a1, __int64 a2)
{
  __int64 v2; // rcx
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( a1 != _security_cookie )
LABEL_5:
    _report_gsfailure(a1);
  v2 = __ROL8__(a1, 16);
  if ( (_WORD)v2 )
  {
    a1 = __ROR8__(v2, 16);
    goto LABEL_5;
  }
  return _guard_ss_verify_sp(a2, a2, retaddr);
}
