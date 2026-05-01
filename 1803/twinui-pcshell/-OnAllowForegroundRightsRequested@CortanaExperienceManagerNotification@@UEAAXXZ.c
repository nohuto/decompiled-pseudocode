/*
 * XREFs of ?OnAllowForegroundRightsRequested@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x18015D100
 * Callers:
 *     <none>
 * Callees:
 *     ?_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ @ 0x18008542C (-_CanNotify@CortanaExperienceManagerNotification@@AEAA_NXZ.c)
 *     ?_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E00C (-_AllowForegroundRights@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnAllowForegroundRightsRequested(
        CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rdx

  if ( CortanaExperienceManagerNotification::_CanNotify((CortanaExperienceManagerNotification *)((char *)this - 8)) )
    CortanaSharedExperienceManager::_AllowForegroundRights(*(CortanaSharedExperienceManager **)(v1 + 48));
}
