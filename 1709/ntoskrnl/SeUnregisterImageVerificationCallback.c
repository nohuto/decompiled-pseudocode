/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x140727F80
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140131CC0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_1403A1300);
  ExUnregisterCallback(a1);
}
