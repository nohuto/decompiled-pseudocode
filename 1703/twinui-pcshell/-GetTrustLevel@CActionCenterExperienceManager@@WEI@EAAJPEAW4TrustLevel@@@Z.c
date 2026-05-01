/*
 * XREFs of ?GetTrustLevel@CActionCenterExperienceManager@@WEI@EAAJPEAW4TrustLevel@@@Z @ 0x180097790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 72), a2);
}
