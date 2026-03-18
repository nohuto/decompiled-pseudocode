/*
 * XREFs of ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1801544B0
 * Callers:
 *     ?SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800D5920 (-SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILBrushLinearGradient::SetWrapMode(__int64 a1)
{
  return CMILBrushGradient::SetWrapMode(a1);
}
