/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetColorSpace@CBitmapRealization@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180036CE0 (-GetColorSpace@CBitmapRealization@@UEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180037990 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAU.c)
 *     ?IsColorConversionRequired@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@0@Z @ 0x18007ADD4 (-IsColorConversionRequired@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800CA7D8 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SA?AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_MODE@@0@Z @ 0x18015FCD0 (-GetConversionShader@ColorConversion@@SA-AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_M.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        __int64 a1,
        __int64 a2,
        struct RenderTargetInfo *a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        int *a5,
        int a6,
        __int64 a7,
        enum DXGI_COLOR_SPACE_TYPE *a8)
{
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rsi
  __int16 *v13; // r12
  __int64 v14; // r13
  _QWORD *i; // r14
  CCompositionSurfaceBitmap *v16; // r15
  int CommonRenderingShadersNoRef; // eax
  unsigned int v18; // edi
  __int64 v19; // rsi
  enum DXGI_COLOR_SPACE_TYPE v20; // ebx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  unsigned int v25; // ebx
  struct ID3D11ShaderResourceView **v26; // r8
  int (*v27)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct ID3D11ShaderResourceView **); // rax
  int BitmapShaderResourceViewNoRef; // eax
  int v29; // ebx
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // edi
  char (__fastcall *v34)(CCompositionSurfaceBitmap *); // rax
  char IsOpaque; // al
  CBitmapRealization *v36; // rbx
  __int64 (__fastcall *v37)(CBitmapRealization *); // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  enum DXGI_COLOR_SPACE_TYPE v39; // r15d
  enum DXGI_COLOR_SPACE_TYPE v40; // edi
  int v41; // eax
  __int32 v42; // eax
  __int32 v43; // eax
  __int64 v44; // rcx
  __int32 v45; // eax
  __int64 v46; // rdi
  __int64 v47; // r8
  __int64 v48; // rbx
  int v49; // eax
  unsigned int v50; // eax
  int v51; // eax
  CBitmapRealization *v52[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v53; // [rsp+40h] [rbp-C0h]
  __int16 v54; // [rsp+50h] [rbp-B0h]
  enum DXGI_COLOR_SPACE_TYPE v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  int ConversionShader; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+74h] [rbp-8Ch]
  __int64 v59; // [rsp+78h] [rbp-88h]
  __int16 v60; // [rsp+80h] [rbp-80h]
  struct RenderTargetInfo *v61; // [rsp+90h] [rbp-70h]
  struct ID3D11PixelShader *v62; // [rsp+98h] [rbp-68h] BYREF
  __m256i v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C4h] [rbp-3Ch]
  int v66; // [rsp+CCh] [rbp-34h]
  int v67; // [rsp+D0h] [rbp-30h]
  _QWORD v68[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h]
  enum DXGI_COLOR_SPACE_TYPE *v71; // [rsp+F8h] [rbp-8h]
  _QWORD v72[2]; // [rsp+100h] [rbp+0h] BYREF
  __m256i v73; // [rsp+110h] [rbp+10h] BYREF
  __int128 v74; // [rsp+130h] [rbp+30h]
  int v75; // [rsp+140h] [rbp+40h]

  v9 = a2;
  v71 = a8;
  v10 = *a5;
  v70 = *(_QWORD *)(a2 + 648);
  v58 = v10;
  v55 = a4;
  v61 = a3;
  v59 = a2;
  v62 = 0LL;
  v72[0] = 0LL;
  v72[1] = 0LL;
  v68[0] = 0LL;
  v68[1] = 0LL;
  v56 = 0LL;
  ConversionShader = 0;
  if ( ((a4 - 1) & 0xFFFFFFFD) == 0 )
    ConversionShader = ColorConversion::GetConversionShader(0LL, 1LL, (unsigned int)a4);
  v11 = v56;
  if ( *(_BYTE *)(a7 + 120) )
  {
    v11 = v56 | 0x10;
    LODWORD(v56) = v56 | 0x10;
  }
  if ( a6 == 22 )
    LODWORD(v56) = v11 | 8;
  v12 = 0LL;
  v13 = (__int16 *)(a1 + 32);
  v14 = a1 - (_QWORD)v68;
  for ( i = v68; ; ++i )
  {
    v16 = *(CCompositionSurfaceBitmap **)((char *)i + v14 + 16);
    if ( v16 )
      break;
LABEL_9:
    v12 = (unsigned int)(v12 + 1);
    v13 = (__int16 *)((char *)v13 + 3);
    if ( (unsigned int)v12 >= 2 )
    {
      CommonRenderingShadersNoRef = CD3DDeviceLevel1::GetCommonRenderingShadersNoRef(
                                      (CD3DDeviceLevel1 *)v9,
                                      (const struct CommonRenderingShaderDesc *)&v56,
                                      (enum VertexShaderKey::Enum *)&v55,
                                      &v62);
      v18 = CommonRenderingShadersNoRef;
      if ( CommonRenderingShadersNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CommonRenderingShadersNoRef, 0xA2u);
      }
      else
      {
        v19 = v70;
        v20 = v55;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v70 + 88LL))(
          v70,
          *(_QWORD *)(v59 + 8LL * (int)v55 + 1144),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v19 + 72LL))(
          v19,
          v62,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v19 + 64LL))(v19, 0LL, 2LL, v72);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v19 + 80LL))(v19, 0LL, 2LL, v68);
        *v71 = v20;
      }
      return v18;
    }
  }
  v22 = *(_QWORD *)v16;
  v52[0] = 0LL;
  v23 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v22 + 72);
  if ( v23 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v16, v52);
  else
    CurrentRenderingRealization = v23(v16, v52);
  v25 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization >= 0 )
  {
    v26 = (struct ID3D11ShaderResourceView **)&v72[v12];
    v27 = *(int (**)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct ID3D11ShaderResourceView **))(*(_QWORD *)v52[0] + 120LL);
    if ( v27 == CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef )
      BitmapShaderResourceViewNoRef = CDxHandleBitmapRealization::GetBitmapShaderResourceViewNoRef(v52[0], v61, v26);
    else
      BitmapShaderResourceViewNoRef = ((__int64 (__fastcall *)(CBitmapRealization *, struct RenderTargetInfo *, struct ID3D11ShaderResourceView **))v27)(
                                        v52[0],
                                        v61,
                                        v26);
    v25 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0x79u);
      goto LABEL_57;
    }
    v29 = 0;
    v30 = (unsigned __int8)*v13;
    v53 = *v13;
    v31 = *((unsigned __int8 *)v13 + 2) + 4 * ((unsigned int)HIBYTE(v53) + 4 * v30);
    v69 = v31;
    if ( !*(_QWORD *)(v9 + 8 * v31 + 1488) )
    {
      v60 = *v13;
      if ( HIBYTE(v60) && *((_BYTE *)v13 + 2) )
        v41 = 37120;
      else
        v41 = 37632;
      if ( *(_DWORD *)(v9 + 740) < v41 )
      {
        v29 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD65u);
LABEL_54:
        v18 = v29;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x7Bu);
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v52);
        return v18;
      }
      v54 = *v13;
      if ( (_BYTE)v54 )
        v42 = 21;
      else
        v42 = 0;
      v63.m256i_i32[0] = v42;
      v43 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v54));
      v44 = *((unsigned __int8 *)v13 + 2);
      v63.m256i_i32[1] = v43;
      v45 = ExtendMode::ToD3D11TextureAddressMode(v44);
      v46 = *(_QWORD *)(v9 + 640);
      v63.m256i_i32[2] = v45;
      *(__int64 *)((char *)&v63.m256i_i64[1] + 4) = 3LL;
      v65 = 0LL;
      v64 = 0;
      v66 = 0;
      v48 = v59 + 8 * v47;
      v63.m256i_i32[5] = 1;
      v63.m256i_i64[3] = 8LL;
      v67 = 2139095039;
      v74 = 0u;
      v75 = 2139095039;
      v73 = v63;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v48 + 1488);
      v49 = (*(__int64 (__fastcall **)(__int64, __m256i *, __int64))(*(_QWORD *)v46 + 184LL))(v46, &v73, v48 + 1488);
      v29 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xD69u);
        v9 = v59;
        goto LABEL_21;
      }
      v9 = v59;
      v31 = v69;
    }
    *i = *(_QWORD *)(v9 + 8 * v31 + 1488);
