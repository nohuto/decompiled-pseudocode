/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)(a1 - 8), a2, a3);
}
