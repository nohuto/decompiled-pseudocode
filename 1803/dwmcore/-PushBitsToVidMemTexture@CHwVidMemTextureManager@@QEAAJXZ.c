/*
 * XREFs of ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801F77C0
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801F74B0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800211C8 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180075370 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801EE128 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 */

__int64 __fastcall CHwVidMemTextureManager::PushBitsToVidMemTexture(CHwVidMemTextureManager *this, __int64 a2)
{
  CMILPoolResource **v2; // r14
  struct CD3DSurface *v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int128 v8; // xmm1
  struct CD3DDeviceLevel1 *v9; // rdx
  __int128 v10; // xmm0
  int Texture; // eax
  unsigned int v12; // esi
  int D3DSurfaceLevel; // eax
  struct CD3DSurface *v15; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]
  int v18; // [rsp+68h] [rbp-30h]
  __int128 v19; // [rsp+70h] [rbp-28h]

  v2 = (CMILPoolResource **)((char *)this + 16);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v6 = v4;
  if ( v4 && !*(_BYTE *)(v4 + 69) )
  {
    ReleaseInterface<CD3DVidMemOnlyTexture>(v2);
    v6 = *((_QWORD *)this + 2);
  }
  if ( v6 )
    goto LABEL_7;
  v7 = *((_DWORD *)this + 20);
  v8 = *(_OWORD *)((char *)this + 56);
  v9 = *(struct CD3DDeviceLevel1 **)this;
  v19 = *(_OWORD *)((char *)this + 24);
  v18 = v7;
  v10 = *(_OWORD *)((char *)this + 40);
  v16[1] = v8;
  v16[0] = v10;
  v17 = *((_QWORD *)this + 9);
  Texture = CD3DVidMemOnlyTexture::CreateTexture((const struct DWM_TEXTURE2D_DESC *)v16, v9, v2);
  v12 = Texture;
  if ( Texture >= 0 )
  {
LABEL_7:
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*v2, a2, &v15);
    v12 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSurfaceLevel, 0x137u);
      v3 = v15;
    }
    else
    {
      v3 = v15;
      CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)this, *((struct CD3DSurface **)this + 1), 0LL, v15, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Texture, 0x130u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v3);
  return v12;
}
