/*
 * XREFs of ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800C1240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180183300 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
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
      (void *)0x57,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
