/*
 * XREFs of __crt_debugger_hook @ 0x1800CA63C
 * Callers:
 *     __scrt_fastfail @ 0x1800CA644 (__scrt_fastfail.c)
 *     __raise_securityfailure @ 0x1800CAB54 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
