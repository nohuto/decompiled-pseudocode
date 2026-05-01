/*
 * XREFs of ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800C1740
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180180E40 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::LaunchCompleted(TwinUI::Cortana::ShellExperienceView *this)
{
  CSingleViewShellExperience::LaunchCompleted((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32));
  return 0LL;
}
