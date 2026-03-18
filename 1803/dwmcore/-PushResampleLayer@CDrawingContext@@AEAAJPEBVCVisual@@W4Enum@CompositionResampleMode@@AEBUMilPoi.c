/*
 * XREFs of ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801624A4
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18015E5B0 (--_GCResampleLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180176E60 (-Create@CResampleLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 */

__int64 __fastcall CDrawingContext::PushResampleLayer(
        CDrawingContext *a1,
        const struct CVisual *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx
  unsigned int v7; // eax

  v6 = CResampleLayer::Create(*((_QWORD *)a1 + 45), a4);
  if ( v6 < 0 )
  {
    v7 = 5821;
    goto LABEL_5;
  }
  v6 = CDrawingContext::PushLayer(a1, a2, 0LL, 1, 1);
  if ( v6 < 0 )
  {
    v7 = 5827;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v7);
  }
  return (unsigned int)v6;
}
