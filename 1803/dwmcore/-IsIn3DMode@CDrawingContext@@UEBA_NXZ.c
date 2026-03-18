/*
 * XREFs of ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180066600
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800B5B2C (-CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18015FFB0 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801600C0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x1801601F4 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1801C1D70 (-ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsIn3DMode(CDrawingContext *this)
{
  int v1; // edx
  bool result; // al

  v1 = *((_DWORD *)this + 126);
  result = 0;
  if ( v1 )
    return *(_BYTE *)((unsigned int)(v1 - 1) + *((_QWORD *)this + 65));
  return result;
}
