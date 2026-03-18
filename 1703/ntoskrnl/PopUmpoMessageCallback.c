/*
 * XREFs of PopUmpoMessageCallback @ 0x14006F030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  ((void (__stdcall *)(PVOID, PVOID, PVOID))PopUmpoProcessMessages)(CallbackContext, Argument1, Argument2);
}
