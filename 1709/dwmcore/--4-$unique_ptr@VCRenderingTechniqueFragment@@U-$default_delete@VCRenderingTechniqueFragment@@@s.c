/*
 * XREFs of ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B6D34
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?erase@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@@2@0@Z @ 0x18018C9E8 (-erase@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutput@CBrush.c)
 * Callees:
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18006BD5C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 */

void ***__fastcall std::unique_ptr<CRenderingTechniqueFragment>::operator=(void ***a1, void ***a2)
{
  void **v3; // rdi
  void **v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
        CRenderingTechniqueFragment::`scalar deleting destructor'(v4);
      *a1 = v3;
    }
  }
  return a1;
}
