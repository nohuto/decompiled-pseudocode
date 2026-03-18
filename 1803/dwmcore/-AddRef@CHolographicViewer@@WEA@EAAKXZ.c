/*
 * XREFs of ?AddRef@CHolographicViewer@@WEA@EAAKXZ @ 0x1800DE600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicViewer::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 64));
}
