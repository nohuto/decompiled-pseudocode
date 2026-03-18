/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x180042AD0 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180077420 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x180078290 (-GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180093C80 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800B5170 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ?IsOpaque@CAtlasImageSource@@UEBA_NXZ @ 0x1800C5F50 (-IsOpaque@CAtlasImageSource@@UEBA_NXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800C9340 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017EB44 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CLightsMask *a4,
        bool a5,
        struct CVertexConstantBuffer *a6,
        enum VertexShaderKey::Enum *a7)
{
  CD3DDeviceLevel1 *v9; // r13
  enum DXGI_COLOR_SPACE_TYPE v10; // r10d
  int v11; // ebx
  bool v12; // al
  char **v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  int v16; // esi
  __int64 i; // rbx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // edi
  __int64 v19; // r12
  int v20; // ebx
  CHwTextureRenderTarget *v22; // rcx
  struct ID3D11ShaderResourceView *(__fastcall *v23)(CHwTextureRenderTarget *__hidden); // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  char *v25; // r9
  int v26; // r12d
  char *v27; // r13
  unsigned int v28; // r13d
  int v29; // r12d
  CAtlasImageSource *v30; // rcx
  char (__fastcall *v31)(CCompositionSurfaceBitmap *); // rax
  char IsOpaque; // al
  _DWORD *v33; // rcx
  void (__fastcall *v34)(_DWORD *, enum DXGI_COLOR_SPACE_TYPE *); // rax
  unsigned int v35; // r12d
  int v36; // r13d
  CCompositionSurfaceBitmap *v37; // rcx
  bool (__fastcall *v38)(CAtlasImageSource *__hidden); // rax
  char v39; // al
  bool v40; // r10
  enum DXGI_COLOR_SPACE_TYPE v41; // ecx
  bool v42; // dl
  __int64 v43; // rax
  __int128 v44; // xmm0
  int v45; // eax
  __int32 v46; // eax
  __int32 v47; // eax
  __int64 v48; // r9
  __int64 v49; // rcx
  __int32 v50; // eax
  __int64 v51; // r8
  __int64 v52; // r12
  int v53; // eax
  __int16 v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  struct CD3DDeviceLevel1 *v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h]
  __int128 v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+94h] [rbp-6Ch]
  struct ID3D11PixelShader *v62; // [rsp+98h] [rbp-68h] BYREF
  __m256i v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C4h] [rbp-3Ch]
  int v66; // [rsp+CCh] [rbp-34h]
  int v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  enum VertexShaderKey::Enum *v70; // [rsp+F0h] [rbp-10h]
  _QWORD v71[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v72[2]; // [rsp+108h] [rbp+8h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v73[4]; // [rsp+118h] [rbp+18h] BYREF
  __m256i v74; // [rsp+128h] [rbp+28h] BYREF
  __int128 v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+158h] [rbp+58h]

  v70 = a7;
  v69 = *((_QWORD *)a2 + 82);
  v9 = a2;
  v56 = a2;
  v71[0] = 0LL;
  v71[1] = 0LL;
  v72[0] = 0LL;
  v72[1] = 0LL;
  v57 = 0LL;
  DWORD2(v58) = 0;
  DWORD2(v59) = 0;
  v61 = 0;
  v60 = *(_DWORD *)a4;
  v62 = 0LL;
  *(_QWORD *)&v58 = "NoOp";
  *(_QWORD *)&v59 = "NoOp";
  *(_WORD *)((char *)&v61 + 1) = a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v10 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  *(_QWORD *)v73 = "NoOp";
  v73[2] = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v11 = -2003292288;
  v12 = a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709
     && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709);
  LOBYTE(v61) = v12;
  v13 = (char **)&ColorConversion::g_rgShaders;
  if ( a3 )
  {
    if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v14 = *(_OWORD *)v73;
      goto LABEL_5;
    }
    v13 = &off_1802D4110;
  }
  v14 = *(_OWORD *)v13;
  v11 = 0;
  *(_OWORD *)v73 = *(_OWORD *)v13;
  v10 = v73[2];
