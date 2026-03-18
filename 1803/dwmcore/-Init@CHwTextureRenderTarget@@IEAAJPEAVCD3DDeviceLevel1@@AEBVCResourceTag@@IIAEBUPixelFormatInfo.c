/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180078678
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B9954 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800C613C (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 * Callees:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800211C8 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18007842C (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1800C0774 (-IsGradientWhitePixelGPUBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800C28BC (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        struct CD3DDeviceLevel1 *a2,
        const struct CResourceTag *a3,
        unsigned int a4,
        unsigned int a5,
        const struct PixelFormatInfo *a6,
        bool a7)
{
  __int128 v8; // xmm0
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v13; // edx
  bool IsGradientWhitePixelGPUBlacklistedGpu; // al
  bool v15; // zf
  int v16; // r8d
  int Texture; // ebx
  unsigned int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-4Ch]
  int v22; // [rsp+38h] [rbp-48h]
  int v23; // [rsp+3Ch] [rbp-44h]
  int v24; // [rsp+40h] [rbp-40h]
  int v25; // [rsp+44h] [rbp-3Ch]
  int v26; // [rsp+48h] [rbp-38h]
  int v27; // [rsp+4Ch] [rbp-34h]
  int v28; // [rsp+50h] [rbp-30h]
  int v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-20h]

  v8 = *(_OWORD *)a3;
  v26 = 0;
  v10 = a4;
  v27 = 0;
  v11 = a5;
  v29 = 0;
  v13 = *(_DWORD *)a6;
  v24 = *(_DWORD *)a6;
  v31 = v8;
  v20 = a4;
  v21 = a5;
  v22 = 1;
  v23 = 1;
  v25 = 1;
  v28 = 40;
  if ( a7 )
  {
    v30 = 0x80000;
  }
  else
  {
    v30 = 0;
    if ( v13 == 87 || v13 == 28 )
    {
      IsGradientWhitePixelGPUBlacklistedGpu = CCommonRegistryData::IsGradientWhitePixelGPUBlacklistedGpu(
                                                *(_DWORD *)(*((_QWORD *)a2 + 89) + 296LL),
                                                *(_DWORD *)(*((_QWORD *)a2 + 89) + 300LL));
      v11 = v21;
      v15 = !IsGradientWhitePixelGPUBlacklistedGpu;
      v10 = v20;
      if ( !v15 )
        v30 |= 0x2802u;
    }
  }
  v16 = 0;
  if ( v10 > *((_DWORD *)a2 + 192) )
  {
    v10 = *((_DWORD *)a2 + 192);
    v20 = v10;
    v16 = 1;
  }
  if ( v11 > *((_DWORD *)a2 + 193) )
  {
    v21 = *((_DWORD *)a2 + 193);
LABEL_19:
    Texture = -2003292287;
    v19 = 374;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, v19);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 25);
    return (unsigned int)Texture;
  }
  if ( v16 == 1 || v10 != a4 || v11 != a5 )
    goto LABEL_19;
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)&v20,
              a2,
              (struct CD3DVidMemOnlyTexture **)this + 31);
  if ( Texture < 0 )
  {
    v19 = 379;
    goto LABEL_20;
  }
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  Texture = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, a6);
  if ( Texture < 0 )
  {
    v19 = 384;
    goto LABEL_20;
  }
  Texture = CBaseRenderTarget::Init(this);
  if ( Texture < 0 )
  {
    v19 = 386;
    goto LABEL_20;
  }
  return (unsigned int)Texture;
}
