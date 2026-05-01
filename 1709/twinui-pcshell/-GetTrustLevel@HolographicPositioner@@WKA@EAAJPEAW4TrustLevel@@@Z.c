/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x180106900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 160), a2);
}
