/*
 * XREFs of ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x1800176A0
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV?$ArrayRef@$$CBUSamplerMode@@@@@Z @ 0x180015D50 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@AEBV-$ArrayRef@$$CBUSam.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderingTechnique::AddRef(CRenderingTechnique *this)
{
  return (***((__int64 (__fastcall ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
}
