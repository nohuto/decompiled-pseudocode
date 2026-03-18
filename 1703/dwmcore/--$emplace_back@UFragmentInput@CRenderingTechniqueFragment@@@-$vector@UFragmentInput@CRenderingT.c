/*
 * XREFs of ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAX$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180020814
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180003B48 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?_Reserve@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@IEAAX_K@Z @ 0x1800207A0 (-_Reserve@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@CRend.c)
 */

void __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  if ( a1[1] == a1[2] )
    std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reserve(a1);
  v4 = (_QWORD *)a1[1];
  if ( v4 )
  {
    *v4 = *a2;
    v5 = a2[1];
    a2[1] = 0LL;
    v4[1] = v5;
  }
  a1[1] += 16LL;
}
