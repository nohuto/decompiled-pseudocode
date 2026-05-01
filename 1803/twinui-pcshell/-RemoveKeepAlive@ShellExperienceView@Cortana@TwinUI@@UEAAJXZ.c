/*
 * XREFs of ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800686B0
 * Callers:
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066774 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::RemoveKeepAlive(TwinUI::Cortana::ShellExperienceView *this)
{
  return CSingleViewShellExperience::RemoveKeepAlive((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32));
}
