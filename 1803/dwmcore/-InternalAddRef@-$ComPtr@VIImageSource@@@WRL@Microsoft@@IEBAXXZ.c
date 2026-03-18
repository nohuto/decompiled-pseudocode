/*
 * XREFs of ?InternalAddRef@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180089E50
 * Callers:
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006994 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBV.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180070640 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x180089E84 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18008F6E8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$?4VCRenderTargetImageSource@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCRenderTargetImageSource@@@12@@Z @ 0x18018895C (--$-4VCRenderTargetImageSource@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPt.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::ComPtr<IImageSource>::InternalAddRef(CRenderTargetImageSource **a1)
{
  CRenderTargetImageSource *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v2 == (char *)CRenderTargetImageSource::AddRef )
      CRenderTargetImageSource::AddRef(v1);
    else
      v2();
  }
}
