/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18004E874
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 176LL))(this) )
    return *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 184LL))(this) + 8) != 0LL;
  return v2;
}
