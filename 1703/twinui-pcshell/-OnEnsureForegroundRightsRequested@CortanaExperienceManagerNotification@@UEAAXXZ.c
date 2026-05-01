/*
 * XREFs of ?OnEnsureForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800BE010
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800BA560 (-EnsureForegroundRights@CortanaSharedExperienceManager@@UEAAJXZ.c)
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
