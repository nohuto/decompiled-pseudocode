/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180007C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1, volatile int *a2)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 56), a2);
}
