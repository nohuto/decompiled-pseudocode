/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1401808A0
 * Callers:
 *     sub_14076883C @ 0x14076883C (sub_14076883C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
