/*
 * XREFs of ?PrepareForDrawing@CEffectBrush@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010E20
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::PrepareForDrawing(CEffectBrush *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebp
  int v3; // edi
  __int64 i; // rsi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v10; // eax

  v2 = *((_DWORD *)this + 34);
  v3 = 0;
  if ( v2 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v7 = *(_QWORD *)(i + *((_QWORD *)this + 14));
      if ( v7 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)v7 + 232LL))(v7, a2);
        v8 = v10;
        if ( v10 < 0 )
          break;
      }
      if ( ++v3 >= v2 )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x80u);
  }
  else
  {
    return 0;
  }
  return v8;
}
