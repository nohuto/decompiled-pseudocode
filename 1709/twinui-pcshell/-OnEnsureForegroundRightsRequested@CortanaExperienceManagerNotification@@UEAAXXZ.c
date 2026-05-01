/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800A47A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800A08D0 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnEnsureForegroundRightsRequested(
        CortanaSharedExperienceManager **this)
{
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 40) )
      CortanaSharedExperienceManager::EnsureForegroundRights(this[6]);
  }
}
