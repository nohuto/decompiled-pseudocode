/*
 * XREFs of MmVerifyCallbackFunction @ 0x1406B5F3C
 * Callers:
 *     KeRegisterBoundCallback @ 0x1401FD9C0 (KeRegisterBoundCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
