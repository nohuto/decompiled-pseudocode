/*
 * XREFs of ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x1800157C0
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z @ 0x180004054 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180016EA8 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??4?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180022D18 (--4-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180022D08 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void **__fastcall CRenderingTechniqueFragment::`scalar deleting destructor'(void **this)
{
  char *v2; // rdi
  char *v3; // rsi

  WPF::ProcessHeapImpl::Free(this[14]);
  v2 = (char *)this[4];
  if ( v2 )
  {
    v3 = (char *)this[5];
    while ( v2 != v3 )
    {
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v2 + 8);
      v2 += 16;
    }
    WPF::ProcessHeapImpl::Free(this[4]);
    this[4] = 0LL;
    this[5] = 0LL;
    this[6] = 0LL;
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
