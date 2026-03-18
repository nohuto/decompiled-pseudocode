/*
 * XREFs of ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x1801BCEB8
 * Callers:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x1801BCC34 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C4890 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AdjustRelativeRectangle@@YAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV1@@Z @ 0x1801C36CC (-AdjustRelativeRectangle@@YAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 */

bool __fastcall CTileBrushUtils::GetAbsoluteViewRectangles(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // r11d
  bool result; // al
  float *v9; // rdx
  _DWORD *v10; // r10

  v7 = a2;
  *a7 = 0;
  if ( a1 == 1 )
    AdjustRelativeRectangle(a3, a5);
  if ( v7 == 1 )
    AdjustRelativeRectangle(a4, a6);
  result = IsRectEmptyOrInvalid(a5);
  if ( result || (result = IsRectEmptyOrInvalid(v9)) )
    *v10 = 1;
  return result;
}
