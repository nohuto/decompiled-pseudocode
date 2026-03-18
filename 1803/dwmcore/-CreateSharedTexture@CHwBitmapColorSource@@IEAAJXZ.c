/*
 * XREFs of ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801EF224
 * Callers:
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x1801F450C (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x1801EDDB0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CHwBitmapColorSource::CreateSharedTexture(CHwBitmapColorSource *this)
{
  __int128 v1; // xmm1
  struct CD3DDeviceLevel1 *v2; // rdx
  int v3; // eax
  int SharedTexture; // eax
  unsigned int v5; // ebx
  void *v7[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  __int128 v11; // [rsp+70h] [rbp-28h]

  v1 = *((_OWORD *)this + 15);
  v2 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 2);
  v7[0] = "DWM Redirection Surface";
  v3 = *((_DWORD *)this + 66);
  LODWORD(v7[1]) = 23;
  v10 = v3;
  v8[1] = v1;
  v11 = *(_OWORD *)v7;
  v8[0] = *((_OWORD *)this + 14);
  v9 = *((_QWORD *)this + 32);
  SharedTexture = CD3DVidMemOnlyTexture::CreateSharedTexture(
                    (const struct DWM_TEXTURE2D_DESC *)v8,
                    v2,
                    (struct D3D11_SUBRESOURCE_DATA *)v7,
                    (struct CD3DVidMemOnlyTexture **)this + 21);
  v5 = SharedTexture;
  if ( SharedTexture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SharedTexture, 0xAC4u);
  return v5;
}
