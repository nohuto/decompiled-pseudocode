/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800D6660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CSpringForce::AddRef((CSpringForce *)(a1 - 32));
}
