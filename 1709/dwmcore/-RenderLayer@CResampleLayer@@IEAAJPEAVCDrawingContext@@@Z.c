/*
 * XREFs of ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D868
 * Callers:
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014DD60 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180043794 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D378 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D68C (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x18014D77C (-FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801AB510 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801AB588 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  float v5; // xmm7_4
  struct CSurfaceShaderComposer *v6; // rsi
  char v7; // r13
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned int v10; // ebx
  __m128i v11; // xmm6
  float v12; // xmm1_4
  __m128 v13; // xmm5
  __m128 v14; // xmm3
  float v15; // xmm4_4
  float v16; // xmm0_4
  __m128 v17; // xmm1
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // r15d
  int v24; // r12d
  signed int SurfacePixelShaderNoRef; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  char v38; // [rsp+48h] [rbp-C0h]
  __int16 v39; // [rsp+78h] [rbp-90h] BYREF
  char v40; // [rsp+7Ah] [rbp-8Eh]
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int32 v43; // [rsp+90h] [rbp-78h]
  unsigned __int32 v44; // [rsp+94h] [rbp-74h]
  struct D2D_MATRIX_3X2_F v45; // [rsp+98h] [rbp-70h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-58h] BYREF
  CD3DLockableTexture *v47; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v48[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-38h]
  struct D2D_RECT_F v50; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v51; // [rsp+E8h] [rbp-20h]
  _DWORD v52[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  int v55; // [rsp+110h] [rbp+8h]
  int v56; // [rsp+114h] [rbp+Ch]
  int v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+11Ch] [rbp+14h]
  int v59; // [rsp+120h] [rbp+18h]
  __int64 v60; // [rsp+124h] [rbp+1Ch]
  __int64 v61; // [rsp+12Ch] [rbp+24h]
  int v62; // [rsp+134h] [rbp+2Ch]
  __int128 v63; // [rsp+138h] [rbp+30h]
  __int128 v64; // [rsp+148h] [rbp+40h]
  __int128 v65; // [rsp+158h] [rbp+50h]
  __int128 v66; // [rsp+168h] [rbp+60h]
  __int128 v67; // [rsp+178h] [rbp+70h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 48) + 152LL))(*((_QWORD *)a2 + 48));
  v5 = *((float *)this + 29);
  v47 = 0LL;
  v6 = *(struct CSurfaceShaderComposer **)(v4 + 1160);
  v41 = 0LL;
  v46 = 0LL;
  v48[0] = 0LL;
  v48[1] = 0LL;
  v49 = 0LL;
  if ( v5 < 1.0 || (v7 = 1, *((float *)this + 30) < 1.0) )
    v7 = 0;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v42 = 0LL;
  v43 = _mm_cvtepi32_ps(v8).m128_u32[0];
  v44 = _mm_cvtepi32_ps(v9).m128_u32[0];
  if ( !v6 )
  {
    v10 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x887A0004, 0xCCu);
    goto LABEL_33;
  }
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v12 = *((float *)this + 30) * 0.0;
  v13 = 0LL;
  v14 = 0LL;
  v14.m128_f32[0] = 0.0 - v12;
  v15 = (float)*((int *)this + 4);
  v13.m128_f32[0] = 0.0 - (float)(v5 * 0.0);
  v45.m11 = v5 + 0.0;
  v16 = *((float *)this + 30);
  v45.m21 = v12 + 0.0;
  v17 = v14;
  v45.m12 = (float)(v5 * 0.0) + 0.0;
  v45.m22 = v16 + 0.0;
  v17.m128_f32[0] = (float)((float)(v14.m128_f32[0] * 0.0) + v13.m128_f32[0]) + v15;
  v50 = *(struct D2D_RECT_F *)&v45.m11;
  v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] * 0.0) + v14.m128_f32[0]) + _mm_cvtepi32_ps(v11).m128_f32[0];
  v51 = _mm_unpacklo_ps(v17, v13).m128_u64[0];
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving((D2DMatrixHelper *)&v42, &v50, &v45, 0LL);
  v19 = v18;
  do
  {
    *((float *)v48 + v19) = (float)*(int *)((char *)&v49 + 4 * v19 + this - (CResampleLayer *)v48);
    ++v19;
  }
  while ( v19 < 4 );
  v20 = v18;
  v57 &= v18;
  v59 &= v18;
  v62 &= v18;
  v63 = _xmm_bf800000bf800000000000003f800000;
  v65 = _xmm;
  v64 = _xmm;
  v67 = _xmm;
  HIDWORD(v49) = 1065353216;
  v52[0] = -1082130432;
  v52[1] = 1065353216;
  v53 = v18;
  v54 = v18;
  v55 = -1082130432;
  v56 = -1082130432;
  v58 = 1065353216;
  v60 = 0x3F8000003F800000LL;
  v61 = 0x3F8000003F800000LL;
  v66 = _xmm;
  do
  {
    v21 = 3 * v20++;
    v22 = 2 * v21;
    *(float *)&v52[v22 + 4] = *(float *)&v52[v22 + 4] / v5;
    *(float *)&v52[v22 + 5] = *(float *)&v52[v22 + 5] / *((float *)this + 30);
  }
  while ( v20 < 6 );
  v23 = (int)(float)(v45.m21 - v45.m11);
  v24 = (int)(float)(v45.m22 - v45.m12);
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D(a2);
  v10 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v37 = 239;
    goto LABEL_32;
  }
  if ( g_LockAndReadLayer )
  {
    CDrawingContext::ReadTexture(a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 184LL))(*((_QWORD *)this + 1), 0LL, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v26 + 120) + 32LL))(v26 + 120);
  v28 = *((_QWORD *)a2 + 45);
  v46 = v27;
  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 104LL))(v28);
  v30 = *((_DWORD *)this + 28);
  v42 = *(_QWORD *)(v29 + 192);
  v31 = v30 - 1;
  if ( v31 )
  {
    if ( v31 != 1 )
    {
      v10 = -2005270524;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x887A0004, 0x12Au);
      goto LABEL_33;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 2LL, &v41);
    v10 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v37 = 286;
      goto LABEL_32;
    }
    SurfacePixelShaderNoRef = FillXBRBuffer(v6, *((_DWORD *)this + 6), *((_DWORD *)this + 7), v23, v24);
    v10 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v37 = 293;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SurfacePixelShaderNoRef, v37);
      goto LABEL_33;
    }
  }
  else
  {
    v32 = *((_DWORD *)this + 7);
    v33 = *((_DWORD *)this + 6);
    if ( v7 )
    {
      SurfacePixelShaderNoRef = FillLanczosUpBuffer(v6, v33, v32, v23, v24);
      v10 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v37 = 261;
        goto LABEL_32;
      }
      SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 1LL, &v41);
      v10 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v37 = 265;
        goto LABEL_32;
      }
    }
    else
    {
      SurfacePixelShaderNoRef = ComputeLanczosKernel(v6, v33, v32, v23, v24);
      v10 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v37 = 275;
        goto LABEL_32;
      }
      SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 0LL, &v41);
      v10 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v37 = 279;
        goto LABEL_32;
      }
    }
  }
  v34 = *((_QWORD *)this + 1);
  v39 = 256;
  v40 = 1;
  v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 152LL))(v34);
  CSurfaceShaderComposer::RunShader(v6, v52, v35, &v46, 1, v48, 0, &v39, v38, v42, v41, 0LL, 0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
LABEL_33:
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v47);
  return v10;
}
