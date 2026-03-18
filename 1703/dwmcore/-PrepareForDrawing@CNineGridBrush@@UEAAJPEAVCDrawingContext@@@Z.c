/*
 * XREFs of ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800BF9F0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008CAD0 (-PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::PrepareForDrawing(CNineGridBrush *this, struct CDrawingContext *a2)
{
  CSpriteVisualContent *v2; // rcx
  __int64 (__fastcall *v3)(CSpriteVisualContent *, struct CDrawingContext *); // rax
  int v4; // eax
  unsigned int v5; // ebx

  v2 = (CSpriteVisualContent *)*((_QWORD *)this + 10);
  v3 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct CDrawingContext *))(*(_QWORD *)v2 + 232LL);
  if ( v3 == CSpriteVisualContent::PrepareForDrawing )
    v4 = CSpriteVisualContent::PrepareForDrawing(v2, a2);
  else
    v4 = v3(v2, a2);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1F4u);
  else
    return 0;
  return v5;
}
