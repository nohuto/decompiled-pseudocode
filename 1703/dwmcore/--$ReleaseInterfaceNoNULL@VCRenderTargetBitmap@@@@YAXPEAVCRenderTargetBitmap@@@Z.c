/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0
 * Callers:
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 *     ?GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180165590 (-GetBitmapShaderResourceViewNoRef@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11Sh.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180047190 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<CRenderTargetBitmap>(CDxHandleYUVBitmapRealization *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CDxHandleYUVBitmapRealization::Release )
      CDxHandleYUVBitmapRealization::Release(a1);
    else
      v1();
  }
}
