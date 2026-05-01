/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 8));
}
