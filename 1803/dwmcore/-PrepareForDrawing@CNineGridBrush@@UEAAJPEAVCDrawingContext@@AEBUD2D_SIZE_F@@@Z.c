/*
 * XREFs of ?PrepareForDrawing@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180003F10
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::PrepareForDrawing(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 9)
                                                                                              + 288LL))(
         *((_QWORD *)this + 9),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1EDu);
  else
    return 0;
  return v4;
}
