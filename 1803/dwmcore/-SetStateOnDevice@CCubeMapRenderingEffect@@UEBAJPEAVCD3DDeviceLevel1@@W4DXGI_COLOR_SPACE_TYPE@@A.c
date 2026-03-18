/*
 * XREFs of ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1802172C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180071BBC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800772B8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B8610 (-GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18013DF28 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18017E928 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        CCubeMapRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CLightsMask *a4,
        bool a5,
        struct CVertexConstantBuffer *a6,
        enum VertexShaderKey::Enum *a7)
{
  __int64 v7; // r12
  int v9; // ebx
  int v12; // ebx
  int ColorChannelDepth; // ebx
  char IsOpaque; // al
  int ConversionShader; // eax
  unsigned int v16; // edi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  int D3DSamplerStateNoRef; // eax
  int v19; // ebx
  __int16 v21; // [rsp+30h] [rbp-81h] BYREF
  char v22; // [rsp+32h] [rbp-7Fh]
  int v23; // [rsp+40h] [rbp-71h] BYREF
  struct ID3D11PixelShader *v24; // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  __int128 v26; // [rsp+58h] [rbp-59h] BYREF
  __int64 v27; // [rsp+68h] [rbp-49h] BYREF
  __int128 v28; // [rsp+70h] [rbp-41h]
  const char *v29; // [rsp+80h] [rbp-31h]
  int v30; // [rsp+88h] [rbp-29h]
  int v31; // [rsp+90h] [rbp-21h]
  bool v32[4]; // [rsp+94h] [rbp-1Dh] BYREF
  enum DXGI_FORMAT v33[4]; // [rsp+98h] [rbp-19h] BYREF

  v7 = *((_QWORD *)a2 + 82);
  v27 = 0LL;
  v9 = 0;
  *(_QWORD *)&v28 = "NoOp";
  v29 = "NoOp";
  v24 = 0LL;
  *(_DWORD *)v32 = 0;
  v31 = *(_DWORD *)a4;
  *(_WORD *)&v32[1] = a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v25 = 0LL;
  DWORD2(v28) = 0;
  v30 = 0;
  if ( *((_BYTE *)a6 + 144) )
    v9 = 16;
  if ( a5 )
    v9 |= 8u;
  v12 = v9 | 1;
  LODWORD(v27) = v12;
  if ( CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16)) )
    LODWORD(v27) = v12 | 4;
  CBitmapSourceD2DCacheAdapter::GetPixelFormatInfo((__int64)this + 16, (__int64)v33);
  DWORD2(v26) = 0;
  *(_QWORD *)&v26 = "NoOp";
  ColorChannelDepth = GetColorChannelDepth(v33[0]);
  IsOpaque = CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16));
  ConversionShader = ColorConversion::GetConversionShader(
                       (enum DXGI_COLOR_SPACE_TYPE)v33[2],
                       IsOpaque,
                       ColorChannelDepth,
                       a3,
                       (struct ColorConversion::Shader *)&v26,
                       v32);
  v16 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConversionShader, 0x57u);
  }
  else
  {
    if ( DWORD2(v26) > 1 )
      v28 = v26;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     a2,
                                                     (const struct CommonRenderingShaderDesc *)&v27,
                                                     1,
                                                     (enum VertexShaderKey::Enum *)&v23,
                                                     &v24);
    v16 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x60u);
    }
    else
    {
      v21 = *((_WORD *)this + 20);
      v22 = *((_BYTE *)this + 42);
      D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef((__int64)a2, (unsigned __int8 *)&v21, &v25);
      v16 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0x62u);
      }
      else
      {
        v19 = v23;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(
          v7,
          *((_QWORD *)a2 + v23 + 132),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
          v7,
          v24,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 64LL))(
          v7,
          0LL,
          1LL,
          (char *)this + 48);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 1LL, &v25);
        *(_DWORD *)a7 = v19;
      }
    }
  }
  return v16;
}
