/*
 * XREFs of __crt_debugger_hook @ 0x1801E28B4
 * Callers:
 *     __raise_securityfailure @ 0x1801E21E0 (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x1801E28BC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
