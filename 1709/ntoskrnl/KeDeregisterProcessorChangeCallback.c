/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1406D8310
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
