/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800132C4 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsReadyToDraw@CBackdropBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800C7D30 (-IsReadyToDraw@CBackdropBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  CVisual *CurrentVisual; // rax
  bool v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  CBackdropBrush *v11; // rcx
  bool (__fastcall *v13)(CBackdropBrush *__hidden, struct CDrawingContext *, bool *); // rax
  bool IsReadyToDraw; // al
  bool v15; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 13);
  if ( !v4 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
    return 0;
  v7 = 0;
  if ( a2 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
    if ( CVisual::HasSubtreeSurface(CurrentVisual) )
      v7 = 1;
  }
  v8 = *((_DWORD *)this + 34);
  v9 = 0;
  if ( v8 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(CBackdropBrush **)(v10 + *((_QWORD *)this + 14));
      if ( v11 )
      {
        v13 = *(bool (__fastcall **)(CBackdropBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v11 + 224LL);
        if ( v13 == CBackdropBrush::IsReadyToDraw )
          IsReadyToDraw = CBackdropBrush::IsReadyToDraw(v11, a2, &v15);
        else
          IsReadyToDraw = v13(v11, a2, &v15);
        if ( !IsReadyToDraw )
          return 0;
      }
      else if ( !v7 )
      {
        return 0;
      }
      ++v9;
      v10 += 8LL;
    }
    while ( v9 < v8 );
  }
  return 1;
}
