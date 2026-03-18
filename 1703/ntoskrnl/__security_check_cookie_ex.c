/*
 * XREFs of __security_check_cookie_ex @ 0x140169240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _security_check_cookie_ex(uintptr_t a1)
{
  __int64 v1; // rcx

  if ( a1 != _security_cookie )
LABEL_4:
    _report_gsfailure(a1);
  v1 = __ROL8__(a1, 16);
  if ( (_WORD)v1 )
  {
    a1 = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
