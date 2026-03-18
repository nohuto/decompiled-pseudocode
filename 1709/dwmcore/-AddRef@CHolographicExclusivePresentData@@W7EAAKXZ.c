/*
 * XREFs of ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1800C6270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 8));
}
