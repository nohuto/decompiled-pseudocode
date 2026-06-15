/*
 * XREFs of __crt_debugger_hook @ 0x18003362C
 * Callers:
 *     __raise_securityfailure @ 0x180032AE4 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180033634 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
