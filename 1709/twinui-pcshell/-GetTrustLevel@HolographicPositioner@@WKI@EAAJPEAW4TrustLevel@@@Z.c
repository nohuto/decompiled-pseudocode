/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WKI@EAAJPEAW4TrustLevel@@@Z @ 0x180106BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 168), a2);
}
