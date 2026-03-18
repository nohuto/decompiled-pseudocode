/*
 * XREFs of ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAV3@@Z @ 0x1801839D4
 * Callers:
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007D5D4 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009AEAC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CBrushTypeUtils::ConvertRelativeTransformToAbsolute(float *a1, float *a2, CMILMatrix *a3)
{
  float v3; // xmm10_4
  float v4; // xmm11_4

  v3 = a1[3] - a1[1];
  v4 = a1[2] - *a1;
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *a2,
    a2[1] * (float)(v3 / v4),
    a2[4] * (float)(v4 / v3),
    a2[5],
    (float)((float)((float)(v4 * a2[12]) - (float)(*a2 * *a1)) - (float)((float)(a2[4] * a1[1]) * (float)(v4 / v3)))
  + *a1,
    (float)((float)(v3 * a2[13]) - (float)((float)((float)(v3 / v4) - (float)(a2[5] * a1[1])) * (float)(a2[1] * *a1)))
  + a1[1]);
}
