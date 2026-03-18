/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180021E48 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x180021EC4 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004C380 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18006D054 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18006E0F8 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18006E174 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x180090440 (-IsOpaque@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        _DWORD *a4,
        int a5,
        __int64 a6,
        enum DXGI_COLOR_SPACE_TYPE *a7)
{
  __int64 *v7; // rsi
  struct CD3DDeviceLevel1 *v8; // r12
  __int64 v11; // rbx
  ShaderLinkingSamplerDesc *v12; // rdi
  int v13; // eax
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  __int64 v16; // r14
  _BYTE *v17; // rcx
  unsigned int v18; // eax
  __int16 *v19; // rdi
  __int64 v20; // r12
  _BYTE *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  int D3DSamplerStateNoRef; // eax
  unsigned int v25; // edi
  _DWORD *v26; // rcx
  void (__fastcall *v27)(_DWORD *, enum DXGI_FORMAT *); // rax
  CCompositionSurfaceBitmap *v28; // rcx
  void (*v29)(void); // rax
  unsigned int ColorChannelDepth; // eax
  bool v31; // dl
  int ConversionShader; // eax
  float v33; // xmm1_4
  __int64 v34; // rax
  int Shaders; // eax
  struct ID3D11PixelShader *v36; // rbx
  enum DXGI_COLOR_SPACE_TYPE v37; // r14d
  CRenderingTechnique *v38; // rcx
  int ConstantBuffer; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  bool v43; // [rsp+30h] [rbp-D0h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v44[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-C0h]
  __int16 v46; // [rsp+50h] [rbp-B0h] BYREF
  char v47; // [rsp+52h] [rbp-AEh]
  struct ID3D11PixelShader *v48; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v49; // [rsp+68h] [rbp-98h]
  _BYTE *v50; // [rsp+70h] [rbp-90h]
  struct CD3DDeviceLevel1 *v51; // [rsp+78h] [rbp-88h]
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  _DWORD *v55; // [rsp+A0h] [rbp-60h]
  enum DXGI_COLOR_SPACE_TYPE *v56; // [rsp+A8h] [rbp-58h]
  enum DXGI_FORMAT v57[2]; // [rsp+B0h] [rbp-50h] BYREF
  DXGI_COLOR_SPACE_TYPE v58; // [rsp+B8h] [rbp-48h]
  _BYTE v59[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v60[76]; // [rsp+D4h] [rbp-2Ch] BYREF
  int v61; // [rsp+120h] [rbp+20h]
  const char *v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  _QWORD v65[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v66[4]; // [rsp+160h] [rbp+60h] BYREF

  v7 = (__int64 *)*((_QWORD *)a2 + 82);
  v8 = a2;
  v48 = 0LL;
  v51 = a2;
  v44[0] = a3;
  v55 = a4;
  v54 = a6;
  v56 = a7;
  memset_0(v59, 0, 0x60uLL);
  v11 = 4LL;
  v12 = (ShaderLinkingSamplerDesc *)v59;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v12);
    v12 = (ShaderLinkingSamplerDesc *)((char *)v12 + 24);
    --v11;
  }
  while ( v11 );
  v63 = 0;
  v62 = "NoOp";
  v64 = 0LL;
  v13 = *a4;
  v64 = v44[0] == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v14 = 0;
  v61 = v13;
  LOBYTE(v13) = *(_BYTE *)(a6 + 128);
  *(_DWORD *)((char *)&v64 + 1) = a5 == 22;
  BYTE2(v64) = v13;
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL);
  v45 = v15;
  if ( v15 )
  {
    v16 = 0LL;
    v17 = &v60[-a1];
    v53 = &v59[-a1];
    v18 = v45;
    v19 = (__int16 *)(a1 + 120);
    v50 = &v60[-a1];
    v20 = 16LL;
    v49 = (__int16 *)(a1 + 120);
    v21 = (_BYTE *)(a1 + 32);
    while ( 1 )
    {
      if ( *((_QWORD *)v21 - 1) )
      {
        if ( *(_QWORD *)v21 )
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v21 + 32LL))(*(_QWORD *)v21, 0LL);
        else
          v22 = 0LL;
        v23 = (__int64)v51;
        v65[v16] = v22;
        v46 = *v19;
        v47 = *((_BYTE *)v19 + 2);
        D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(v23, (unsigned __int8 *)&v46, &v66[v14]);
        v25 = D3DSamplerStateNoRef;
        if ( D3DSamplerStateNoRef < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0x53u);
          return v25;
        }
        v26 = *(_DWORD **)v21;
        if ( *(_QWORD *)v21 )
        {
          v27 = *(void (__fastcall **)(_DWORD *, enum DXGI_FORMAT *))(*(_QWORD *)v26 + 24LL);
          if ( (char *)v27 == (char *)CD2DBitmap::GetPixelFormatInfo )
            CD2DBitmap::GetPixelFormatInfo(v26, v57);
          else
            v27(v26, v57);
        }
        else
        {
          *(_QWORD *)v57 = 0LL;
          v58 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
        }
        DWORD2(v52) = 0;
        *(_QWORD *)&v52 = "NoOp";
        if ( !v21[8] )
        {
          v28 = (CCompositionSurfaceBitmap *)*((_QWORD *)v21 - 1);
          v29 = *(void (**)(void))(*(_QWORD *)v28 + 104LL);
          if ( (char *)v29 == (char *)CCompositionSurfaceBitmap::IsOpaque )
          {
            CCompositionSurfaceBitmap::IsOpaque(v28);
          }
          else if ( (char *)v29 == (char *)CRenderTargetImageSource::IsOpaque )
          {
            CRenderTargetImageSource::IsOpaque(v28);
          }
          else
          {
            v29();
          }
        }
        ColorChannelDepth = GetColorChannelDepth(v57[0]);
        ConversionShader = ColorConversion::GetConversionShader(
                             v58,
                             v31,
                             ColorChannelDepth,
                             v44[0],
                             (struct ColorConversion::Shader *)&v52,
                             &v43);
        v25 = ConversionShader;
        if ( ConversionShader < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConversionShader, 0x60u);
          return v25;
        }
        if ( DWORD2(v52) > 1 )
          *(_OWORD *)&v21[(_QWORD)v53 - 32] = v52;
        LOBYTE(v64) = v43 ? v64 : 0;
        if ( *(_BYTE *)(v16 + a1 + 132) )
          v33 = 0.0;
        else
          v33 = FLOAT_1_0;
        v34 = v54;
        if ( *(float *)(v20 + v54 + 16) != v33 )
        {
          *(_BYTE *)(v54 + 8) = 1;
          *(float *)(v34 + v20 + 16) = v33;
        }
        v17 = v50;
        v19 = v49;
        v18 = v45;
      }
      else
      {
        v21[(_QWORD)v17 - 32] = 1;
        v65[v16] = 0LL;
        v66[v16] = 0LL;
      }
      v19 = (__int16 *)((char *)v19 + 3);
      ++v14;
      ++v16;
      v49 = v19;
      v20 += 4LL;
      v21 += 24;
      if ( v14 >= v18 )
      {
        v15 = v45;
        v8 = v51;
        break;
      }
    }
  }
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD *))(*v7 + 64))(v7, 0LL, v15, v65);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(*v7 + 80))(v7, 0LL, v15, v66);
  Shaders = CRenderingTechnique::GetShaders(
              *(CRenderingTechnique **)(a1 + 16),
              v8,
              (const struct ShaderLinkingConfig *)v59,
              (enum VertexShaderKey::Enum *)v44,
              &v48);
  v36 = v48;
  v25 = Shaders;
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Shaders, 0x8Au);
  }
  else
  {
    v37 = v44[0];
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v7 + 88))(v7, *((_QWORD *)v8 + v44[0] + 131), 0LL, 0LL);
    (*(void (__fastcall **)(__int64 *, struct ID3D11PixelShader *, _QWORD, _QWORD))(*v7 + 72))(v7, v36, 0LL, 0LL);
    v38 = *(CRenderingTechnique **)(a1 + 16);
    *(_QWORD *)v44 = 0LL;
    ConstantBuffer = CRenderingTechnique::GetConstantBuffer(v38, v8, (struct ID3D11Buffer **)v44);
    v25 = ConstantBuffer;
    if ( ConstantBuffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConstantBuffer, 0x92u);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v44);
    }
    else
    {
      if ( *(_QWORD *)v44 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64, enum DXGI_COLOR_SPACE_TYPE *))(*v7 + 128))(
          v7,
          0LL,
          1LL,
          v44);
        v41 = *(_QWORD *)v44;
        if ( *(_QWORD *)v44 )
        {
          *(_QWORD *)v44 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 96LL) & 2) != 0 && *v55 == -1
        || (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 96LL) & 4) != 0 )
      {
        v42 = *v7;
        v48 = *(struct ID3D11PixelShader **)(*((_QWORD *)v8 + 13) + 800LL);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, struct ID3D11PixelShader **))(v42 + 56))(
          v7,
          2LL,
          1LL,
          &v48);
        (*(void (__fastcall **)(__int64 *, __int64, __int64, struct ID3D11PixelShader **))(*v7 + 128))(
          v7,
          1LL,
          1LL,
          &v48);
      }
      *v56 = v37;
    }
  }
  if ( v36 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v36->lpVtbl->Release)(v36);
  return v25;
}