LABEL_21:
    if ( v29 < 0 )
      goto LABEL_54;
    if ( (_DWORD)v12 )
    {
      LODWORD(v56) = v56 | 2;
      v36 = v52[0];
    }
    else
    {
      v32 = *(_QWORD *)v16;
      v33 = v56 | 1;
      LODWORD(v56) = v56 | 1;
      v34 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(v32 + 96);
      if ( v34 == CCompositionSurfaceBitmap::IsOpaque )
        IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v16);
      else
        IsOpaque = v34(v16);
      if ( IsOpaque )
      {
        v33 |= 4u;
        LODWORD(v56) = v33;
      }
      if ( *(_BYTE *)v13 == 2 )
        LODWORD(v56) = v33 | 0x20;
      v36 = v52[0];
      v37 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v52[0] + 56LL);
      if ( v37 == CBitmapRealization::GetColorSpace )
      {
        ColorSpace = (unsigned int)CBitmapRealization::GetColorSpace(v52[0]);
      }
      else
      {
        ColorSpace = (unsigned int)v37(v52[0]);
        v36 = v52[0];
      }
      v39 = v55;
      v40 = ColorSpace;
      if ( ColorConversion::IsColorConversionRequired(ColorSpace, v55) )
      {
        v50 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v36 + 48LL))(v36);
        v51 = ColorConversion::GetConversionShader((unsigned int)v40, v50, (unsigned int)v39);
        v36 = v52[0];
        HIDWORD(v56) = v51;
      }
      v9 = v59;
    }
    if ( v36 )
    {
      v52[0] = 0LL;
      (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v36 + 16LL))(v36);
    }
    goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRenderingRealization, 0x75u);
LABEL_57:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)v52);
  return v25;
}
