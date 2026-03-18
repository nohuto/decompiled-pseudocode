/*
 * XREFs of ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180019218
 * Callers:
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180019218 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180015BD0 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180019218 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 */

char __fastcall CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        unsigned int a3)
{
  bool DoesIntermediateContributeToSubgraph; // bl
  CBrushRenderingGraph *v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int *v8; // rdi
  __int64 v9; // rax
  unsigned int v12; // [rsp+48h] [rbp+10h]
  unsigned int v13; // [rsp+50h] [rbp+18h]

  DoesIntermediateContributeToSubgraph = 0;
  v5 = this;
  if ( a3 < a2 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * a2);
    v13 = *(_DWORD *)(v7 + 108);
    if ( v13 )
    {
      v8 = (unsigned int *)(v7 + 116);
      do
      {
        v9 = *v8;
        v12 = *v8;
        if ( *((_BYTE *)v8 + 4) )
        {
          if ( (_DWORD)v9 == a3 )
            return 1;
          if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)v5 + 38)
                                                                                               + 8 * v9)
                                                                                   + 16LL)) )
            DoesIntermediateContributeToSubgraph = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
                                                     this,
                                                     v12,
                                                     a3);
          if ( DoesIntermediateContributeToSubgraph )
            return DoesIntermediateContributeToSubgraph;
          v5 = this;
        }
        ++v6;
        v8 += 8;
      }
      while ( v6 < v13 );
    }
  }
  return DoesIntermediateContributeToSubgraph;
}
