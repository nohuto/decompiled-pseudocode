/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800C6EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CFrictionAccelerator::AddRef((CFrictionAccelerator *)(a1 - 32));
}
