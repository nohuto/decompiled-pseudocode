/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ @ 0x1800D6800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 224));
}
