/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140858470
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
