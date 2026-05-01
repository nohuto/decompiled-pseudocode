/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WII@EAAJPEAW4TrustLevel@@@Z @ 0x1800E1CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 136), a2);
}
