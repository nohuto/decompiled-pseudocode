/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18004CAE8
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 (*v2)(void); // rax
  char HasNonDefaultTreeEffectInternal; // al
  char v4; // bl

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 176LL);
  if ( (char *)v2 == (char *)CLayerVisual::HasNonDefaultTreeEffectInternal )
    HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal(this);
  else
    HasNonDefaultTreeEffectInternal = v2();
  v4 = 0;
  if ( HasNonDefaultTreeEffectInternal )
    return *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 184LL))(this) + 8) != 0LL;
  return v4;
}
