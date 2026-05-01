/*
 * XREFs of ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180068620
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180091368 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::KeepAlive(TwinUI::Cortana::ShellExperienceView *this)
{
  __int64 v1; // rdx
  _DWORD *v2; // rcx
  int v3; // eax
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 7);
  v2 = (_DWORD *)((char *)this + 104);
  if ( *v2 )
  {
    *v2 = 4;
    goto LABEL_3;
  }
  v3 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(v2, v1, 4LL);
  v4 = v3;
  if ( v3 >= 0 )
  {
LABEL_3:
    v4 = 0;
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (unsigned int)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
    (const char *)(unsigned int)v3,
    v6);
LABEL_4:
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x376,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return 0LL;
}
