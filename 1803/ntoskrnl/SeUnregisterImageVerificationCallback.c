/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14078C390
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14016DE80 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_1403E5170);
  ExUnregisterCallback(a1);
}
