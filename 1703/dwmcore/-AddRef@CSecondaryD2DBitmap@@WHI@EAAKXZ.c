/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800D5A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 120));
}
