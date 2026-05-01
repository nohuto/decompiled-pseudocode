/*
 * XREFs of ?AddRef@CRunnableTask@@UEAAKXZ @ 0x180096930
 * Callers:
 *     ?AddRef@CRunnableTask@@W7EAAKXZ @ 0x1800ADC20 (-AddRef@CRunnableTask@@W7EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBA@EAAKXZ @ 0x1800ADC30 (-AddRef@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WBI@EAAKXZ @ 0x1800ADC40 (-AddRef@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?AddRef@CRunnableTask@@WCA@EAAKXZ @ 0x1800ADC50 (-AddRef@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::AddRef(CRunnableTask *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
