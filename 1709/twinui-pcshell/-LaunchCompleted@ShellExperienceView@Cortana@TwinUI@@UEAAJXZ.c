/*
 * XREFs of ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800CF270
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801D040C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::LaunchCompleted(TwinUI::Cortana::ShellExperienceView *this)
{
  CSingleViewShellExperience::LaunchCompleted((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32));
  return 0LL;
}
