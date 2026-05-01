/*
 * XREFs of ?ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@@Z @ 0x1800684C0
 * Callers:
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006DFF0 (-ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperienc.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::ShowBorder(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64, bool, _QWORD, _QWORD); // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 72) )
  {
    v3 = *(_QWORD *)(a1 + 128);
    v4 = *(__int64 (__fastcall **)(__int64, __int64, bool, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL);
    if ( (char *)v4 == (char *)DesktopSingleViewShellExperiencePersonality::ShowBorder )
      v5 = DesktopSingleViewShellExperiencePersonality::ShowBorder(v3, a2, a3 != 0, 0LL, 0LL);
    else
      v5 = v4(v3, a2, a3 != 0, 0LL, 0LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EB,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5,
        v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)v6,
        v9);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
