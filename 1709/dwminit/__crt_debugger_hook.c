/*
 * XREFs of __crt_debugger_hook @ 0x1800096DC
 * Callers:
 *     __scrt_fastfail @ 0x180009590 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  debugger_hook_dummy = 0;
}
