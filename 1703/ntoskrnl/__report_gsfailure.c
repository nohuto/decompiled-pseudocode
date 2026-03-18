/*
 * XREFs of __report_gsfailure @ 0x1401DD410
 * Callers:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __security_check_cookie_ex @ 0x140169240 (__security_check_cookie_ex.c)
 *     __security_check_cookie_ex_sp @ 0x140169280 (__security_check_cookie_ex_sp.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __cdecl __noreturn _report_gsfailure(uintptr_t StackCookie)
{
  KeBugCheckEx(0xF7u, StackCookie, _security_cookie, _security_cookie_complement, 0LL);
}
