/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180007C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1, volatile int *a2)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 40), a2);
}
