/*
 * XREFs of DbgSetDebugPrintCallback @ 0x14023B0F0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
