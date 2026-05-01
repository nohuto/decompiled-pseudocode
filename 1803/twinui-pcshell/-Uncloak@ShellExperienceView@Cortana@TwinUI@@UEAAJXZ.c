/*
 * XREFs of ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800681F0
 * Callers:
 *     ?Uncloak@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180065EB0 (-Uncloak@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C4A4 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Uncloak(TwinUI::Cortana::ShellExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CSingleViewShellExperience::Uncloak((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v1,
      -2);
  return v2;
}
