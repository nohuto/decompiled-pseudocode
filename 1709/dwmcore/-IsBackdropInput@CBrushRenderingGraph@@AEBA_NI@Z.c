/*
 * XREFs of ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006FEC4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180187F30 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rcx
  bool (__fastcall *v4)(__int64, int); // rax
  bool v5; // al

  v2 = 0;
  v3 = *(_QWORD *)(((unsigned __int64)a2 << 6) + *((_QWORD *)this + 2));
  if ( v3 )
  {
    v4 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v3 + 48LL);
    if ( v4 == CSurfaceBrush::IsOfType )
      v5 = CSurfaceBrush::IsOfType(v3, 8);
    else
      v5 = v4(v3, 8);
    if ( v5 )
      return 1;
  }
  return v2;
}
