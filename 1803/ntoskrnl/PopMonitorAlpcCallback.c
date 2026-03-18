/*
 * XREFs of PopMonitorAlpcCallback @ 0x14076C400
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140652608 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
