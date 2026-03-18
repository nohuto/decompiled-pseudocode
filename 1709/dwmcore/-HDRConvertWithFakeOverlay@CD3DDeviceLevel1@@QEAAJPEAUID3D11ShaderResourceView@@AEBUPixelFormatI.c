/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7E1C
 * Callers:
 *     ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9564 (-HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801907DC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@0PEAVCMILMatrix@@@Z @ 0x1801A5F8C (-CalcHDRConvertUVTransform@CD3DDeviceLevel1@@QEBAXIIIIAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXG.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801AB588 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x1801ABA58 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::HDRConvertWithFakeOverlay(
        CSurfaceShaderComposer **this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int *a7,
        enum DXGI_MODE_ROTATION a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        int a12,
        int a13,
        unsigned int a14,
        float a15,
        char a16,
        __int64 a17)
{
  __int64 v18; // xmm0_8
  unsigned int v19; // r11d
  int v20; // r10d
  int v21; // r11d
  signed int CompositingPixelShaderNoRef; // eax
  unsigned int v23; // ebx
  CSurfaceShaderComposer *v24; // rcx
  signed int updated; // eax
  __int64 v26; // r8
  CSurfaceShaderComposer *v27; // rcx
  int v29; // [rsp+40h] [rbp-C0h]
  char v30; // [rsp+60h] [rbp-A0h]
  __int16 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+72h] [rbp-8Eh]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v37[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp+0h] BYREF
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h] BYREF
  int v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+124h] [rbp+24h]
  int v45; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v46[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v47; // [rsp+138h] [rbp+38h]
  __int64 v48; // [rsp+140h] [rbp+40h]
  int v49; // [rsp+148h] [rbp+48h]
  int v50; // [rsp+14Ch] [rbp+4Ch]
  int v51; // [rsp+150h] [rbp+50h]
  int v52; // [rsp+154h] [rbp+54h]
  int v53; // [rsp+158h] [rbp+58h]
  __int64 v54; // [rsp+15Ch] [rbp+5Ch]
  __int64 v55; // [rsp+164h] [rbp+64h]
  int v56; // [rsp+16Ch] [rbp+6Ch]
  __int128 v57; // [rsp+170h] [rbp+70h]
  __int128 v58; // [rsp+180h] [rbp+80h]
  __int128 v59; // [rsp+190h] [rbp+90h]
  __int128 v60; // [rsp+1A0h] [rbp+A0h]
  __int128 v61; // [rsp+1B0h] [rbp+B0h]

  v38 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v51 = 0;
  v53 = 0;
  v35 = 0LL;
  v56 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v54 = 0x3F8000003F800000LL;
  v55 = 0x3F8000003F800000LL;
  v43 = *((_DWORD *)a3 + 2);
  v57 = _xmm_bf800000bf800000000000003f800000;
  v59 = _xmm;
  v61 = _xmm;
  v42 = *a3;
  v18 = *a9;
  v45 = *((_DWORD *)a9 + 2);
  v58 = _xmm;
  v36[0] = a2;
  v36[1] = a4;
  v46[0] = -1082130432;
  v46[1] = 1065353216;
  v49 = -1082130432;
  v50 = -1082130432;
  v52 = 1065353216;
  v60 = _xmm;
  v44 = v18;
  CD3DDeviceLevel1::CalcHDRConvertUVTransform((__int64)this, a12, a13, a5, a6, a7, a8, a10, (CMILMatrix *)v37);
  v19 = 0;
  do
  {
    v34[0] = v46[6 * v19 + 2];
    v34[1] = v46[6 * v19 + 3];
    CMILMatrix::Transform((CMILMatrix *)v37, (const struct MilPoint2F *)v34, (struct MilPoint2F *)&v33, 1);
    v46[v20 + 4] = v33;
    v19 = v21 + 1;
    v46[v20 + 5] = DWORD1(v33);
  }
  while ( v19 < 6 );
  *(_QWORD *)&v33 = &v42;
  *((_QWORD *)&v33 + 1) = 2LL;
  CompositingPixelShaderNoRef = CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
                                  (struct CD3DDeviceLevel1 *)this,
                                  &v33,
                                  a14,
                                  &v35);
  v23 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CompositingPixelShaderNoRef, 0xB2Eu);
  }
  else
  {
    v24 = this[145];
    HIDWORD(v41) = 1065353216;
    *(float *)&v40 = (float)a12;
    *((float *)&v40 + 1) = (float)a13;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v24, a15);
    v23 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0xB34u);
    }
    else
    {
      v27 = this[145];
      v30 = 1;
      LOBYTE(v29) = a16;
      v31 = 257;
      v32 = 1;
      CSurfaceShaderComposer::RunShader(v27, v46, v26, v36, 2, &v39, 5, &v31, v29, a11, v35, a17, v30);
    }
  }
  return v23;
}
