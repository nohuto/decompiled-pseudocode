/*
 * XREFs of ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC
 * Callers:
 *     ?RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801775E0 (-RestoreState@CResampleLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     floor @ 0x1800DB784 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180176D08 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180177010 (-FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180177100 (-FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E5380 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801E53F8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  float v5; // xmm3_4
  struct CSurfaceShaderComposer *v6; // rsi
  char v7; // r15
  unsigned int v8; // ebx
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i v12; // xmm7
  int v13; // r12d
  int v14; // r13d
  int SurfacePixelShaderNoRef; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  char v28; // [rsp+40h] [rbp-C0h]
  __int16 v29; // [rsp+70h] [rbp-90h] BYREF
  char v30; // [rsp+72h] [rbp-8Eh]
  __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h]
  CD3DLockableTexture *v34; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  _DWORD v38[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  int v43; // [rsp+D0h] [rbp-30h]
  int v44; // [rsp+D4h] [rbp-2Ch]
  int v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+DCh] [rbp-24h]
  __int64 v47; // [rsp+E4h] [rbp-1Ch]
  int v48; // [rsp+ECh] [rbp-14h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  __int128 v50; // [rsp+100h] [rbp+0h]
  __int128 v51; // [rsp+110h] [rbp+10h]
  __int128 v52; // [rsp+120h] [rbp+20h]
  __int128 v53; // [rsp+130h] [rbp+30h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 48) + 160LL))(*((_QWORD *)a2 + 48));
  v5 = *((float *)this + 29);
  v34 = 0LL;
  v6 = *(struct CSurfaceShaderComposer **)(v4 + 1168);
  v31 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( v5 < 1.0 || (v7 = 1, *((float *)this + 30) < 1.0) )
    v7 = 0;
  if ( !v6 )
  {
    v8 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2005270524, 0xC4u);
    goto LABEL_29;
  }
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v43 = 0;
  v45 = 0;
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v48 = 0;
  HIDWORD(v37) = 1065353216;
  v38[0] = -1082130432;
  v38[1] = 1065353216;
  v39 = 0LL;
  v40 = 0LL;
  v41 = -1082130432;
  v42 = -1082130432;
  v44 = 1065353216;
  LODWORD(v35) = _mm_cvtepi32_ps(v11).m128_u32[0];
  v49 = _xmm_bf800000bf800000000000003f800000;
  v51 = _xmm;
  v46 = 0x3F8000003F800000LL;
  v47 = 0x3F8000003F800000LL;
  v53 = _xmm;
  HIDWORD(v35) = _mm_cvtepi32_ps(v10).m128_u32[0];
  v50 = _xmm;
  *(float *)&v36 = _mm_cvtepi32_ps(v9).m128_f32[0] * v5;
  *(float *)v12.m128i_i32 = _mm_cvtepi32_ps(v12).m128_f32[0] * *((float *)this + 30);
  v52 = _xmm;
  HIDWORD(v36) = v12.m128i_i32[0];
  v13 = (int)floor(*(float *)&v36 + 0.5);
  v14 = (int)floor(*(float *)v12.m128i_i32 + 0.5);
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D(a2);
  v8 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v27 = 221;
    goto LABEL_28;
  }
  if ( g_LockAndReadLayer )
  {
    CDrawingContext::ReadTexture(a2);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 224LL))(*((_QWORD *)this + 1), 0LL, 0LL);
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1));
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 120) + 32LL))(v16 + 120);
  v18 = *((_QWORD *)a2 + 45);
  v32 = v17;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 112LL))(v18);
  v20 = *((_DWORD *)this + 28);
  v33 = *(_QWORD *)(v19 + 192);
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 != 1 )
    {
      v8 = -2005270524;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2005270524, 0x118u);
      goto LABEL_29;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 2LL, &v31);
    v8 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v27 = 268;
      goto LABEL_28;
    }
    SurfacePixelShaderNoRef = FillXBRBuffer(v6, *((_DWORD *)this + 6), *((_DWORD *)this + 7), v13, v14);
    v8 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v27 = 275;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SurfacePixelShaderNoRef, v27);
      goto LABEL_29;
    }
  }
  else
  {
    v22 = *((_DWORD *)this + 7);
    v23 = *((_DWORD *)this + 6);
    if ( v7 )
    {
      SurfacePixelShaderNoRef = FillLanczosUpBuffer(v6, v23, v22, v13, v14);
      v8 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v27 = 243;
        goto LABEL_28;
      }
      SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 1LL, &v31);
      v8 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v27 = 247;
        goto LABEL_28;
      }
    }
    else
    {
      SurfacePixelShaderNoRef = ComputeLanczosKernel(v6, v23, v22, v13, v14);
      v8 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v27 = 257;
        goto LABEL_28;
      }
      SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v6, 0LL, &v31);
      v8 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef < 0 )
      {
        v27 = 261;
        goto LABEL_28;
      }
    }
  }
  v24 = *((_QWORD *)this + 1);
  v29 = 256;
  v30 = 1;
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 160LL))(v24);
  CSurfaceShaderComposer::RunShader(v6, v38, v25, &v32, 1, &v35, 0, &v29, v28, v33, v31, 0LL, 0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
LABEL_29:
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v34);
  return v8;
}
