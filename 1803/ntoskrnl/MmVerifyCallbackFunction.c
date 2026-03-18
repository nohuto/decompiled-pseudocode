/*
 * XREFs of MmVerifyCallbackFunction @ 0x14074CF18
 * Callers:
 *     KeRegisterBoundCallback @ 0x140240E10 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401721B8 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
