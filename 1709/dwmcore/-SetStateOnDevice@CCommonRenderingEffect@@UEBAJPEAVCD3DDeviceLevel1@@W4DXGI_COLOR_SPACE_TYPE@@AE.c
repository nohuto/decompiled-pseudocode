/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028BB0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002D930 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetShaderResourceView@CD3DSurface@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18002DA00 (-GetShaderResourceView@CD3DSurface@@UEBAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004C380 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x18008D3E0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ?IsOpaque@CAtlasImageSource@@UEBA_NXZ @ 0x18008EE40 (-IsOpaque@CAtlasImageSource@@UEBA_NXZ.c)
 *     ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18008FA50 (-GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D400 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x18015499C (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        __int64 a1,
        CD3DDeviceLevel1 *a2,
        int a3,
        int *a4,
        int a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v7; // r13
  CD3DDeviceLevel1 *v9; // r12
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // eax
  char v13; // al
  char **v14; // rax
  __int128 v15; // xmm0
  int v16; // eax
  int v17; // esi
  __int64 i; // rbx
  int CommonOrCubeMapRenderingShadersNoRefInternal; // edi
  int v20; // ebx
  CD3DSurface *v22; // rcx
  struct ID3D11ShaderResourceView *(__fastcall *v23)(CD3DSurface *__hidden); // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  __int64 v25; // r8
  int v26; // r15d
  __int64 v27; // rdx
  char *v28; // r12
  unsigned int v29; // r12d
  int v30; // r15d
  CCompositionSurfaceBitmap *v31; // rcx
  bool (__fastcall *v32)(CCompositionSurfaceBitmap *__hidden); // rax
  char IsOpaque; // al
  __int64 v34; // rcx
  void (__fastcall *v35)(__int64, __int128 *); // rax
  unsigned int v36; // r15d
  int v37; // r12d
  CCompositionSurfaceBitmap *v38; // rcx
  bool (__fastcall *v39)(CGdiSpriteBitmap *__hidden); // rax
  char v40; // al
  bool v41; // dl
  char v42; // r8
  __int64 v43; // rax
  __int128 v44; // xmm0
  const unsigned __int16 *v45; // rax
  int v46; // eax
  __int32 v47; // eax
  __int32 v48; // eax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r9
  __int32 v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r15
  int v56; // eax
  const unsigned __int16 *v57; // rcx
  __int16 v58; // [rsp+40h] [rbp-C0h]
  int v59[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v60; // [rsp+60h] [rbp-A0h]
  CD3DDeviceLevel1 *v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int128 v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+A0h] [rbp-60h]
  int v66; // [rsp+A4h] [rbp-5Ch]
  struct ID3D11PixelShader *v67; // [rsp+A8h] [rbp-58h] BYREF
  __m256i v68; // [rsp+B0h] [rbp-50h]
  int v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D4h] [rbp-2Ch]
  int v71; // [rsp+DCh] [rbp-24h]
  int v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+E8h] [rbp-18h]
  _DWORD *v74; // [rsp+F8h] [rbp-8h]
  _QWORD v75[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v76[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v77; // [rsp+120h] [rbp+20h] BYREF
  __m256i v78; // [rsp+130h] [rbp+30h] BYREF
  __int128 v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+160h] [rbp+60h]

  v7 = *((_QWORD *)a2 + 82);
  v75[0] = 0LL;
  *(_QWORD *)&v63 = "NoOp";
  v9 = a2;
  *(_QWORD *)&v64 = "NoOp";
  v10 = -2003292288;
  *(_QWORD *)&v77 = "NoOp";
  v11 = 0;
  v75[1] = 0LL;
  v76[0] = 0LL;
  v76[1] = 0LL;
  v62 = 0LL;
  DWORD2(v63) = 0;
  DWORD2(v64) = 0;
  v66 = 0;
  v12 = *a4;
  v61 = a2;
  v59[0] = a3;
  v74 = a7;
  v67 = 0LL;
  v65 = v12;
  DWORD2(v77) = 0;
  if ( a3 == 1 )
  {
    v45 = (const unsigned __int16 *)&unk_180202490;
    while ( *(_DWORD *)v45 )
    {
      v45 += 2;
      if ( v45 == L"DwmExpression_SetValue_%d" )
        goto LABEL_82;
    }
    if ( v45 != L"DwmExpression_SetValue_%d" )
      goto LABEL_2;
LABEL_82:
    v13 = 1;
  }
  else
  {
LABEL_2:
    v13 = 0;
  }
  LOBYTE(v66) = v13;
  v14 = (char **)&ColorConversion::g_rgShaders;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      v15 = v77;
      goto LABEL_5;
    }
    v14 = &off_18026D8B0;
  }
  v15 = *(_OWORD *)v14;
  v10 = 0;
  v77 = *(_OWORD *)v14;
  v11 = DWORD2(v77);
