/*
 * XREFs of ?IsFlyoutOpen@CPeopleBarFlyoutExperienceManager@@UEAAJPEAE@Z @ 0x18016BD00
 * Callers:
 *     <none>
 * Callees:
 *     ?CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ @ 0x18016B3D0 (-CanShow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CPeopleBarFlyoutExperienceManager::IsFlyoutOpen(CPeopleBarFlyoutExperienceManager *this, bool *a2)
{
  bool v3; // r8

  v3 = *((_DWORD *)this + 38) == 2;
  if ( *((_DWORD *)this + 38) != 2 )
    v3 = !CPeopleBarFlyoutExperienceManager::DebounceDetection::CanShow((CPeopleBarFlyoutExperienceManager *)((char *)this + 656));
  *a2 = v3;
  return 0LL;
}
