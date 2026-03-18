/*
 * XREFs of ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801A5F8C
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7A60 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7E1C (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B0B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_18005B0B8.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18018FEA4 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

void __fastcall CD3DDeviceLevel1::CalcHDRConvertUVTransform(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int *a6,
        enum DXGI_MODE_ROTATION a7,
        __int64 a8,
        CMILMatrix *a9)
{
  __m128i v9; // xmm7
  __m128i v10; // xmm6
  __m128i v11; // xmm11
  __m128i v12; // xmm12
  __m128i v13; // xmm8
  __m128i v14; // xmm9
  float v15; // xmm7_4
  __m128i v16; // xmm0
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm11_4
  float v20; // xmm12_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  int v23; // r10d
  const struct CMILMatrix *v24; // rdx
  _BYTE v25[64]; // [rsp+28h] [rbp-E0h] BYREF
  int v26; // [rsp+68h] [rbp-A0h]
  _BYTE v27[64]; // [rsp+78h] [rbp-90h] BYREF
  int v28; // [rsp+B8h] [rbp-50h]
  __m128 v29[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v30; // [rsp+108h] [rbp+0h]
  float v31[4]; // [rsp+118h] [rbp+10h] BYREF
  float v32[4]; // [rsp+128h] [rbp+20h] BYREF
  float v33[4]; // [rsp+138h] [rbp+30h] BYREF
  float v34[4]; // [rsp+148h] [rbp+40h] BYREF

  v31[0] = 0.0;
  v9 = _mm_cvtsi32_si128(*(_DWORD *)a8);
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(a8 + 4));
  v11 = _mm_cvtsi32_si128(*a6);
  v12 = _mm_cvtsi32_si128(a6[1]);
  v13 = _mm_cvtsi32_si128(a6[2]);
  v14 = _mm_cvtsi32_si128(a6[3]);
  v31[1] = 0.0;
  v34[0] = 0.0;
  v34[1] = 0.0;
  v33[0] = 0.0;
  v33[1] = 0.0;
  v15 = _mm_cvtepi32_ps(v9).m128_f32[0];
  v31[2] = (float)a2;
  v31[3] = (float)a3;
  v34[2] = (float)a4;
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(a8 + 8));
  v34[3] = (float)a5;
  v17 = (float)*(int *)(a8 + 12);
  v26 = 0;
  v18 = _mm_cvtepi32_ps(v10).m128_f32[0];
  LODWORD(v19) = _mm_cvtepi32_ps(v11).m128_u32[0];
  LODWORD(v20) = _mm_cvtepi32_ps(v12).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v13).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v33[3] = v17 - v18;
  v32[0] = v19;
  v32[1] = v20;
  v32[2] = v21;
  v32[3] = v22;
  v33[2] = _mm_cvtepi32_ps(v16).m128_f32[0] - v15;
  CMILMatrix::InferAffineMatrix((__int64)a9, flt_18026E348, v31);
  if ( v15 != 0.0 || v18 != 0.0 )
    CMILMatrix::Translate(a9, COERCE_FLOAT(LODWORD(v15) ^ _xmm), COERCE_FLOAT(LODWORD(v18) ^ _xmm));
  if ( a7 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix((__int64)v25, v33, v32);
    v24 = (const struct CMILMatrix *)v25;
  }
  else
  {
    v28 = v23;
    v30 = v23;
    CMILMatrix::SetToRotation((CMILMatrix *)v27, v21 - v19, v22 - v20, a7);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v27, (__int64)v32, v31);
    CMILMatrix::InferAffineMatrix((__int64)v25, v33, v31);
    CMILMatrix::Multiply(a9, (const struct CMILMatrix *)v25);
    CMILMatrix::SetToInverse(v29, (const struct CMILMatrix *)v27);
    v24 = (const struct CMILMatrix *)v29;
  }
  CMILMatrix::Multiply(a9, v24);
  CMILMatrix::InferAffineMatrix((__int64)v25, v34, flt_18026E348);
  CMILMatrix::Multiply(a9, (const struct CMILMatrix *)v25);
}
