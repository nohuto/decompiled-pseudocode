/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WDA@EAAKXZ @ 0x1800D5630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 48));
}
