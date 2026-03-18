/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C104 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18009B300 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??_GCComposeTop@@QEAAPEAXI@Z @ 0x180146874 (--_GCComposeTop@@QEAAPEAXI@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x18015EA34 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ReleaseInterfaceNoNULL<IImageSource>(CRenderTargetImageSource *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CRenderTargetImageSource::Release )
      CRenderTargetImageSource::Release(a1);
    else
      v1();
  }
}
