/*
 * XREFs of ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x180147690
 * Callers:
 *     ?SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800C6180 (-SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILBrushLinearGradient::SetWrapMode(__int64 a1)
{
  return CMILBrushGradient::SetWrapMode(a1);
}
