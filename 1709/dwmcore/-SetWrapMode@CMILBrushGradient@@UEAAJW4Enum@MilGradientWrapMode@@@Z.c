/*
 * XREFs of ?SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1801CEFE0
 * Callers:
 *     ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x180147690 (-SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z.c)
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180181B44 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushGradient::SetWrapMode(__int64 a1, unsigned int a2)
{
  if ( a2 <= 2 )
    *(_DWORD *)(a1 + 104) = a2;
  return a2 > 2 ? 0x80070057 : 0;
}
