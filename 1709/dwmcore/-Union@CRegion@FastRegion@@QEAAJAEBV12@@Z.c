/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18002B020 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F1A0 (-AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x180088B60 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180089060 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180089218 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?Union@CRegion@@QEAAJAEBV1@@Z @ 0x18011BD9C (-Union@CRegion@@QEAAJAEBV1@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180141714 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180144C4C (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2F94 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1801B8E20 (-AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BEA28 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089AD4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089B2C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  int v7; // esi
  int v9; // [rsp+20h] [rbp-128h] BYREF
  void *lpMem; // [rsp+28h] [rbp-120h]
  _BYTE v11[256]; // [rsp+30h] [rbp-118h] BYREF

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return 0LL;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return FastRegion::CRegion::Copy(this, a2);
  v6 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v5, v4);
  v9 = 0;
  lpMem = v11;
  v7 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v9, v6);
  if ( v7 >= 0 )
  {
    FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *this, *a2);
    v7 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v9);
  }
  if ( v11 != lpMem )
    WPF::ProcessHeapImpl::Free(lpMem);
  return (unsigned int)v7;
}
