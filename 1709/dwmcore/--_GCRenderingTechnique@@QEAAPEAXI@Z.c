/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18006DF64
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x18006FF14 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x18006BD5C (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18006E51C (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@UEAA@X.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  void **v2; // rcx

  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>((char *)this + 24);
  v2 = (void **)*((_QWORD *)this + 2);
  if ( v2 )
    CRenderingTechniqueFragment::`scalar deleting destructor'(v2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
