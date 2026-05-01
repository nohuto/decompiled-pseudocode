/*
 * XREFs of ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800BA930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 56), a2);
}
