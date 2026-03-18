/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800829C0
 * Callers:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdi
  char v7; // bp
  unsigned int v8; // r15d
  int v9; // edi
  __int64 i; // rsi
  CSurfaceBrush *v12; // rcx
  __int64 (__fastcall *v13)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  char v14; // al
  bool v15; // zf
  bool v16; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v4 = *((_QWORD *)this + 13);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    if ( !a2 )
      goto LABEL_8;
    v6 = 0LL;
    if ( *((_BYTE *)a2 + 6520) )
    {
      if ( *((_BYTE *)a2 + 6521) )
        v6 = *((_QWORD *)a2 + 395);
      else
        v6 = *(_QWORD *)(*((_QWORD *)a2 + 816) + 24LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6)
      && *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 184LL))(v6) + 8) )
    {
      v7 = 1;
    }
    else
    {
LABEL_8:
      v7 = 0;
    }
    v8 = *((_DWORD *)this + 34);
    v9 = 0;
    if ( !v8 )
      return 1;
    for ( i = 0LL; ; i += 8LL )
    {
      v12 = *(CSurfaceBrush **)(i + *((_QWORD *)this + 14));
      if ( v12 )
      {
        v13 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v12 + 240LL);
        v14 = v13 == CSurfaceBrush::IsReadyToDraw ? CSurfaceBrush::IsReadyToDraw(v12, a2, &v16) : v13(v12, a2, &v16);
        v15 = v14 == 0;
      }
      else
      {
        v15 = v7 == 0;
      }
      if ( v15 )
        break;
      if ( ++v9 >= v8 )
        return 1;
    }
  }
  return 0;
}
