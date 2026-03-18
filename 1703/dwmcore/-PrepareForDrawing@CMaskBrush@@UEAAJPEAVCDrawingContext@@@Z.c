/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180039830
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180038B00 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008CAD0 (-PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(CMaskBrush *this, struct CDrawingContext *a2)
{
  CSpriteVisualContent *v4; // rcx
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // ebx
  CSurfaceBrush *v8; // rcx
  __int64 (__fastcall *v9)(CSurfaceBrush *, struct CDrawingContext *); // rax
  int v10; // eax

  v4 = (CSpriteVisualContent *)*((_QWORD *)this + 11);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 232LL);
  if ( (char *)v5 == (char *)CSpriteVisualContent::PrepareForDrawing )
  {
    v6 = CSpriteVisualContent::PrepareForDrawing(v4, a2);
  }
  else if ( (char *)v5 == (char *)CSurfaceBrush::PrepareForDrawing )
  {
    v6 = CSurfaceBrush::PrepareForDrawing(v4, a2);
  }
  else
  {
    v6 = v5();
  }
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x96u);
  }
  else
  {
    v8 = (CSurfaceBrush *)*((_QWORD *)this + 10);
    if ( v8
      && ((v9 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *))(*(_QWORD *)v8 + 232LL),
           v9 != CSurfaceBrush::PrepareForDrawing)
        ? (v10 = v9(v8, a2))
        : (v10 = CSurfaceBrush::PrepareForDrawing(v8, a2)),
          v7 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9Au);
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
