/*
 * XREFs of CmpIncrementKcbSequenceNumber @ 0x1406F3774
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140222DF4 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpIncrementKcbSequenceNumber(__int64 a1)
{
  ++*(_QWORD *)(a1 + 296);
}
