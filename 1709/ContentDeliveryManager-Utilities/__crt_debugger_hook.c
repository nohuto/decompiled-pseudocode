/*
 * XREFs of __crt_debugger_hook @ 0x1800B46D0
 * Callers:
 *     __scrt_fastfail @ 0x1800B457C (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  debugger_hook_dummy = 0;
}
