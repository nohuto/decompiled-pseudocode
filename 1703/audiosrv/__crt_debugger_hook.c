/*
 * XREFs of __crt_debugger_hook @ 0x18004975C
 * Callers:
 *     __raise_securityfailure @ 0x180048C04 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
