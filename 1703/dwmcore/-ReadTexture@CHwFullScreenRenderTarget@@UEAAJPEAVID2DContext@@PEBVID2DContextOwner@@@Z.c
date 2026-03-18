/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801A0F10
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800D64C0 (-ReadTexture@CHwFullScreenRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x18003F1FC (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        CSwapChainBase **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  struct CD3DSurface *v3; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int FrontBuffer; // eax
  int Texture; // eax
  struct CD3DSurface *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( a2
    && (v5 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
               a2,
               a3),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA9u);
  }
  else
  {
    if ( byte_180241C20 )
    {
      FrontBuffer = CSwapChainBase::GetFrontBuffer(this[27], &v10);
      v3 = v10;
      if ( FrontBuffer >= 0 )
        CD3DDeviceLevel1::ReadTexture(this[23], *((struct ID3D11Texture2D **)v10 + 17));
    }
    Texture = CD3DDeviceLevel1::ReadTexture(this[23], *((struct ID3D11Texture2D **)this[21] + 17));
    v6 = Texture;
    if ( Texture < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xB8u);
    if ( v3 )
      CMILPoolResource::Release(v3);
  }
  return v6;
}
