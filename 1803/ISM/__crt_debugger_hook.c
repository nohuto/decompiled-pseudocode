/*
 * XREFs of __crt_debugger_hook @ 0x1800E1690
 * Callers:
 *     __scrt_fastfail @ 0x1800E1698 (__scrt_fastfail.c)
 *     __raise_securityfailure @ 0x1800E1B34 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
