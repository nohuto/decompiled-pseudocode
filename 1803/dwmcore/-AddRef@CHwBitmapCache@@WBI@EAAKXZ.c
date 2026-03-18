/*
 * XREFs of ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800DDE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapCache::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 24));
}
