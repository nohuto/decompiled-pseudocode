/*
 * XREFs of ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180021E48 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004889C (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18006E0F8 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18006E174 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        __int64 a1,
        CD3DDeviceLevel1 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        int *a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // r15
  int v9; // ebx
  int v12; // ebx
  int ColorChannelDepth; // ebx
  char IsOpaque; // al
  signed int ConversionShader; // eax
  unsigned int v16; // edi
  signed int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  signed int D3DSamplerStateNoRef; // eax
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
  v31 = *a4;
  v25 = 0LL;
  DWORD2(v28) = 0;
  v30 = 0;
  if ( *(_BYTE *)(a6 + 128) )
    v9 = 16;
  if ( a5 == 22 )
    v9 |= 8u;
  v12 = v9 | 1;
  LODWORD(v27) = v12;
  if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)(a1 + 16)) )
    LODWORD(v27) = v12 | 4;
  CDrawListBitmap::GetPixelFormatInfo(a1 + 16, (__int64)v33);
  DWORD2(v26) = 0;
  *(_QWORD *)&v26 = "NoOp";
  ColorChannelDepth = GetColorChannelDepth(v33[0]);
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)(a1 + 16));
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ConversionShader, 0x56u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x5Fu);
    }
    else
    {
      v21 = *(_WORD *)(a1 + 40);
      v22 = *(_BYTE *)(a1 + 42);
      D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef((__int64)a2, (unsigned __int8 *)&v21, &v25);
      v16 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DSamplerStateNoRef, 0x61u);
      }
      else
      {
        v19 = v23;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(
          v7,
          *((_QWORD *)a2 + v23 + 131),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
          v7,
          v24,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, 0LL, 1LL, a1 + 48);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 1LL, &v25);
        *a7 = v19;
      }
    }
  }
  return v16;
}
