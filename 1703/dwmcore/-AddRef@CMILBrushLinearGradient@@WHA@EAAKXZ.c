/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WHA@EAAKXZ @ 0x1800D6830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 112));
}
