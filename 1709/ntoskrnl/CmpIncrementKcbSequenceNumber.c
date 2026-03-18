/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x14068FAA4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 296);
}
