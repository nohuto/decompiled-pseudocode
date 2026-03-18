/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C5718
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800A9204 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ??_GCComposeTop@@QEAAPEAXI@Z @ 0x180156F04 (--_GCComposeTop@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x180089ED0 (-Release@CRenderTargetImageSource@@UEAAKXZ.c)
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
