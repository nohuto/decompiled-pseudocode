/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x1800082F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)(a1 - 8), a2, a3, a4);
}
