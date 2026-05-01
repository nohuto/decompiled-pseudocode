/*
 * XREFs of ?GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180008450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return Windows::System::CAppMemoryReport::GetTrustLevel((Windows::System::CAppMemoryReport *)(a1 - 56), a2);
}
