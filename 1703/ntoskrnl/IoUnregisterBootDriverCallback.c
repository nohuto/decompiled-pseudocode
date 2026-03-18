/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140826C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall IoUnregisterBootDriverCallback(PVOID CallbackRegistration)
{
  ExUnregisterCallback(CallbackRegistration);
}
