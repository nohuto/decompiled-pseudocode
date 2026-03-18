/*
 * XREFs of ?AddRef@CHolographicViewer@@WDI@EAAKXZ @ 0x1800DDD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 56));
}
