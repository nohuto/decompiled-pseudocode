/*
 * XREFs of ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800AAD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 16), a2);
}
