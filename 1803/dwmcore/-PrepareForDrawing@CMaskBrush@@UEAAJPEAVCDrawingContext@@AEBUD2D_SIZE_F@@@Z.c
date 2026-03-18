/*
 * XREFs of ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180098DA0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180099930 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::PrepareForDrawing(
        CMaskBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CSurfaceBrush *v8; // rcx
  int (*v9)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *); // rax
  int v10; // eax

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 288LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x15Cu);
  }
  else
  {
    v8 = (CSurfaceBrush *)*((_QWORD *)this + 9);
    if ( v8
      && ((v9 = *(int (**)(CSurfaceBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v8 + 288LL),
           v9 != CSurfaceBrush::PrepareForDrawing)
        ? (v10 = ((__int64 (__fastcall *)(CSurfaceBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *))v9)(
                   v8,
                   a2,
                   a3))
        : (v10 = CSurfaceBrush::PrepareForDrawing(v8, a2, a3)),
          v7 = v10,
          v10 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x160u);
    }
    else
    {
      return 0;
    }
  }
  return v7;
}
