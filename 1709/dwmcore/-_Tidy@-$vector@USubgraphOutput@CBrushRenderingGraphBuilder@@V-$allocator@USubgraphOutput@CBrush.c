/*
 * XREFs of ?_Tidy@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@IEAAXXZ @ 0x1800B9118
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006C204 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x1800B6D24 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Tidy(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r15

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    while ( v1 != v3 )
    {
      v4 = v1[1];
      if ( v4 )
      {
        WPF::ProcessHeapImpl::Free(*(void **)(v4 + 112));
        v5 = *(_QWORD *)(v4 + 32);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v4 + 40);
          while ( v5 != v6 )
          {
            std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((void ***)(v5 + 8));
            v5 += 16LL;
          }
          WPF::ProcessHeapImpl::Free(*(void **)(v4 + 32));
          *(_QWORD *)(v4 + 32) = 0LL;
          *(_QWORD *)(v4 + 40) = 0LL;
          *(_QWORD *)(v4 + 48) = 0LL;
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v4);
        WPF::ProcessHeapImpl::Free((void *)v4);
      }
      v1 += 2;
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
