/*
 * XREFs of ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0
 * Callers:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x18007842C (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x18015A550 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x1801E48BC (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1801F04A4 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801F0AA4 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1801F4054 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x1801F77C0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 *     ?Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z @ 0x1802165D4 (-Create@CDeviceTextureImageSource@@SAJPEAVCD3DTexture@@VDisplayId@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD3DSurfaceLevel(CD3DTexture *this, __int64 a2, struct CD3DSurface **a3)
{
  struct CD3DSurface **v3; // rdx
  unsigned int v4; // edi
  struct CD3DSurface *v7; // rcx
  unsigned int v8; // r9d
  struct CD3DResourceManager *v9; // rcx
  struct ID3D11Texture2D *v10; // rdx
  int ViewOfTexture; // eax
  struct CD3DSurface **v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+34h] [rbp-14h]

  v3 = (struct CD3DSurface **)*((_QWORD *)this + 24);
  v4 = 0;
  if ( v3
    || (v3 = (struct CD3DSurface **)WPF::ProcessHeapImpl::AllocClear(8LL * *((unsigned int *)this + 46)),
        (*((_QWORD *)this + 24) = v3) != 0LL) )
  {
    v7 = *v3;
    if ( !*v3 )
    {
      v8 = *((_DWORD *)this + 43);
      v9 = (struct CD3DResourceManager *)*((_QWORD *)this + 2);
      v14 = *((_DWORD *)this + 36);
      v13 = v3;
      v10 = (struct ID3D11Texture2D *)*((_QWORD *)this + 15);
      v15 = 0LL;
      ViewOfTexture = CD3DSurface::CreateViewOfTexture(v9, v10, 0LL, v8, v13);
      v4 = ViewOfTexture;
      if ( ViewOfTexture < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ViewOfTexture, 0x122u);
        goto LABEL_7;
      }
      v15 = *((_QWORD *)this + 22);
      CD3DSurface::UpdatePixelFormatInfo(**((CD3DSurface ***)this + 24), (const struct PixelFormatInfo *)&v14);
      v7 = (struct CD3DSurface *)**((_QWORD **)this + 24);
    }
    *a3 = v7;
    (**(void (__fastcall ***)(struct CD3DSurface *))v7)(v7);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x114u);
  }
LABEL_7:
  ReleaseInterfaceNoNULL<CD3DSurface>(0LL);
  return v4;
}
