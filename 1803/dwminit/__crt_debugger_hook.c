/*
 * XREFs of __crt_debugger_hook @ 0x1800078A8
 * Callers:
 *     __raise_securityfailure @ 0x180007530 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x1800078B0 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
