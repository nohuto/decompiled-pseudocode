/*
 * XREFs of __crt_debugger_hook @ 0x180041AF4
 * Callers:
 *     __raise_securityfailure @ 0x180040F7C (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180041AFC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
