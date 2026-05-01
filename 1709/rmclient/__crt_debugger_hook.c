/*
 * XREFs of __crt_debugger_hook @ 0x180008060
 * Callers:
 *     __scrt_fastfail @ 0x180007EFC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  debugger_hook_dummy = 0;
}
