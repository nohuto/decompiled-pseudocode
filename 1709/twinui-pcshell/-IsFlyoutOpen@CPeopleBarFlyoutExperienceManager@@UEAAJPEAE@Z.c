/*
 * XREFs of ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x1800ADDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::IsFlyoutOpen(CPeopleBarFlyoutExperienceManager *this, bool *a2)
{
  *a2 = *((_DWORD *)this + 38) == 2 || GetTickCount64() - *((_QWORD *)this + 82) <= 0x64;
  return 0LL;
}
