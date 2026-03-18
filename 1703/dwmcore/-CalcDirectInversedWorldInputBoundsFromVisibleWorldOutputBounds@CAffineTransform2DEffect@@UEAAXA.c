/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18017A340
 * Callers:
 *     <none>
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18001ED6C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18016F338 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x18017ABEC (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

unsigned __int8 __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __m128 v6; // xmm7
  float v9; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm2_4
  __m128 v16; // xmm1
  float v17; // xmm5_4
  unsigned __int8 result; // al
  __int64 v19; // rcx
  float v20; // xmm2_4
  int v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  __int128 v25; // [rsp+28h] [rbp-59h] BYREF
  float v26[6]; // [rsp+38h] [rbp-49h] BYREF
  D2D1_MATRIX_3X2_F v27; // [rsp+50h] [rbp-31h] BYREF

  v6 = (__m128)*(unsigned int *)(a2 + 48);
  v9 = *(float *)(a2 + 16);
  LODWORD(v12) = *(_DWORD *)(a2 + 48) ^ _xmm;
  LODWORD(v13) = *(_DWORD *)(a2 + 52) ^ _xmm;
  *(float *)&v14 = (float)(*(float *)(a2 + 20) * 0.0) + v9;
  *(float *)&v15 = (float)(*(float *)a2 * 0.0) + *(float *)(a2 + 4);
  v26[0] = (float)(*(float *)(a2 + 4) * 0.0) + *(float *)a2;
  v16 = (__m128)*(unsigned int *)(a2 + 52);
  v17 = (float)(v9 * 0.0) + *(float *)(a2 + 20);
  *(_QWORD *)&v26[1] = __PAIR64__(v14, v15);
  v26[3] = v17;
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * 0.0) + v6.m128_f32[0]) + v12;
  v6.m128_f32[0] = (float)(v6.m128_f32[0] * 0.0) + *(float *)(a2 + 52);
  *(_OWORD *)(a1 + 252) = *(_OWORD *)v26;
  v6.m128_f32[0] = v6.m128_f32[0] + v13;
  *(_OWORD *)&v27.m11 = *(_OWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 268) = _mm_unpacklo_ps(v16, v6).m128_u64[0];
  *(_QWORD *)&v27.m[2][0] = *(_QWORD *)(a1 + 232);
  result = D2D1::Matrix3x2F::Invert(&v27);
  if ( result
    && (*a6 = *a3,
        v25 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds((__int128 *)a2, (__int64)&v25, v26)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v19, &v27, v26, v26);
    result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)v26, (float *)&v25);
    v20 = *(float *)&v25;
    v21 = DWORD2(v25);
    *(_DWORD *)(a5 + 4) = DWORD1(v25);
    *(_DWORD *)(a5 + 12) = HIDWORD(v25);
    *(float *)a5 = v20;
    *(_DWORD *)(a5 + 8) = v21;
    if ( *(float *)a4 > v20 )
      *(_DWORD *)a5 = *(_DWORD *)a4;
    v22 = *(float *)(a4 + 4);
    if ( v22 > *(float *)(a5 + 4) )
      *(float *)(a5 + 4) = v22;
    v23 = *(float *)(a4 + 8);
    if ( *(float *)(a5 + 8) > v23 )
      *(float *)(a5 + 8) = v23;
    v24 = *(float *)(a4 + 12);
    if ( *(float *)(a5 + 12) > v24 )
      *(float *)(a5 + 12) = v24;
    if ( *(float *)(a5 + 8) <= *(float *)a5 || *(float *)(a5 + 12) <= *(float *)(a5 + 4) )
    {
      *(_DWORD *)(a5 + 12) = 0;
      *(_DWORD *)(a5 + 8) = 0;
      *(_DWORD *)(a5 + 4) = 0;
      *(_DWORD *)a5 = 0;
    }
  }
  else
  {
    *(_OWORD *)a5 = *a3;
    *a6 = *a3;
  }
  *(float *)(a1 + 244) = *(float *)a5 - *(float *)(a2 + 48);
  *(float *)(a1 + 248) = *(float *)(a5 + 4) - *(float *)(a2 + 52);
  return result;
}
