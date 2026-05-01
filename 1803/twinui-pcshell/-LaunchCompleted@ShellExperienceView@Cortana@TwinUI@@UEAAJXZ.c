/*
 * XREFs of ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180068600
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006BEBC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::LaunchCompleted(TwinUI::Cortana::ShellExperienceView *this)
{
  CSingleViewShellExperience::LaunchCompleted((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32));
  return 0LL;
}
