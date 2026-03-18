/*
 * XREFs of ZwSetCachedSigningLevel @ 0x140180EC0
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
