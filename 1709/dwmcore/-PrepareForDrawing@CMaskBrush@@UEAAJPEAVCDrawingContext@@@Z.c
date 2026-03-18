/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024D00
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800226F0 (-PrepareForDrawing@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800256C0 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180082D30 (-PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(CMaskBrush *this, struct CDrawingContext *a2)
{
  CSpriteVisualContent *v4; // rcx
  int (*v5)(CEffectBrush *__hidden, struct CDrawingContext *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  CSurfaceBrush *v8; // rcx
  int (*v9)(CSurfaceBrush *__hidden, struct CDrawingContext *); // rax
  int v10; // eax

  v4 = (CSpriteVisualContent *)*((_QWORD *)this + 11);
  v5 = *(int (**)(CEffectBrush *__hidden, struct CDrawingContext *))(*(_QWORD *)v4 + 248LL);
  if ( (char *)v5 == (char *)CSpriteVisualContent::PrepareForDrawing )
  {
    v6 = CSpriteVisualContent::PrepareForDrawing(v4, a2);
  }
  else if ( v5 == CEffectBrush::PrepareForDrawing )
  {
    v6 = CEffectBrush::PrepareForDrawing(v4, a2);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext *))v5)(v4, a2);
  }
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x96u);
  }
  else
  {
    v8 = (CSurfaceBrush *)*((_QWORD *)this + 10);
    if ( v8
      && ((v9 = *(int (**)(CSurfaceBrush *__hidden, struct CDrawingContext *))(*(_QWORD *)v8 + 248LL),
           v9 != CSurfaceBrush::PrepareForDrawing)
        ? (v10 = ((__int64 (__fastcall *)(CSurfaceBrush *, struct CDrawingContext *))v9)(v8, a2))
        : (v10 = CSurfaceBrush::PrepareForDrawing(v8, a2)),
          v7 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Au);
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
