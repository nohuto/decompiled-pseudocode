/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180008110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 16));
}
