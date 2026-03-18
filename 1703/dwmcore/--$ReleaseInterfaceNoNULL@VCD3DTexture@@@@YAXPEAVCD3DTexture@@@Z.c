/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCD3DTexture@@@@YAXPEAVCD3DTexture@@@Z @ 0x1800151D4
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001528C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x180148420 (-GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z.c)
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x1801A0D70 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x1801B5A18 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180043430 (-Release@CD3DSurface@@UEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<CD3DTexture>(CD3DSurface *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
    if ( (char *)v1 == (char *)CD3DSurface::Release )
      CD3DSurface::Release(a1);
    else
      v1();
  }
}
