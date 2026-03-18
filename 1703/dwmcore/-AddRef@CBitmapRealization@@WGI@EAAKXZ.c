/*
 * XREFs of ?AddRef@CBitmapRealization@@WGI@EAAKXZ @ 0x1800D5A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 104));
}
