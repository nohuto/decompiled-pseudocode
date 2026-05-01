/*
 * XREFs of ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180067ED0
 * Callers:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078F1C (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180068230 (-get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::GetWindowHandle(CortanaSharedExperienceManager *this, HWND *a2)
{
  HWND v3; // rbx
  TwinUI::Cortana::ShellExperienceView *v4; // rcx
  __int64 (__fastcall *v5)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rax
  int ViewWrapper; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ExperienceManagerUtils *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  v4 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 60);
  v5 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v4 + 56LL);
  if ( v5 == TwinUI::Cortana::ShellExperienceView::get_ViewWrapper )
    ViewWrapper = TwinUI::Cortana::ShellExperienceView::get_ViewWrapper(v4, &v10);
  else
    ViewWrapper = v5(v4, &v10);
  if ( ViewWrapper < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C1,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ViewWrapper,
      -2);
  if ( v10 )
  {
    v3 = ExperienceManagerUtils::WindowFromViewWrapper(v10, v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  }
  *a2 = v3;
  return v3 == 0LL ? 0x8007139F : 0;
}
