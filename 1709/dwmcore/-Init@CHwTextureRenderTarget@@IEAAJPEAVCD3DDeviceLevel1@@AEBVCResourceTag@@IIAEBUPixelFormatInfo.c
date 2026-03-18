/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18008FE30
 * Callers:
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800795D4 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800BC078 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180080178 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18008CDD4 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18008FDD4 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
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
  unsigned int v10; // edx
  __int128 v11; // xmm0
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int Texture; // eax
  unsigned int v15; // ebx
  DWORD v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-60h]
  unsigned int v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-4Ch]
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+50h] [rbp-30h]
  int v28; // [rsp+54h] [rbp-2Ch]
  int v29; // [rsp+58h] [rbp-28h]
  __int128 v30; // [rsp+60h] [rbp-20h]

  v25 = 0;
  v26 = 0;
  v28 = 0;
  v10 = *((_DWORD *)a2 + 192);
  v11 = *(_OWORD *)a3;
  v21 = 1;
  v22 = 1;
  v23 = *(_DWORD *)a6;
  v24 = 1;
  v12 = *((_DWORD *)a2 + 193);
  v29 = a7 ? 0x80000 : 0;
  v13 = a4;
  if ( a4 > v10 )
    v13 = v10;
  v20 = a5;
  v19 = v13;
  v27 = 40;
  v30 = v11;
  if ( a5 > v12 )
  {
    v20 = v12;
LABEL_11:
    v15 = -2003292287;
    v18 = 360;
    v17 = -2003292287;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, v18);
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 23);
    return v15;
  }
  if ( a4 > v10 || v13 != a4 )
    goto LABEL_11;
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)&v19,
              a2,
              (struct CD3DVidMemOnlyTexture **)this + 28);
  v15 = Texture;
  if ( Texture < 0 )
  {
    v18 = 365;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  Texture = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, a6);
  v15 = Texture;
  if ( Texture < 0 )
  {
    v18 = 370;
    goto LABEL_15;
  }
  Texture = CBaseRenderTarget::Init(this);
  v15 = Texture;
  if ( Texture < 0 )
  {
    v18 = 372;
LABEL_15:
    v17 = Texture;
    goto LABEL_12;
  }
  return v15;
}