LABEL_5:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x56u);
    return (unsigned int)v10;
  }
  if ( v11 > 1 )
    v64 = v15;
  v16 = v62;
  if ( *(_BYTE *)(a6 + 128) )
  {
    v16 = v62 | 0x10;
    LODWORD(v62) = v62 | 0x10;
  }
  if ( a5 == 22 )
    LODWORD(v62) = v16 | 8;
  v17 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( !*(_QWORD *)(a1 + 24 * i + 16) )
      goto LABEL_14;
    v22 = *(CD3DSurface **)(a1 + 24 * i + 24);
    if ( v22 )
    {
      v23 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CD3DSurface *__hidden))(*(_QWORD *)v22 + 32LL);
      if ( v23 == CD3DSurface::GetShaderResourceView )
      {
        ShaderResourceView = CD3DSurface::GetShaderResourceView(v22);
      }
      else if ( v23 == CHwTextureRenderTarget::GetShaderResourceView )
      {
        ShaderResourceView = CHwTextureRenderTarget::GetShaderResourceView(v22);
      }
      else
      {
        ShaderResourceView = (struct ID3D11ShaderResourceView *)((__int64 (__fastcall *)(CD3DSurface *, struct ID3D11ShaderResourceView *(__fastcall *)(CHwTextureRenderTarget *__hidden), struct ID3D11ShaderResourceView *(__fastcall *)(CD3DSurface *__hidden), bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden)))v23)(
                                                                  v22,
                                                                  CHwTextureRenderTarget::GetShaderResourceView,
                                                                  CD3DSurface::GetShaderResourceView,
                                                                  CCompositionSurfaceBitmap::IsOpaque);
      }
    }
    else
    {
      ShaderResourceView = 0LL;
    }
    v75[i] = ShaderResourceView;
    v25 = a1 + 2 * i;
    v26 = 0;
    v27 = (unsigned __int8)HIBYTE(*(_WORD *)(i + v25 + 64))
        + 4 * (unsigned int)(unsigned __int8)*(_WORD *)(i + v25 + 64);
    v28 = (char *)v9 + 32 * (_DWORD)v27 + 8 * (unsigned int)*(unsigned __int8 *)(i + v25 + 66);
    if ( *((_QWORD *)v28 + 174) )
      goto LABEL_23;
    v60 = *(_WORD *)(i + v25 + 64);
    if ( !HIBYTE(v60) || (v46 = 37120, !*(_BYTE *)(i + v25 + 66)) )
      v46 = 37632;
    if ( *((_DWORD *)v61 + 189) < v46 )
      break;
    v58 = *(_WORD *)(i + v25 + 64);
    v47 = 0;
    if ( (_BYTE)v58 )
      v47 = 21;
    v68.m256i_i32[0] = v47;
    v48 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v58), v27, v25, CCompositionSurfaceBitmap::IsOpaque);
    v50 = *(unsigned __int8 *)(i + v49 + 66);
    v68.m256i_i32[1] = v48;
    v53 = ExtendMode::ToD3D11TextureAddressMode(v50, v51, v49, v52);
    v54 = *((_QWORD *)v28 + 174);
    v55 = *((_QWORD *)v61 + 81);
    v68.m256i_i32[2] = v53;
    *(__int64 *)((char *)&v68.m256i_i64[1] + 4) = 3LL;
    v68.m256i_i32[5] = 1;
    v68.m256i_i64[3] = 8LL;
    v70 = 0LL;
    v69 = 0;
    v71 = 0;
    v72 = 2139095039;
    v80 = 2139095039;
    v78 = v68;
    v79 = 0u;
    if ( v54 )
    {
      *((_QWORD *)v28 + 174) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, __m256i *, char *))(*(_QWORD *)v55 + 184LL))(v55, &v78, v28 + 1392);
    v26 = v56;
    if ( v56 >= 0 )
    {
      v25 = a1 + 2 * i;
LABEL_23:
      v76[i] = *((_QWORD *)v28 + 174);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xE01u);
    v25 = a1 + 2 * i;
