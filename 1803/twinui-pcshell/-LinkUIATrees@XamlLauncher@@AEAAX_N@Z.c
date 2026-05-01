/*
 * XREFs of ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180077D40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x180077DA0 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ @ 0x180228020 (-OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180067ED0 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?NotifyUIATreesUnlinked@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067F60 (-NotifyUIATreesUnlinked@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x180075624 (--$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x180075770 (--$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x180076700 (-GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncher::LinkUIATrees(XamlLauncher *this, char a2)
{
  CortanaSharedExperienceManager *v3; // rcx
  __int64 (__fastcall *v4)(CortanaSharedExperienceManager *, HWND *); // r8
  int WindowHandle; // eax
  CStartExperienceManager *v6; // rcx
  int v7; // eax
  const char *v8; // r9
  const char *v9; // r9
  const char *v10; // r9
  int v11; // eax
  const char *v12; // r9
  CStartExperienceManager *v13; // rcx
  int v14; // eax
  CortanaSharedExperienceManager *v15; // rcx
  __int64 (*v16)(void); // rax
  int v17; // eax
  HWND v18[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v20; // [rsp+40h] [rbp+10h] BYREF
  int v21; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF

  v18[0] = 0LL;
  v3 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 14);
  hWnd = 0LL;
  if ( v3 && *((_QWORD *)this + 13) )
  {
    v4 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, HWND *))(*(_QWORD *)v3 + 392LL);
    if ( a2 )
    {
      if ( v4 == CortanaSharedExperienceManager::GetWindowHandle )
        WindowHandle = CortanaSharedExperienceManager::GetWindowHandle(v3, &hWnd);
      else
        WindowHandle = (*(__int64 (__fastcall **)(CortanaSharedExperienceManager *, HWND *))(*(_QWORD *)v3 + 392LL))(
                         v3,
                         &hWnd);
      if ( WindowHandle >= 0 && IsWindow(hWnd) )
      {
        v6 = (CStartExperienceManager *)*((_QWORD *)this + 13);
        v7 = *(__int64 (__fastcall **)(CStartExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v6 + 280LL) == CStartExperienceManager::GetWindowHandle
           ? CStartExperienceManager::GetWindowHandle(
               v6,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v18)
           : (*(unsigned __int64 (__fastcall **)(CStartExperienceManager *, HWND *))(*(_QWORD *)v6 + 280LL))(v6, v18);
        if ( v7 >= 0 && IsWindow(v18[0]) )
        {
          v20 = (int)hWnd;
          v21 = (int)v18[0];
          StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>((__int64)&v21, (__int64)&v20);
          if ( !SetPropW(hWnd, L"CrossProcessParentHWND", v18[0]) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x3C1,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v8);
          if ( !SetPropW(v18[0], L"CrossProcessChildHWND", hWnd) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x3C2,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v9);
          if ( !SetPropW(hWnd, L"NonComponentUIWindow", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x3C5,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v10);
          RemovePropW(hWnd, L"UIA_WindowPatternEnabled");
        }
      }
    }
    else
    {
      if ( v4 == CortanaSharedExperienceManager::GetWindowHandle )
        v11 = CortanaSharedExperienceManager::GetWindowHandle(v3, &hWnd);
      else
        v11 = (*(__int64 (__fastcall **)(CortanaSharedExperienceManager *, HWND *))(*(_QWORD *)v3 + 392LL))(v3, &hWnd);
      if ( v11 >= 0 )
      {
        if ( IsWindow(hWnd) )
        {
          RemovePropW(hWnd, L"CrossProcessParentHWND");
          RemovePropW(hWnd, L"NonComponentUIWindow");
          if ( !SetPropW(hWnd, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x3D9,
              (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v12);
        }
      }
      v13 = (CStartExperienceManager *)*((_QWORD *)this + 13);
      if ( *(__int64 (__fastcall **)(CStartExperienceManager *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v13 + 280LL) == CStartExperienceManager::GetWindowHandle )
        v14 = CStartExperienceManager::GetWindowHandle(
                v13,
                (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v18);
      else
        v14 = (*(__int64 (__fastcall **)(CStartExperienceManager *, HWND *))(*(_QWORD *)v13 + 280LL))(v13, v18);
      if ( v14 >= 0 && IsWindow(v18[0]) )
        RemovePropW(v18[0], L"CrossProcessChildHWND");
      v15 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 14);
      v16 = *(__int64 (**)(void))(*(_QWORD *)v15 + 408LL);
      if ( (char *)v16 == (char *)CortanaSharedExperienceManager::NotifyUIATreesUnlinked )
        v17 = CortanaSharedExperienceManager::NotifyUIATreesUnlinked(v15);
      else
        v17 = v16();
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E1,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v17,
          (int)v18[0]);
      v20 = (int)hWnd;
      v21 = (int)v18[0];
      StartWindowTelemetry::UnlinkingUIATrees<unsigned int,unsigned int>((__int64)&v21, (__int64)&v20);
    }
  }
}
