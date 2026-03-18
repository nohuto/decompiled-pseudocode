/*
 * XREFs of ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180036F44
 * Callers:
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180035BE0 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x180036F84 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 * Callees:
 *     <none>
 */

CRenderingTechniqueFragment *__fastcall std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(
        CRenderingTechniqueFragment **a1)
{
  CRenderingTechniqueFragment *v1; // rcx
  CRenderingTechniqueFragment *result; // rax

  v1 = *a1;
  if ( v1 )
    return CRenderingTechniqueFragment::`scalar deleting destructor'(v1);
  return result;
}
