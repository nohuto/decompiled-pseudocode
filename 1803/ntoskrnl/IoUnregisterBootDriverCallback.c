/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x1408CA3D0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