LABEL_24:
    v29 = v26;
    if ( v26 < 0 )
      goto LABEL_158;
    if ( v17 )
    {
      LODWORD(v62) = v62 | 2;
      v9 = v61;
      goto LABEL_14;
    }
    v30 = v62 | 1;
    LODWORD(v62) = v62 | 1;
    if ( *(_BYTE *)(a1 + 24 * i + 32)
      || ((v31 = *(CCompositionSurfaceBitmap **)(a1 + 24 * i + 16),
           v32 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)v31 + 104LL),
           v32 == CCompositionSurfaceBitmap::IsOpaque)
        ? (IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v31))
        : v32 != CImageSource::IsOpaque
        ? (v32 != CAtlasImageSource::IsOpaque
         ? (v32 != CGdiSpriteBitmap::IsOpaque
          ? (IsOpaque = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, bool (__fastcall *)(CGdiSpriteBitmap *__hidden), __int64, bool (__fastcall *)(CCompositionSurfaceBitmap *__hidden)))v32)(
                          v31,
                          CGdiSpriteBitmap::IsOpaque,
                          v25,
                          CCompositionSurfaceBitmap::IsOpaque))
          : (IsOpaque = CGdiSpriteBitmap::IsOpaque(v31)))
         : (IsOpaque = CAtlasImageSource::IsOpaque(v31)))
        : (IsOpaque = CImageSource::IsOpaque(v31)),
          v25 = a1 + 2 * i,
          IsOpaque) )
    {
      v30 |= 4u;
      LODWORD(v62) = v30;
    }
    if ( *(_BYTE *)(i + v25 + 64) == 2 )
      LODWORD(v62) = v30 | 0x20;
    v34 = *(_QWORD *)(a1 + 24 * i + 24);
    if ( v34 )
    {
      v35 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 24LL);
      if ( (char *)v35 == (char *)CD2DBitmap::GetPixelFormatInfo )
      {
        CD2DBitmap::GetPixelFormatInfo(v34, &v77);
      }
      else if ( (char *)v35 == (char *)CD3DSurface::GetPixelFormatInfo )
      {
        CD3DSurface::GetPixelFormatInfo(v34, &v77);
      }
      else
      {
        v35(v34, &v77);
      }
    }
    else
    {
      *(_QWORD *)&v77 = 0LL;
      DWORD2(v77) = 0;
    }
    v36 = 0;
    *(_QWORD *)&v73 = "NoOp";
    DWORD2(v73) = 0;
    if ( (_DWORD)v77 == 87 )
    {
LABEL_38:
      v37 = 8;
    }
    else
    {
      switch ( (int)v77 )
      {
        case 2:
          v37 = 32;
          break;
        case 10:
        case 11:
          v37 = 16;
          break;
        case 24:
          v37 = 10;
          break;
        case 28:
        case 49:
        case 61:
        case 65:
        case 88:
        case 91:
        case 103:
        case 106:
        case 107:
          goto LABEL_38;
        default:
          v37 = 0;
          break;
      }
    }
    v41 = 1;
    if ( !*(_BYTE *)(a1 + 24 * i + 32) )
    {
      v38 = *(CCompositionSurfaceBitmap **)(a1 + 24 * i + 16);
      v39 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v38 + 104LL);
      if ( v39 == CCompositionSurfaceBitmap::IsOpaque )
      {
        v40 = CCompositionSurfaceBitmap::IsOpaque(v38);
      }
      else if ( v39 == CImageSource::IsOpaque )
      {
        v40 = CImageSource::IsOpaque(v38);
      }
      else if ( v39 == CAtlasImageSource::IsOpaque )
      {
        v40 = CAtlasImageSource::IsOpaque(v38);
      }
      else
      {
        v40 = v39 == CGdiSpriteBitmap::IsOpaque ? CGdiSpriteBitmap::IsOpaque(v38) : ((__int64 (*)(void))v39)();
      }
      if ( !v40 )
        v41 = 0;
    }
    CommonOrCubeMapRenderingShadersNoRefInternal = -2003292288;
    if ( v59[0] == 1 )
    {
      v57 = (const unsigned __int16 *)&unk_180202490;
      while ( *(_DWORD *)v57 != DWORD2(v77) )
      {
        v57 += 2;
        if ( v57 == L"DwmExpression_SetValue_%d" )
          goto LABEL_109;
      }
      if ( v57 != L"DwmExpression_SetValue_%d" )
        goto LABEL_47;
LABEL_109:
      v42 = 1;
    }
    else
    {
LABEL_47:
      v42 = 0;
    }
    if ( DWORD2(v77) )
    {
      switch ( DWORD2(v77) )
      {
        case 1:
          switch ( v59[0] )
          {
            case 0:
              v43 = 2LL;
              goto LABEL_51;
            case 1:
              goto LABEL_50;
            case 12:
              v43 = 4LL;
              goto LABEL_51;
          }
          goto LABEL_132;
        case 2:
          if ( v59[0] )
          {
            if ( v59[0] != 1 )
              goto LABEL_132;
            if ( v37 == 8 )
            {
              v43 = 16LL;
              goto LABEL_51;
            }
            if ( v37 == 10 )
            {
              v43 = 24LL;
              goto LABEL_51;
            }
          }
          else
          {
            if ( v37 == 8 )
            {
              v43 = 14LL;
              goto LABEL_51;
            }
            if ( v37 == 10 )
            {
LABEL_125:
              v43 = 22LL;
              goto LABEL_51;
            }
          }
          goto LABEL_132;
        case 3:
          if ( !v59[0] )
            goto LABEL_125;
          if ( v59[0] != 1 )
            goto LABEL_132;
          v43 = 24LL;
          goto LABEL_51;
        case 0xC:
          switch ( v59[0] )
          {
            case 0:
              v43 = 10LL;
              goto LABEL_51;
            case 1:
              v43 = 12LL;
              goto LABEL_51;
            case 12:
              goto LABEL_50;
          }
          goto LABEL_132;
        case 0xE:
          if ( v59[0] )
          {
            if ( v59[0] == 1 )
            {
              v43 = 36LL;
            }
            else
            {
              if ( v59[0] != 12 )
                goto LABEL_132;
              v43 = 38LL;
            }
          }
          else
          {
            v43 = 34LL;
          }
          goto LABEL_51;
        case 0x14:
          if ( v59[0] )
          {
            if ( v59[0] != 1 )
              goto LABEL_132;
            if ( v37 == 8 )
            {
              v43 = 20LL;
              goto LABEL_51;
            }
            if ( v37 == 10 )
            {
              v43 = 28LL;
              goto LABEL_51;
            }
          }
          else
          {
            if ( v37 == 8 )
            {
              v43 = 18LL;
              goto LABEL_51;
            }
            if ( v37 == 10 )
            {
              v43 = 26LL;
              goto LABEL_51;
            }
          }
          goto LABEL_132;
        case 0x15:
          if ( v59[0] )
          {
            if ( v59[0] != 1 )
              goto LABEL_132;
            v43 = 32LL;
          }
          else
          {
            v43 = 30LL;
          }
          break;
        default:
          goto LABEL_132;
      }
      goto LABEL_51;
    }
    if ( !v59[0] )
    {
LABEL_50:
      v43 = 0LL;
LABEL_51:
      if ( v41 )
        v43 = (unsigned int)(v43 + 1);
      CommonOrCubeMapRenderingShadersNoRefInternal = 0;
      v44 = *((_OWORD *)&ColorConversion::g_rgShaders + v43);
      v73 = v44;
      v36 = DWORD2(v44);
      goto LABEL_54;
    }
    if ( v59[0] == 1 )
    {
      v43 = 6LL;
      goto LABEL_51;
    }
LABEL_132:
    v44 = v73;
LABEL_54:
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x85u);
      return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
    }
    if ( v36 > 1 )
      v63 = v44;
    v9 = v61;
    if ( !v42 )
      LOBYTE(v66) = 0;
LABEL_14:
    if ( (unsigned int)++v17 >= 2 )
    {
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       v9,
                                                       (const struct CommonRenderingShaderDesc *)&v62,
                                                       0,
                                                       (enum VertexShaderKey::Enum *)v59,
                                                       &v67);
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0xA1u);
      }
      else
      {
        v20 = v59[0];
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(
          v7,
          *((_QWORD *)v9 + v59[0] + 131),
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
          v7,
          v67,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, 0LL, 2LL, v75);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, 2LL, v76);
        *v74 = v20;
      }
      return (unsigned int)CommonOrCubeMapRenderingShadersNoRefInternal;
    }
  }
  v26 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xDFDu);
  v29 = -2147024809;
LABEL_158:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x6Eu);
  return v29;
}
