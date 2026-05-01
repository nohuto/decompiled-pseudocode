/*
 * XREFs of ?AddRef@CWelcomeScreenExperienceManager@@WBA@EAAKXZ @ 0x180070F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWelcomeScreenExperienceManager::AddRef(__int64 a1)
{
  return CPeopleTestExperienceManager::AddRef(a1 - 16);
}
