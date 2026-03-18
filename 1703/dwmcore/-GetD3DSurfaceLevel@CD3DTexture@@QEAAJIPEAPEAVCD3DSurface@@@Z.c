/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180045DB0
 * Callers:
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800442F0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180049500 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x180148420 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18019F674 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801A33A0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800734E4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800C54B8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // edi
  void *v6; // rax
  struct CD3DSurface **v7; // rcx
  unsigned int v8; // r9d
  struct ID3D11Texture2D *v9; // rdx
  struct CD3DResourceManager *v10; // rcx
  int ViewOfTexture; // eax
  struct CD3DSurface *v12; // rcx
  struct CD3DSurface **v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+34h] [rbp-14h]

  v5 = 0;
  CD3DResourceManager::Use((CD3DResourceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 928LL), this);
  if ( *((_QWORD *)this + 25)
    || (v6 = WPF::ProcessHeapImpl::AllocClear(8LL * *((unsigned int *)this + 48)), (*((_QWORD *)this + 25) = v6) != 0LL) )
  {
    v7 = (struct CD3DSurface **)*((_QWORD *)this + 25);
    if ( !*v7 )
    {
      v8 = *((_DWORD *)this + 45);
      v9 = (struct ID3D11Texture2D *)*((_QWORD *)this + 16);
      v15 = *((_DWORD *)this + 38);
      v14 = v7;
      v10 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v16 = 0LL;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v10, v9, 0LL, v8, v14);
      v5 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x127u);
        return v5;
      }
      v16 = *((_QWORD *)this + 23);
      CD3DSurface::UpdatePixelFormatInfo(**((CD3DSurface ***)this + 25), (const struct PixelFormatInfo *)&v15);
    }
    v12 = (struct CD3DSurface *)**((_QWORD **)this + 25);
    *a3 = v12;
    (**(void (__fastcall ***)(struct CD3DSurface *))v12)(v12);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x119u);
  }
  return v5;
}
