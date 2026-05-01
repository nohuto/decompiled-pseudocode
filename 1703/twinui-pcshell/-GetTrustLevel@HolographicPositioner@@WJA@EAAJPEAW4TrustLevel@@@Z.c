/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WJA@EAAJPEAW4TrustLevel@@@Z @ 0x1800E1620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 144), a2);
}
