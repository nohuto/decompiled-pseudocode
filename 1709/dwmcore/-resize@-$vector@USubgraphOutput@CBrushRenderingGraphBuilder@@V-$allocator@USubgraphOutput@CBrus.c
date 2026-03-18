/*
 * XREFs of ?resize@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAAX_K@Z @ 0x1800B92A8
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?_Reserve@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAX_K@Z @ 0x1800B9234 (-_Reserve@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBr.c)
 *     ?erase@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@0@Z @ 0x18018C9E8 (-erase@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 */

unsigned __int64 __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::resize(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)(a1[1] - *a1) >> 4;
  if ( a2 < result )
    return std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::erase(a1, &v8, *a1 + 16 * a2);
  if ( result < a2 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Reserve(a1, a2 - result);
    v5 = a1[1];
    v6 = (v5 - *a1) >> 4;
    v7 = a2 - v6;
    if ( a2 != v6 )
    {
      do
      {
        if ( v5 )
        {
          *(_DWORD *)v5 = -1;
          *(_QWORD *)(v5 + 8) = 0LL;
        }
        v5 += 16LL;
        --v7;
      }
      while ( v7 );
    }
    result = (__int64)(a1[1] - *a1) >> 4;
    a1[1] += 16 * (a2 - result);
  }
  return result;
}
