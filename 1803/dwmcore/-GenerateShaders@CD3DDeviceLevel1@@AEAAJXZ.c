/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180075F10 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800C8BA0 (-GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800CB8EC (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800D5B30 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  int v1; // r12d
  unsigned int i; // esi
  __int64 v4; // rdi
  __m128i v5; // xmm6
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  int v7; // ebx
  unsigned int j; // edi
  unsigned int k; // esi
  int v10; // eax
  __int64 v11; // rdi
  __m128i v12; // xmm6
  __m128i v13; // xmm7
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // r15
  __int64 *v21; // rsi
  __int64 *v22; // rdi
  __int64 v23; // rbx
  __int64 D3D11DepthStencilDesc; // rax
  __int64 *v25; // rdi
  CMILPoolResource *v27; // rcx
  unsigned int v28; // [rsp+28h] [rbp-39h]
  __int64 **v29; // [rsp+48h] [rbp-19h] BYREF
  struct CSurfaceShaderComposer *v30; // [rsp+50h] [rbp-11h] BYREF
  int v31; // [rsp+58h] [rbp-9h]
  const char *v32; // [rsp+60h] [rbp-1h]
  int v33; // [rsp+68h] [rbp+7h]
  __int128 v34; // [rsp+70h] [rbp+Fh]
  BOOL v35; // [rsp+C8h] [rbp+67h] BYREF
  int v36; // [rsp+CCh] [rbp+6Bh]
  struct ID3D11PixelShader *v37; // [rsp+D0h] [rbp+6Fh] BYREF

  v1 = *((_DWORD *)this + 189);
  for ( i = 0; i < 8; ++i )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
    if ( i - 3 > 2 || v1 >= 37632 )
    {
      v4 = *((_QWORD *)this + 81);
      v5 = *((__m128i *)&unk_1802D3DE0 + (int)i);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + i + 132);
      CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, char *))(*(_QWORD *)v4 + 96LL))(
                                                       v4,
                                                       _mm_srli_si128(v5, 8).m128i_u64[0],
                                                       v5.m128i_i64[0],
                                                       0LL,
                                                       (char *)this + 8 * i + 1056);
      v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v28 = 634;
LABEL_47:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v28);
        return (unsigned int)v7;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  }
  for ( j = 0; j < 4; ++j )
  {
    *(_QWORD *)&v34 = 0xFFFFFFFFLL;
    v30 = (struct CSurfaceShaderComposer *)"NoOp";
    v31 = 0;
    v33 = 0;
    v32 = "NoOp";
    v29 = (__int64 **)j;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)&v29,
                                                     0,
                                                     (enum VertexShaderKey::Enum *)&v35,
                                                     &v37);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v28 = 647;
      goto LABEL_47;
    }
    if ( ((unsigned __int8)v29 & 1) != 0 )
    {
      LODWORD(v29) = (unsigned int)v29 | 4;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       this,
                                                       (const struct CommonRenderingShaderDesc *)&v29,
                                                       0,
                                                       (enum VertexShaderKey::Enum *)&v35,
                                                       &v37);
      v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v28 = 653;
        goto LABEL_47;
      }
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    v35 = k - 2 <= 1;
    v36 = ((k - 1) & 0xFFFFFFFD) != 0 ? 2 : 4;
    v10 = VertexShaderDesc::ResolveKey(&v35);
    if ( (unsigned int)(v10 - 3) > 2 || v1 >= 37632 )
    {
      v11 = *((_QWORD *)this + 81);
      v12 = *((__m128i *)&unk_1802D3DE0 + v10);
      v13 = *((__m128i *)&unk_1802D3DA0 + (int)k);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + k + 147);
      CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, unsigned __int64, __int64, char *))(*(_QWORD *)v11 + 88LL))(
                                                       v11,
                                                       _mm_srli_si128(v13, 8).m128i_u64[0],
                                                       v13.m128i_i64[0],
                                                       _mm_srli_si128(v12, 8).m128i_u64[0],
                                                       v12.m128i_i64[0],
                                                       (char *)this + 8 * k + 1176);
      v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v28 = 671;
        goto LABEL_47;
      }
    }
  }
  v14 = 0LL;
  do
  {
    v15 = *((_QWORD *)this + 81);
    v16 = (__int64 *)((char *)this + 8 * v14);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v16 + 151);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v15 + 160LL))(
                                                     v15,
                                                     &byte_18023A100[264 * (int)v14],
                                                     (char *)v16 + 1208);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v28 = 679;
      goto LABEL_47;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 0x18 );
  v17 = 0LL;
  do
  {
    v18 = *((_QWORD *)this + 81);
    v19 = (__int64 *)((char *)this + 8 * v17);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v19 + 223);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64, __int16 *, char *))(*(_QWORD *)v18 + 176LL))(
                                                     v18,
                                                     &_ImageBase[20 * (int)v17 + 1314548],
                                                     (char *)v19 + 1784);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v28 = 686;
      goto LABEL_47;
    }
    v17 = (unsigned int)(v17 + 1);
  }
  while ( !(_DWORD)v17 );
  v20 = 0LL;
  do
  {
    v21 = (__int64 *)*((_QWORD *)this + 81);
    v22 = (__int64 *)((char *)this + 8 * v20);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v22 + 224);
    v23 = *v21;
    D3D11DepthStencilDesc = DepthStencilMode::GetD3D11DepthStencilDesc((unsigned int)v20);
    CommonOrCubeMapRenderingShadersNoRefInternal = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(v23 + 168))(
                                                     v21,
                                                     D3D11DepthStencilDesc,
                                                     (char *)v22 + 1792);
    v7 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v28 = 693;
      goto LABEL_47;
    }
    v20 = (unsigned int)(v20 + 1);
  }
  while ( (unsigned int)v20 < 4 );
  if ( v1 >= 37632 )
  {
    v30 = 0LL;
    v29 = (__int64 **)((char *)this + 1168);
    LOBYTE(v31) = 1;
    v7 = CSurfaceShaderComposer::Create(this, &v30);
    if ( (_BYTE)v31 )
    {
      v25 = *v29;
      *v29 = (__int64 *)v30;
      if ( v25 )
      {
        v27 = (CMILPoolResource *)v25[9];
        if ( v27 )
        {
          v25[9] = 0LL;
          CMILPoolResource::Release(v27);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v25 + 8);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v25 + 7);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v25 + 6);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v25 + 5);
        `vector destructor iterator'(
          v25,
          8uLL,
          5uLL,
          Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::~ComPtr<ID3D11DepthStencilState>);
        operator delete(v25, 0x60uLL);
      }
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x2C0u);
  }
  return (unsigned int)v7;
}
