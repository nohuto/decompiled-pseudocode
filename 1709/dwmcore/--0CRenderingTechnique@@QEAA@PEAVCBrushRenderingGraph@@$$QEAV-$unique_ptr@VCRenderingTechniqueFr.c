/*
 * XREFs of ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18006DC1C
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006BF4C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@AEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 * Callees:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18006D3A8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::CRenderingTechnique(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CRenderingTechnique::`vftable';
  v4 = *a3;
  *a3 = 0LL;
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)this + 3) = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 4) = this;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 2;
  *(_QWORD *)((char *)this + 60) = 2LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 228) = 0LL;
  *((_BYTE *)this + 236) = 0;
  CRenderingTechnique::CollectStateFromAllFragments(this);
  return this;
}
