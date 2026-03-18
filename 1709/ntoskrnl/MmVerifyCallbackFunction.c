/*
 * XREFs of MmVerifyCallbackFunction @ 0x1406E22D8
 * Callers:
 *     KeRegisterBoundCallback @ 0x140203980 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401499C8 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
