/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004955C
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180020D64 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800C68D4 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 * Callees:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180049500 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004D014 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D084 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        const struct CResourceTag *a3,
        unsigned int a4,
        unsigned int a5,
        const struct PixelFormatInfo *a6,
        bool a7)
{
  unsigned int v9; // ecx
  int v11; // edx
  unsigned int v12; // eax
  int Texture; // eax
  unsigned int v14; // ebx
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-60h]
  unsigned int v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-4Ch]
  int v20; // [rsp+38h] [rbp-48h]
  int v21; // [rsp+3Ch] [rbp-44h]
  int v22; // [rsp+40h] [rbp-40h]
  int v23; // [rsp+44h] [rbp-3Ch]
  int v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+4Ch] [rbp-34h]
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h]

  v24 = 0;
  v25 = 0;
  v27 = 0;
  v9 = a4;
  v29 = *(_OWORD *)a3;
  v18 = a4;
  v22 = *(_DWORD *)a6;
  v19 = a5;
  v28 = a7 ? 0x80000 : 0;
  v11 = 0;
  v12 = *((_DWORD *)a2 + 188);
  v20 = 1;
  v21 = 1;
  v23 = 1;
  v26 = 40;
  if ( a4 > v12 )
  {
    v9 = v12;
    v18 = v12;
    v11 = 1;
  }
  if ( a5 > *((_DWORD *)a2 + 189) )
  {
    v19 = *((_DWORD *)a2 + 189);
LABEL_11:
    v14 = -2003292287;
    v17 = 397;
    v16 = -2003292287;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    ReleaseInterface<CD3DVidMemOnlyTexture>(this + 21);
    return v14;
  }
  if ( v11 == 1 || v9 != a4 )
    goto LABEL_11;
  Texture = CD3DVidMemOnlyTexture::CreateTexture((const struct DWM_TEXTURE2D_DESC *)&v18, 0, a2, this + 26);
  v14 = Texture;
  if ( Texture < 0 )
  {
    v17 = 403;
    goto LABEL_15;
  }
  *((_DWORD *)this + 2) = a4;
  *((_DWORD *)this + 3) = a5;
  Texture = CHwTextureRenderTarget::InitTargetSurface(this, a6);
  v14 = Texture;
  if ( Texture < 0 )
  {
    v17 = 408;
    goto LABEL_15;
  }
  Texture = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
  v14 = Texture;
  if ( Texture < 0 )
  {
    v17 = 410;
LABEL_15:
    v16 = Texture;
    goto LABEL_12;
  }
  return v14;
}
