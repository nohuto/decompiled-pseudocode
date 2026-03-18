/*
 * XREFs of ?SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x1800C6150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::SetColorInterpolationMode(__int64 a1)
{
  return CMILBrushGradient::SetColorInterpolationMode(a1 - 112);
}
