/*
 * XREFs of ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180082D30
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024D00 (-PrepareForDrawing@CMaskBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800256C0 (-PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::PrepareForDrawing(CEffectBrush *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebp
  int v3; // edi
  unsigned int v6; // ebx
  __int64 i; // rsi
  CSurfaceBrush *v9; // rcx
  __int64 (__fastcall *v10)(CSurfaceBrush *, struct CDrawingContext *); // rax
  signed int v11; // eax

  v2 = *((_DWORD *)this + 34);
  v3 = 0;
  if ( v2 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v9 = *(CSurfaceBrush **)(i + *((_QWORD *)this + 14));
      if ( v9 )
      {
        v10 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *))(*(_QWORD *)v9 + 248LL);
        v11 = v10 == CSurfaceBrush::PrepareForDrawing ? CSurfaceBrush::PrepareForDrawing(v9, a2) : v10(v9, a2);
        v6 = v11;
        if ( v11 < 0 )
          break;
      }
      if ( ++v3 >= v2 )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x80u);
  }
  else
  {
    return 0;
  }
  return v6;
}
