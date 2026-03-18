/*
 * XREFs of ?AddRef@CRenderDataBuilder@@UEAAKXZ @ 0x1800C1C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderDataBuilder::AddRef(CRenderDataBuilder *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 3);
}
