/*
 * XREFs of ?GetTrustLevel@CControlCenterExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A4940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 32), a2);
}
