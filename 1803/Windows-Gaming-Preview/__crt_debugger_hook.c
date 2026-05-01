/*
 * XREFs of __crt_debugger_hook @ 0x180042AEC
 * Callers:
 *     __raise_securityfailure @ 0x180041F6C (__raise_securityfailure.c)
 *     __scrt_fastfail @ 0x180042AF4 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
