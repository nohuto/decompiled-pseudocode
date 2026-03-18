/*
 * XREFs of ?AddRef@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800DE530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 112));
}
