/*
 * XREFs of ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18003673C
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180035A50 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@AEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035CD0 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035E58 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180035FA4 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180036508 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180036F44 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036F54 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x180037684 (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 *     std::vector_CBrushRenderingGraphBuilder::SubgraphOutput_std::allocator_CBrushRenderingGraphBuilder::SubgraphOutput___::_Resize__lambda_dff6e1f67755268cd94743775101cf3d___ @ 0x1800376E8 (std--vector_CBrushRenderingGraphBuilder--SubgraphOutput_std--allocator_CBrushRenderingGraphBuild.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18007117C (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180036F44 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

CRenderingTechniqueFragment *__fastcall CRenderingTechniqueFragment::`scalar deleting destructor'(
        CRenderingTechniqueFragment *this)
{
  void *v2; // rcx
  char *v3; // rdi
  char *v4; // rsi

  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
    operator delete(v2);
  v3 = (char *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = (char *)*((_QWORD *)this + 5);
    if ( v3 != v4 )
    {
      do
      {
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v3 + 8);
        v3 += 16;
      }
      while ( v3 != v4 );
      v3 = (char *)*((_QWORD *)this + 4);
    }
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 6) - (_QWORD)v3) >> 4, 0x10uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this);
  operator delete(this);
  return this;
}
