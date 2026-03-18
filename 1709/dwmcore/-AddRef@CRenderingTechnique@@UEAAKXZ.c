/*
 * XREFs of ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x18006D040
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderingTechnique::AddRef(CRenderingTechnique *this)
{
  return (***((__int64 (__fastcall ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
}
