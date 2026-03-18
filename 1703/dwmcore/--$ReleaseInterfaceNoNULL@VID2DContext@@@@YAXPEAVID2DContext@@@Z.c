/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001D34 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180001FB4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DPencil@@@Z @ 0x18016FBD4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DPencil@@VCPencil@@VID2DContext@@@@QEAAJPE.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x18019A230 (-CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@.c)
 *     ?CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18019A2D0 (-CreateGenericInk@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 *     ?CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18019A360 (-CreateLegacyCommandList@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPE.c)
 *     ?CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x18019A460 (-CreateMeshFromRects@CSwRenderTargetGetBounds@@UEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 *     ?CreatePencilStroke@CSwRenderTargetGetBounds@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z @ 0x18019A500 (-CreatePencilStroke@CSwRenderTargetGetBounds@@UEAAJPEBUD2D1_PENCIL_POINT@@PEAPEAVCD2DPencil@@@Z.c)
 *     ?CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18019A5A0 (-CreatePrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 *     ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18019A6A0 (-GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18019A7E0 (-IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATR.c)
 * Callees:
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180077780 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<ID2DContext>(CD3DDeviceLevel1 *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CD3DDeviceLevel1::Release )
      CD3DDeviceLevel1::Release(a1);
    else
      v1();
  }
}
