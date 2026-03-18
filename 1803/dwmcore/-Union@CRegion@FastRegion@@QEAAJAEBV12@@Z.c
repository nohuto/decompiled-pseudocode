/*
 * XREFs of ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104
 * Callers:
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180002D94 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z @ 0x18001BB00 (-AddInvalidRegion@CSecondaryBitmap@@UEAAJAEBVCRegion@@@Z.c)
 *     ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C5A0 (-AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x180098250 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180165374 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1801679B8 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EBA78 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1801F2610 (-AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FB588 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18021C06C (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18007F3BC (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall FastRegion::CRegion::Union(int **this, int **a2)
{
  int *v2; // rsi
  int *v5; // rdi
  int v6; // eax
  SIZE_T v7; // r8
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v9; // ebx
  FastRegion::Internal::CRgnData *v11; // rax
  int v12; // [rsp+20h] [rbp-138h] BYREF
  void *lpMem; // [rsp+28h] [rbp-130h]
  _BYTE v14[256]; // [rsp+30h] [rbp-128h] BYREF

  v2 = *a2;
  if ( !**a2 )
    return 0LL;
  v5 = *this;
  if ( !**this )
    return FastRegion::CRegion::Copy(this, a2);
  v6 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
         (const struct FastRegion::Internal::CRgnData *)*this,
         (const struct FastRegion::Internal::CRgnData *)*a2);
  v7 = v6;
  v8 = (FastRegion::Internal::CRgnData *)v14;
  lpMem = v14;
  v12 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    if ( !v6 )
      v7 = 1LL;
    v11 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v7);
    v8 = v11;
    if ( !v11 )
    {
      v9 = -2147024882;
      goto LABEL_5;
    }
    v2 = *a2;
    v5 = *this;
    lpMem = v11;
  }
  FastRegion::Internal::CRgnData::Union(
    v8,
    (const struct FastRegion::Internal::CRgnData *)v5,
    (const struct FastRegion::Internal::CRgnData *)v2);
  v9 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)this, (struct FastRegion::Internal::CWorkBuffer *)&v12);
LABEL_5:
  if ( v14 != lpMem )
    operator delete(lpMem);
  return v9;
}
