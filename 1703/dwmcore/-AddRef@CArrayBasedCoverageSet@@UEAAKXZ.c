/*
 * XREFs of ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x18004B200
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV?$ArrayRef@$$CBUSamplerMode@@@@@Z @ 0x180015D50 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV-$ArrayRef@$$CBUSam.c)
 *     ?InternalAddRef@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ @ 0x18004D330 (-InternalAddRef@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?AddRef@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800D5940 (-AddRef@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800D5960 (-AddRef@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WHA@EAAKXZ @ 0x1800D5970 (-AddRef@CRenderTargetImageSource@@WHA@EAAKXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@WHI@EAAKXZ @ 0x1800D5980 (-AddRef@CRenderTargetImageSource@@WHI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArrayBasedCoverageSet::AddRef(CArrayBasedCoverageSet *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CArrayBasedCoverageSet *)((char *)this + 8));
}
