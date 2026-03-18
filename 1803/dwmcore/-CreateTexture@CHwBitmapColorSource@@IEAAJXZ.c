/*
 * XREFs of ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801EF2E4
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801F0700 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800211C8 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHwBitmapColorSource::CreateTexture(CHwBitmapColorSource *this)
{
  __int128 v1; // xmm1
  struct CD3DDeviceLevel1 *v2; // rdx
  int Texture; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-68h]
  _OWORD v7[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  __int128 v10; // [rsp+70h] [rbp-28h]

  v1 = *((_OWORD *)this + 15);
  v2 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 2);
  *(_QWORD *)&v6 = "DWM Cached Bitmap";
  DWORD2(v6) = 17;
  v9 = *((_DWORD *)this + 66);
  v7[1] = v1;
  v10 = v6;
  v7[0] = *((_OWORD *)this + 14);
  v8 = *((_QWORD *)this + 32);
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)v7,
              v2,
              (struct CD3DVidMemOnlyTexture **)this + 21);
  v4 = Texture;
  if ( Texture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, 0xA99u);
  return v4;
}
