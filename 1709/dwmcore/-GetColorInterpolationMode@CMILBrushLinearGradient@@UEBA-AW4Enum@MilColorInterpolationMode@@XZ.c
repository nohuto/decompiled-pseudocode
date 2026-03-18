/*
 * XREFs of ?GetColorInterpolationMode@CMILBrushLinearGradient@@UEBA?AW4Enum@MilColorInterpolationMode@@XZ @ 0x1800C10E0
 * Callers:
 *     ?GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA?AW4Enum@MilColorInterpolationMode@@XZ @ 0x1800C6030 (-GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA-AW4Enum@MilColorInterpolationMode@@X.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::GetColorInterpolationMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 108);
}
