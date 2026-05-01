/*
 * XREFs of ?AddRef@?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@UEAAKXZ @ 0x180017350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefCountedObject<CAutoHandle<void *>>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
