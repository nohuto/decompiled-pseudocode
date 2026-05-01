/*
 * XREFs of __crt_debugger_hook @ 0x1800296D4
 * Callers:
 *     __raise_securityfailure @ 0x180028B1C (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
