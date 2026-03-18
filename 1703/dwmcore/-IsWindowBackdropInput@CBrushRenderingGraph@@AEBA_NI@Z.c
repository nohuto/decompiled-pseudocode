/*
 * XREFs of ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18001A130
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18001927C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsWindowBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(((unsigned __int64)a2 << 6) + *((_QWORD *)this + 2));
  if ( v3 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 89LL) != 0;
  return v2;
}
