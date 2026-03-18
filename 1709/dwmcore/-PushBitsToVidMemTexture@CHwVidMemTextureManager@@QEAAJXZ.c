/*
 * XREFs of ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801BCC98
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801BC990 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180080178 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1801B4444 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 */

__int64 __fastcall CHwVidMemTextureManager::PushBitsToVidMemTexture(CHwVidMemTextureManager *this, __int64 a2)
{
  struct CD3DSurface *v2; // rbx
  struct CD3DVidMemOnlyTexture **v3; // rsi
  __int64 v4; // rax
  int v6; // eax
  __int128 v7; // xmm1
  struct CD3DDeviceLevel1 *v8; // rdx
  __int128 v9; // xmm0
  signed int Texture; // eax
  unsigned int v11; // edi
  signed int D3DSurfaceLevel; // eax
  struct CD3DSurface *v14; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  __int128 v18; // [rsp+70h] [rbp-28h]

  v2 = 0LL;
  v3 = (struct CD3DVidMemOnlyTexture **)((char *)this + 16);
  v4 = *((_QWORD *)this + 2);
  v14 = 0LL;
  if ( v4 && !*(_BYTE *)(v4 + 69) )
    ReleaseInterface<CD3DVidMemOnlyTexture>((CMILPoolResource **)this + 2);
  if ( *v3 )
    goto LABEL_7;
  v6 = *((_DWORD *)this + 20);
  v7 = *(_OWORD *)((char *)this + 56);
  v8 = *(struct CD3DDeviceLevel1 **)this;
  v18 = *(_OWORD *)((char *)this + 24);
  v17 = v6;
  v9 = *(_OWORD *)((char *)this + 40);
  v15[1] = v7;
  v15[0] = v9;
  v16 = *((_QWORD *)this + 9);
  Texture = CD3DVidMemOnlyTexture::CreateTexture((const struct DWM_TEXTURE2D_DESC *)v15, v8, v3);
  v11 = Texture;
  if ( Texture >= 0 )
  {
LABEL_7:
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*v3, a2, &v14);
    v11 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DSurfaceLevel, 0x137u);
      v2 = v14;
    }
    else
    {
      v2 = v14;
      CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)this, *((struct CD3DSurface **)this + 1), 0LL, v14, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Texture, 0x130u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v2);
  return v11;
}
