/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800DD930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 112));
}
