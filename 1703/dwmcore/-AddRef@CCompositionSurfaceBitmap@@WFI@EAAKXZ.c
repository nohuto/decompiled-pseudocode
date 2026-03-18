/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x1800D5740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 88));
}