LABEL_5:
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x87u);
    return (unsigned int)v11;
  }
  if ( (unsigned int)v10 > DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    v59 = v14;
  v15 = v57;
  if ( *((_BYTE *)a6 + 144) )
  {
    v15 = v57 | 0x10;
    LODWORD(v57) = v57 | 0x10;
  }
  if ( a5 )
    LODWORD(v57) = v15 | 8;
  v16 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( !*((_QWORD *)this + 3 * i + 2) )
      goto LABEL_14;
    v22 = (CHwTextureRenderTarget *)*((_QWORD *)this + 3 * i + 3);
    v23 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CHwTextureRenderTarget *__hidden))(*(_QWORD *)v22 + 32LL);
    if ( v23 == CHwTextureRenderTarget::GetShaderResourceView )
      ShaderResourceView = CHwTextureRenderTarget::GetShaderResourceView(v22);
    else
      ShaderResourceView = (struct ID3D11ShaderResourceView *)((__int64 (__fastcall *)(CHwTextureRenderTarget *, struct ID3D11ShaderResourceView *(__fastcall *)(CHwTextureRenderTarget *__hidden)))v23)(
                                                                v22,
                                                                CHwTextureRenderTarget::GetShaderResourceView);
    v71[i] = ShaderResourceView;
    v25 = (char *)this + 2 * i;
    v26 = 0;
    v27 = (char *)v9
        + 128 * (unsigned int)(unsigned __int8)*(_WORD *)&v25[i + 64]
        + 32 * (unsigned __int8)HIBYTE(*(_WORD *)&v25[i + 64])
        + 8 * (unsigned __int8)v25[i + 66];
    if ( *((_QWORD *)v27 + 175) )
    {
LABEL_21:
      v72[i] = *((_QWORD *)v27 + 175);
      goto LABEL_22;
    }
    LOWORD(v55) = *(_WORD *)&v25[i + 64];
    if ( BYTE1(v55) && v25[i + 66] )
      v45 = 37120;
    else
      v45 = 37632;
    if ( *((_DWORD *)v56 + 189) < v45 )
      break;
    v54 = *(_WORD *)&v25[i + 64];
    if ( (_BYTE)v54 )
      v46 = 21;
    else
      v46 = 0;
    v63.m256i_i32[0] = v46;
    v47 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v54));
    v49 = *(unsigned __int8 *)(i + v48 + 66);
    v63.m256i_i32[1] = v47;
    v50 = ExtendMode::ToD3D11TextureAddressMode(v49);
    v52 = *((_QWORD *)v56 + 81);
    v63.m256i_i32[2] = v50;
    *(__int64 *)((char *)&v63.m256i_i64[1] + 4) = 3LL;
    v63.m256i_i32[5] = 1;
    v63.m256i_i64[3] = 8LL;
    v65 = 0LL;
    v64 = 0;
    v66 = 0;
    v67 = 2139095039;
    v76 = 2139095039;
    v74 = v63;
    v75 = 0u;
    if ( v51 )
    {
      *((_QWORD *)v27 + 175) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v53 = (*(__int64 (__fastcall **)(__int64, __m256i *, char *))(*(_QWORD *)v52 + 184LL))(v52, &v74, v27 + 1400);
    v26 = v53;
    if ( v53 >= 0 )
      goto LABEL_21;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xEA8u);
