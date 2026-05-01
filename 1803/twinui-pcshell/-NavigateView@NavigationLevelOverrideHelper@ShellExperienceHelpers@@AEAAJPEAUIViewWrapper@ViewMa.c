/*
 * XREFs of ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180091368
 * Callers:
 *     ?KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180068620 (-KeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C300 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800913E4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803071A4 (-DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@Vie.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180307214 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
        __int64 a1,
        ExperienceManagerUtils *a2,
        unsigned int a3)
{
  __int64 (__fastcall *v6)(__int64, int); // rax
  int v7; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  unsigned int v9; // edi
  int v10; // eax
  HWND v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 336LL);
  if ( v6 == ViewWrapperBase::Navigate )
    v7 = ViewWrapperBase::Navigate((__int64)a2, a3);
  else
    v7 = v6((__int64)a2, a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
      (const char *)(unsigned int)v7);
    return v9;
  }
  else
  {
    if ( !a3 )
    {
      v12 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2, v8);
      PostMessageW(v12, 0x10u, 0LL, 0LL);
    }
    v10 = 4;
    if ( a3 != 5 )
      v10 = a3;
    *(_DWORD *)(a1 + 4) = v10;
    return 0LL;
  }
}
