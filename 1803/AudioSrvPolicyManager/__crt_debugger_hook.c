/*
 * XREFs of __crt_debugger_hook @ 0x1800356B8
 * Callers:
 *     __raise_securityfailure @ 0x180034E94 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x1800356C0 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
