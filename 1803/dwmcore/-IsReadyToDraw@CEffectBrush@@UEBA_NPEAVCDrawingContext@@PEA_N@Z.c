/*
 * XREFs of ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0
 * Callers:
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x18009D980 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::IsReadyToDraw(CEffectBrush *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 v4; // rcx
  bool v6; // dl
  unsigned int v7; // r8d
  __int64 v8; // rcx
  char v10; // cl
  CLayerVisual *v12; // rbx
  bool (__fastcall *v13)(CLayerVisual *); // rax
  bool v14; // al

  *a3 = 0;
  v4 = *((_QWORD *)this + 12);
  if ( v4 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4) )
  {
    v6 = 0;
    if ( a2 && *((_BYTE *)a2 + 6520) )
    {
      v10 = *((_BYTE *)a2 + 6521);
      if ( v10 ? *((_QWORD *)a2 + 395) : *(_QWORD *)(*((_QWORD *)a2 + 816) + 24LL) )
      {
        v12 = v10 ? (CLayerVisual *)*((_QWORD *)a2 + 395) : *(CLayerVisual **)(*((_QWORD *)a2 + 816) + 24LL);
        v13 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)v12 + 176LL);
        v14 = v13 == CLayerVisual::HasNonDefaultTreeEffectInternal
            ? CLayerVisual::HasNonDefaultTreeEffectInternal(v12)
            : v13(v12);
        if ( v14 && *(_QWORD *)((*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)v12 + 184LL))(v12) + 8) )
          v6 = 1;
      }
    }
    v7 = *((_DWORD *)this + 32);
    v8 = 0LL;
    if ( !v7 )
      return 1;
    while ( *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v8) || v6 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        return 1;
    }
  }
  return 0;
}
