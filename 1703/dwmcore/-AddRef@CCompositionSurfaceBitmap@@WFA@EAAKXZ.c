/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800D5730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 80));
}
