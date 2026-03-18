/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140742190
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
