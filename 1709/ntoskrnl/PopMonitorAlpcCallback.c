/*
 * XREFs of PopMonitorAlpcCallback @ 0x140708330
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1405EEEC8 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
