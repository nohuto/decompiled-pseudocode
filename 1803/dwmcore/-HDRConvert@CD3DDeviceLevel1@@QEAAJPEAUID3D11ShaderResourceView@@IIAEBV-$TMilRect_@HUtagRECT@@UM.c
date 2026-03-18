/*
 * XREFs of ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E04C0
 * Callers:
 *     ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801F2C4C (-HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800A36D8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_1800A36D8.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801DED94 (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E006C (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801E53F8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801E58C8 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::HDRConvert(
        CSurfaceShaderComposer **this,
        __int64 a2,
        int a3,
        int a4,
        unsigned int *a5,
        enum DXGI_MODE_ROTATION a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        float a13,
        char a14,
        __int64 a15)
{
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned int v24; // ebx
  __int64 v25; // rax
  int v26; // xmm1_4
  __int64 v27; // r11
  __int64 v28; // rax
  unsigned int v29; // ebx
  int v30; // xmm1_4
  __int64 v31; // r11
  __int64 v32; // rax
  int CompositingPixelShaderNoRef; // eax
  unsigned int v34; // ebx
  CSurfaceShaderComposer *v35; // rcx
  int updated; // eax
  __int64 v37; // r8
  CSurfaceShaderComposer *v38; // rcx
  int v40; // [rsp+48h] [rbp-C0h]
  char v41; // [rsp+68h] [rbp-A0h]
  __int16 v42; // [rsp+78h] [rbp-90h] BYREF
  char v43; // [rsp+7Ah] [rbp-8Eh]
  __int64 v44; // [rsp+80h] [rbp-88h] BYREF
  __int64 v45; // [rsp+88h] [rbp-80h]
  __int64 v46; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v47[64]; // [rsp+98h] [rbp-70h] BYREF
  int v48; // [rsp+D8h] [rbp-30h]
  _BYTE v49[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v50; // [rsp+128h] [rbp+20h]
  __int128 v51; // [rsp+138h] [rbp+30h] BYREF
  int v52; // [rsp+148h] [rbp+40h] BYREF
  int v53; // [rsp+14Ch] [rbp+44h]
  float v54; // [rsp+150h] [rbp+48h]
  float v55; // [rsp+154h] [rbp+4Ch]
  __int64 v56; // [rsp+158h] [rbp+50h] BYREF
  __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 v58; // [rsp+168h] [rbp+60h]
  _DWORD v59[2]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  int v62; // [rsp+190h] [rbp+88h]
  int v63; // [rsp+194h] [rbp+8Ch]
  int v64; // [rsp+198h] [rbp+90h]
  int v65; // [rsp+19Ch] [rbp+94h]
  int v66; // [rsp+1A0h] [rbp+98h]
  __int64 v67; // [rsp+1A4h] [rbp+9Ch]
  __int64 v68; // [rsp+1ACh] [rbp+A4h]
  int v69; // [rsp+1B4h] [rbp+ACh]
  __int128 v70; // [rsp+1B8h] [rbp+B0h]
  __int128 v71; // [rsp+1C8h] [rbp+C0h]
  __int128 v72; // [rsp+1D8h] [rbp+D0h]
  __int128 v73; // [rsp+1E8h] [rbp+E0h]
  __int128 v74; // [rsp+1F8h] [rbp+F0h]

  v69 = 0;
  v52 = 0;
  v53 = 0;
  v70 = _xmm_bf800000bf800000000000003f800000;
  v72 = _xmm;
  v71 = _xmm;
  v45 = a15;
  v64 = 0;
  v66 = 0;
  v74 = _xmm;
  v18 = _mm_cvtsi32_si128(*a8);
  v73 = _xmm;
  v19 = _mm_cvtsi32_si128(a8[1]);
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v67 = 0x3F8000003F800000LL;
  v68 = 0x3F8000003F800000LL;
  v46 = a2;
  v44 = 0LL;
  v48 = 0;
  v50 = 0;
  v59[0] = -1082130432;
  v59[1] = 1065353216;
  v60 = 0LL;
  v61 = 0LL;
  LODWORD(v51) = _mm_cvtepi32_ps(v18).m128_u32[0];
  v20 = _mm_cvtsi32_si128(a8[2]);
  DWORD1(v51) = _mm_cvtepi32_ps(v19).m128_u32[0];
  v21 = _mm_cvtsi32_si128(a8[3]);
  v62 = -1082130432;
  v63 = -1082130432;
  v65 = 1065353216;
  v55 = (float)a11;
  DWORD2(v51) = _mm_cvtepi32_ps(v20).m128_u32[0];
  v54 = (float)a10;
  HIDWORD(v51) = _mm_cvtepi32_ps(v21).m128_u32[0];
  CMILMatrix::InferAffineMatrix((__int64)v47, (float *)&v52, (float *)&v51);
  if ( !CMILMatrix::IsIdentity<0>((__int64)v47) )
  {
    v24 = v23;
    do
    {
      v25 = 6 * v24;
      v52 = v59[v25];
      v53 = v59[(unsigned int)(v25 + 1)];
      CMILMatrix::Transform((CMILMatrix *)v47, (const struct MilPoint2F *)&v52, (struct MilPoint2F *)&v51, 1);
      ++v24;
      v26 = DWORD1(v51);
      v59[v27] = v51;
      v59[v28] = v26;
    }
    while ( v24 < 6 );
  }
  CD3DDeviceLevel1::CalcHDRConvertUVTransform(v22, a10, a11, a3, a4, a5, a6, (__int64)a8, (CMILMatrix *)v49);
  v29 = 0;
  do
  {
    LODWORD(v51) = v59[6 * v29 + 2];
    DWORD1(v51) = v59[6 * v29 + 3];
    CMILMatrix::Transform((CMILMatrix *)v49, (const struct MilPoint2F *)&v51, (struct MilPoint2F *)&v52, 1);
    ++v29;
    v30 = v53;
    v59[v31] = v52;
    v59[v32] = v30;
  }
  while ( v29 < 6 );
  *((_QWORD *)&v51 + 1) = a7;
  *(_QWORD *)&v51 = 1LL;
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  &v51,
                                  a12,
                                  &v44);
  v34 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CompositingPixelShaderNoRef, 0xB51u);
  }
  else
  {
    v35 = this[146];
    *(float *)&v57 = (float)a10;
    *((float *)&v57 + 1) = (float)a11;
    HIDWORD(v58) = 1065353216;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v35, a13);
    v34 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xB57u);
    }
    else
    {
      v38 = this[146];
      v41 = 1;
      LOBYTE(v40) = a14;
      v42 = 257;
      v43 = 1;
      CSurfaceShaderComposer::RunShader(v38, v59, v37, &v46, 1, &v56, 5, &v42, v40, a9, v44, v45, v41);
    }
  }
  return v34;
}
