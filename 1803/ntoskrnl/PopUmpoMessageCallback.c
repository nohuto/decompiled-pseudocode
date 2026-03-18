/*
 * XREFs of PopUmpoMessageCallback @ 0x140072F80
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x140072FE0 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
