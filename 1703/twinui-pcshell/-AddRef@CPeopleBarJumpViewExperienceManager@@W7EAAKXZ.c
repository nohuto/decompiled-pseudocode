/*
 * XREFs of ?AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1800A6040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPeopleBarJumpViewExperienceManager::AddRef(__int64 a1)
{
  return CVirtualTouchpadExperienceManager::AddRef((CVirtualTouchpadExperienceManager *)(a1 - 8));
}
