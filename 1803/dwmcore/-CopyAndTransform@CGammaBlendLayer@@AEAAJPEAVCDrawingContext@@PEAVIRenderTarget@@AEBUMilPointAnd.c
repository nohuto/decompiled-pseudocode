/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176560 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176B50 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E5380 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801E53F8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm4
  int v17; // eax
  float v18; // xmm3_4
  int SurfacePixelShaderNoRef; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  char v28; // [rsp+40h] [rbp-C0h]
  __int16 v29; // [rsp+70h] [rbp-90h] BYREF
  char v30; // [rsp+72h] [rbp-8Eh]
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  CD3DLockableTexture *v33; // [rsp+88h] [rbp-78h] BYREF
  float v34; // [rsp+90h] [rbp-70h] BYREF
  float v35; // [rsp+94h] [rbp-6Ch]
  float v36; // [rsp+98h] [rbp-68h]
  float v37; // [rsp+9Ch] [rbp-64h]
  _QWORD v38[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  _DWORD v40[2]; // [rsp+C0h] [rbp-40h] BYREF
  float v41; // [rsp+C8h] [rbp-38h]
  float v42; // [rsp+CCh] [rbp-34h]
  float v43; // [rsp+D0h] [rbp-30h]
  float v44; // [rsp+D4h] [rbp-2Ch]
  int v45; // [rsp+D8h] [rbp-28h]
  int v46; // [rsp+DCh] [rbp-24h]
  float v47; // [rsp+E0h] [rbp-20h]
  float v48; // [rsp+E4h] [rbp-1Ch]
  float v49; // [rsp+E8h] [rbp-18h]
  float v50; // [rsp+ECh] [rbp-14h]
  int v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F4h] [rbp-Ch]
  float v53; // [rsp+F8h] [rbp-8h]
  float v54; // [rsp+FCh] [rbp-4h]
  float v55; // [rsp+100h] [rbp+0h]
  float v56; // [rsp+104h] [rbp+4h]
  int v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+10Ch] [rbp+Ch]
  float v59; // [rsp+110h] [rbp+10h]
  float v60; // [rsp+114h] [rbp+14h]
  float v61; // [rsp+118h] [rbp+18h]
  float v62; // [rsp+11Ch] [rbp+1Ch]
  int v63; // [rsp+120h] [rbp+20h]
  int v64; // [rsp+124h] [rbp+24h]
  float v65; // [rsp+128h] [rbp+28h]
  float v66; // [rsp+12Ch] [rbp+2Ch]
  float v67; // [rsp+130h] [rbp+30h]
  float v68; // [rsp+134h] [rbp+34h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  float v71; // [rsp+140h] [rbp+40h]
  float v72; // [rsp+144h] [rbp+44h]
  float v73; // [rsp+148h] [rbp+48h]
  float v74; // [rsp+14Ch] [rbp+4Ch]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 384) + 160LL))(*(_QWORD *)(a2 + 384));
  v33 = 0LL;
  v31 = 0LL;
  v11 = *(_QWORD *)(v10 + 1168);
  v12 = 0LL;
  v32 = 0LL;
  v38[0] = 0LL;
  v38[1] = 0LL;
  v39 = 0LL;
  if ( !v11 )
  {
    v13 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2005270524, 0x86u);
    goto LABEL_13;
  }
  do
  {
    *((float *)v38 + v12) = (float)*(int *)(a5 + 4 * v12);
    ++v12;
  }
  while ( v12 < 4 );
  v14 = *a3;
  HIDWORD(v39) = 1065353216;
  (*(void (__fastcall **)(__int64 *, float *))(v14 + 48))(a3, &v34);
  v15 = _mm_cvtsi32_si128(*a4);
  v16 = _mm_cvtsi32_si128(a4[1]);
  v17 = a4[1] + a4[3];
  v18 = (float)(int)(*a4 + a4[2]);
  v40[0] = -1082130432;
  v40[1] = 1065353216;
  v45 = -1082130432;
  v46 = -1082130432;
  v51 = 1065353216;
  v52 = 1065353216;
  v57 = -1082130432;
  v58 = -1082130432;
  v63 = 1065353216;
  v64 = -1082130432;
  v69 = 1065353216;
  v70 = 1065353216;
  v48 = (float)v17 / (float)(v37 - v35);
  v50 = v48;
  v60 = v48;
  v62 = v48;
  v66 = v48;
  v68 = v48;
  v41 = _mm_cvtepi32_ps(v15).m128_f32[0] / (float)(v36 - v34);
  v42 = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)(v37 - v35);
  v43 = v41;
  v44 = v42;
  v47 = v41;
  v49 = v41;
  v53 = v18 / (float)(v36 - v34);
  v54 = v42;
  v55 = v53;
  v56 = v42;
  v59 = v41;
  v61 = v41;
  v65 = v53;
  v67 = v53;
  v71 = v53;
  v72 = v42;
  v73 = v53;
  v74 = v42;
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D((CDrawingContext *)a2);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v27 = 169;
    goto LABEL_12;
  }
  if ( g_LockAndReadLayer )
  {
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 224LL))(*(_QWORD *)(a1 + 8), 0LL, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *))(*a3 + 112))(a3);
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v20 + 120) + 32LL))(v20 + 120);
  v22 = *(_QWORD *)(a2 + 360);
  v32 = v21;
  v23 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 112LL))(v22) + 192);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v11, a6, &v31);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v27 = 182;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfacePixelShaderNoRef, v27);
    goto LABEL_13;
  }
  v24 = *(_QWORD *)(a1 + 8);
  v29 = 256;
  v30 = 1;
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 160LL))(v24);
  CSurfaceShaderComposer::RunShader(v11, v40, v25, &v32, 1, v38, 0, &v29, v28, v23, v31, 0LL, 0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
LABEL_13:
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v33);
  return v13;
}