LABEL_22:
    v28 = v26;
    if ( v26 < 0 )
      goto LABEL_146;
    if ( v16 )
    {
      LODWORD(v57) = v57 | 2;
      v9 = v56;
      goto LABEL_14;
    }
    v29 = v57 | 1;
    LODWORD(v57) = v57 | 1;
    if ( *((_BYTE *)this + 24 * i + 32)
      || ((v30 = (CAtlasImageSource *)*((_QWORD *)this + 3 * i + 2),
           v31 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v30 + 104LL),
           v31 != CCompositionSurfaceBitmap::IsOpaque)
        ? ((char *)v31 != (char *)CImageSource::IsOpaque
         ? ((char *)v31 != (char *)CGdiSpriteBitmap::IsOpaque
          ? ((char *)v31 != (char *)CAtlasImageSource::IsOpaque
           ? (IsOpaque = ((__int64 (*)(void))v31)())
           : (IsOpaque = CAtlasImageSource::IsOpaque(v30)))
          : (IsOpaque = CGdiSpriteBitmap::IsOpaque(v30)))
         : (IsOpaque = CImageSource::IsOpaque(v30)))
        : (IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v30)),
          IsOpaque) )
    {
      v29 |= 4u;
      LODWORD(v57) = v29;
    }
    if ( *((_BYTE *)this + 2 * i + i + 64) == 2 )
      LODWORD(v57) = v29 | 0x20;
    v33 = (_DWORD *)*((_QWORD *)this + 3 * i + 3);
    v34 = *(void (__fastcall **)(_DWORD *, enum DXGI_COLOR_SPACE_TYPE *))(*(_QWORD *)v33 + 24LL);
    if ( (char *)v34 == (char *)CD2DBitmap::GetPixelFormatInfo )
    {
      CD2DBitmap::GetPixelFormatInfo(v33, v73);
    }
    else if ( (char *)v34 == (char *)CD3DSurface::GetPixelFormatInfo )
    {
      CD3DSurface::GetPixelFormatInfo(v33, v73);
    }
    else
    {
      v34(v33, v73);
    }
    v35 = 0;
    *(_QWORD *)&v68 = "NoOp";
    DWORD2(v68) = 0;
    if ( v73[0] == (DXGI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020|0x40) )
    {
LABEL_33:
      v36 = 8;
    }
    else
    {
      switch ( v73[0] )
      {
        case 2:
          v36 = 32;
          break;
        case 0xA:
        case 0xB:
          v36 = 16;
          break;
        case 0x18:
          v36 = 10;
          break;
        case 0x1C:
        case 0x31:
        case 0x3D:
        case 0x41:
        case 0x58:
        case 0x5B:
        case 0x67:
        case 0x6A:
        case 0x6B:
          goto LABEL_33;
        default:
          v36 = 0;
          break;
      }
    }
    v40 = 1;
    if ( !*((_BYTE *)this + 24 * i + 32) )
    {
      v37 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 3 * i + 2);
      v38 = *(bool (__fastcall **)(CAtlasImageSource *__hidden))(*(_QWORD *)v37 + 104LL);
      if ( (char *)v38 == (char *)CCompositionSurfaceBitmap::IsOpaque )
      {
        v39 = CCompositionSurfaceBitmap::IsOpaque(v37);
      }
      else if ( v38 == CImageSource::IsOpaque )
      {
        v39 = CImageSource::IsOpaque(v37);
      }
      else if ( v38 == CGdiSpriteBitmap::IsOpaque )
      {
        v39 = CGdiSpriteBitmap::IsOpaque(v37);
      }
      else
      {
        v39 = v38 == CAtlasImageSource::IsOpaque ? CAtlasImageSource::IsOpaque(v37) : ((__int64 (*)(void))v38)();
      }
      if ( !v39 )
        v40 = 0;
    }
    v41 = v73[2];
    CommonOrCubeMapRenderingShadersNoRefInternal = -2003292288;
    v42 = a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 && !ColorConversion::IsHDRColorSpace(v73[2]);
    if ( v41 )
    {
      switch ( v41 )
      {
        case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
          if ( a3 )
          {
            if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
            {
              v43 = 40LL;
            }
            else
            {
              if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                goto LABEL_120;
              v43 = 4LL;
            }
          }
          else
          {
            v43 = 2LL;
          }
          goto LABEL_44;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
          if ( a3 )
          {
            if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
              goto LABEL_120;
            if ( v36 == 8 )
            {
              v43 = 16LL;
              goto LABEL_44;
            }
            if ( v36 == 10 )
            {
              v43 = 24LL;
              goto LABEL_44;
            }
          }
          else
          {
            if ( v36 == 8 )
            {
              v43 = 14LL;
              goto LABEL_44;
            }
            if ( v36 == 10 )
            {
LABEL_113:
              v43 = 22LL;
              goto LABEL_44;
            }
          }
          goto LABEL_120;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
          if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
            goto LABEL_113;
          if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
            goto LABEL_120;
          v43 = 24LL;
          goto LABEL_44;
        case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
          switch ( a3 )
          {
            case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709:
              v43 = 10LL;
              goto LABEL_44;
            case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
              v43 = 12LL;
              goto LABEL_44;
            case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
              goto LABEL_43;
          }
          goto LABEL_120;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
          if ( a3 )
          {
            if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
            {
              v43 = 36LL;
            }
            else
            {
              if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                goto LABEL_120;
              v43 = 38LL;
            }
          }
          else
          {
            v43 = 34LL;
          }
          goto LABEL_44;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
          if ( a3 )
          {
            if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
              goto LABEL_120;
            if ( v36 == 8 )
            {
              v43 = 20LL;
              goto LABEL_44;
            }
            if ( v36 == 10 )
            {
              v43 = 28LL;
              goto LABEL_44;
            }
          }
          else
          {
            if ( v36 == 8 )
            {
              v43 = 18LL;
              goto LABEL_44;
            }
            if ( v36 == 10 )
            {
              v43 = 26LL;
              goto LABEL_44;
            }
          }
          goto LABEL_120;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
          if ( a3 )
          {
            if ( a3 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
              goto LABEL_120;
            v43 = 32LL;
          }
          else
          {
            v43 = 30LL;
          }
          break;
        default:
          goto LABEL_120;
      }
      goto LABEL_44;
    }
    if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
LABEL_43:
      v43 = 0LL;
LABEL_44:
      if ( v40 )
        v43 = (unsigned int)(v43 + 1);
      CommonOrCubeMapRenderingShadersNoRefInternal = 0;
      v44 = *((_OWORD *)&ColorConversion::g_rgShaders + v43);
      v68 = v44;
      v35 = DWORD2(v44);
      goto LABEL_47;
    }
    if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v43 = 6LL;
      goto LABEL_44;
    }
LABEL_120:
    v44 = v68;
LABEL_47:
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xB6u);
      return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
    }
    if ( v35 > 1 )
      v58 = v44;
    v9 = v56;
    if ( !v42 )
      LOBYTE(v61) = 0;
LABEL_14:
    if ( (unsigned int)++v16 >= 2 )
    {
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       v9,
                                                       (const struct CommonRenderingShaderDesc *)&v57,
                                                       0,
                                                       (enum VertexShaderKey::Enum *)&v55,
                                                       &v62);
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xD2u);
      }
      else
      {
        v19 = v69;
        v20 = v55;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v69 + 88LL))(
          v69,
          *((_QWORD *)v9 + v55 + 132),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v19 + 72LL))(
          v19,
          v62,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v19 + 64LL))(v19, 0LL, 2LL, v71);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v19 + 80LL))(v19, 0LL, 2LL, v72);
        *(_DWORD *)v70 = v20;
      }
      return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
    }
  }
  v26 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xEA4u);
  v28 = -2147024809;
LABEL_146:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x9Fu);
  return v28;
}
