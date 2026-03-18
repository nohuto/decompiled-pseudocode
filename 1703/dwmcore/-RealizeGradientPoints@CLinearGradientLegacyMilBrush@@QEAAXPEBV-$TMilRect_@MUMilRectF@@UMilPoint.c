/*
 * XREFs of ?RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x18017B994
 * Callers:
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x18017B8C4 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800120B0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007D5D4 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::RealizeGradientPoints(
        __int64 a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        struct MilPoint2F *a5)
{
  const struct CMILMatrix *v5; // rsi
  __m128d v6; // xmm1
  __m128 v8; // xmm2
  const struct CMILMatrix *Matrix; // r12
  CTransform3D *v13; // rcx
  CTransform3D *v14; // rcx
  _BYTE v15[64]; // [rsp+20h] [rbp-68h] BYREF
  int v16; // [rsp+60h] [rbp-28h]

  v5 = 0LL;
  v6 = (__m128d)*(unsigned __int64 *)(a1 + 152);
  v8 = _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 144));
  v16 = 0;
  *(_QWORD *)a3 = _mm_unpacklo_ps(v8, _mm_cvtpd_ps(v6)).m128_u64[0];
  *(_QWORD *)a4 = _mm_unpacklo_ps(
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 160)),
                    _mm_cvtpd_ps((__m128d)*(unsigned __int64 *)(a1 + 168))).m128_u64[0];
  if ( *(_DWORD *)(a1 + 124) == 1 )
  {
    *(float *)a3 = (float)((float)(a2[2] - *a2) * *(float *)a3) + *a2;
    *(float *)(a3 + 4) = (float)((float)(a2[3] - a2[1]) * *(float *)(a3 + 4)) + a2[1];
    *(float *)a4 = (float)((float)(a2[2] - *a2) * *(float *)a4) + *a2;
    *(float *)(a4 + 4) = (float)((float)(a2[3] - a2[1]) * *(float *)(a4 + 4)) + a2[1];
  }
  Matrix = 0LL;
  *(float *)a5 = *(float *)a3 - (float)(*(float *)(a4 + 4) - *(float *)(a3 + 4));
  *((float *)a5 + 1) = (float)(*(float *)a4 - *(float *)a3) + *(float *)(a3 + 4);
  v13 = *(CTransform3D **)(a1 + 112);
  if ( v13 )
    Matrix = CTransform3D::GetMatrix(v13, 0LL);
  v14 = *(CTransform3D **)(a1 + 104);
  if ( v14 )
    v5 = CTransform3D::GetMatrix(v14, 0LL);
  CBrushTypeUtils::GetBrushTransform((__int64)Matrix, (__int64)v5, a2, (__int64)v15);
  CMILMatrix::Transform((CMILMatrix *)v15, (const struct MilPoint2F *)a3, (struct MilPoint2F *)a3, 1);
  CMILMatrix::Transform((CMILMatrix *)v15, (const struct MilPoint2F *)a4, (struct MilPoint2F *)a4, 1);
  CMILMatrix::Transform((CMILMatrix *)v15, a5, a5, 1);
}
