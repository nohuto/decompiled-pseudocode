/*
 * XREFs of ?Release@CRenderingTechnique@@UEAAKXZ @ 0x18006DA70
 * Callers:
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x18006C940 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V?$span@$$CBUSamplerMode@@@gsl@@@Z @ 0x18006CEDC (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@AEBUEffectStage@@V-$span@$$CBUSamplerMod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderingTechnique::Release(CRenderingTechnique *this)
{
  CMILRefCountBase *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CMILRefCountBase *)*((_QWORD *)this + 1);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 8LL);
  if ( (char *)v2 == (char *)CMILRefCountBase::Release )
    return CMILRefCountBase::Release(v1);
  else
    return v2();
}
