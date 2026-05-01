/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180007EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(__int64 a1, volatile int *a2)
{
  return Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)(a1 - 64), a2);
}
