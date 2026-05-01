/*
 * XREFs of ?AddRef@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800A0830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImeNotificationExperienceManager::AddRef(__int64 a1)
{
  return CPeopleBarFlyoutExperienceManager::AddRef(a1 - 8);
}
