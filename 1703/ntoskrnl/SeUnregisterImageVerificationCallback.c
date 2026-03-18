/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1406F0520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SeUnregisterImageVerificationCallback(PVOID CallbackRegistration)
{
  _InterlockedDecrement(&dword_1403855D0);
  ExUnregisterCallback(CallbackRegistration);
}
