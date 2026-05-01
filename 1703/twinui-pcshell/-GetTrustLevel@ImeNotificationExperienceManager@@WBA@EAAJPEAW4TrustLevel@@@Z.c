/*
 * XREFs of ?GetTrustLevel@ImeNotificationExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800A0800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImeNotificationExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 16), a2);
}
