/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800DDAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 104));
}
