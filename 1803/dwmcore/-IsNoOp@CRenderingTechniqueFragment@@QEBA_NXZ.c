/*
 * XREFs of ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180036DC4
 * Callers:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180036DC4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18008DB28 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18008DB8C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180036DC4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::IsNoOp(CRenderingTechniqueFragment *this)
{
  char v2; // bl
  __int64 v3; // rcx
  CRenderingTechniqueFragment *v5; // rcx

  v2 = 0;
  v3 = *(_QWORD *)this;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 4)) )
    {
      v5 = *(CRenderingTechniqueFragment **)(*((_QWORD *)this + 4) + 8LL);
      if ( !v5 || CRenderingTechniqueFragment::IsNoOp(v5) )
        return 1;
    }
  }
  return v2;
}
