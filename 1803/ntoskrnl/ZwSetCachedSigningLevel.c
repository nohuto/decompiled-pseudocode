/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401AA4E0
 * Callers:
 *     sub_1407D0524 @ 0x1407D0524 (sub_1407D0524.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
