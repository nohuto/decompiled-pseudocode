/*
 * XREFs of ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800BDF60
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBF88 (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAllowForegroundRightsRequested(
        CortanaSharedExperienceManager **this)
{
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 40) )
      CortanaSharedExperienceManager::_AllowForegroundRights(this[6]);
  }
}
