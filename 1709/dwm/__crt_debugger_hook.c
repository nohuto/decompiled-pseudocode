/*
 * XREFs of __crt_debugger_hook @ 0x1400043A0
 * Callers:
 *     __scrt_fastfail @ 0x140004248 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  debugger_hook_dummy = 0;
}
