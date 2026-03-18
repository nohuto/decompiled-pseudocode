/*
 * XREFs of ?AddRef@CMILBrushLinearGradient@@WOA@EAAKXZ @ 0x1800C61A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CMILBrushLinearGradient::AddRef(__int64 a1)
{
  return CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(a1 - 224));
}
