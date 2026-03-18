/*
 * XREFs of ?_Reserve@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAX_K@Z @ 0x1800B9234
 * Callers:
 *     ?resize@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAX_K@Z @ 0x1800B92A8 (-resize@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrus.c)
 * Callees:
 *     ?_Reallocate@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAX_K@Z @ 0x1800B9188 (-_Reallocate@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Reserve(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1[1];
  if ( (a1[2] - v3) >> 4 < a2 )
  {
    v4 = (v3 - *a1) >> 4;
    if ( 0xFFFFFFFFFFFFFFFLL - v4 < a2 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = v4 + a2;
    v6 = (__int64)(a1[2] - *a1) >> 4;
    v7 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Reallocate((__int64)a1, v5);
  }
}
