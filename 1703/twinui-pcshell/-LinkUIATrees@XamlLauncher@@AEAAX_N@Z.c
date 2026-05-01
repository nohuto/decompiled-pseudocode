/*
 * XREFs of ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x18014D500
 * Callers:
 *     ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x18014CC40 (-OnLauncherHide@XamlLauncher@@UEAAXXZ.c)
 *     ?OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ @ 0x18014CC80 (-OnDeviceUnlockedWithLauncherAndCortanaShowing@XamlLauncher@@UEAAXXZ.c)
 *     ?OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ @ 0x18014CC90 (-OnCortanaWithoutStartShowing@XamlLauncher@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097AAC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x18014FE08 (--$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x18014FEBC (--$UnlinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::LinkUIATrees(XamlLauncher *this, char a2)
{
  __int64 v3; // rcx
  int (__fastcall *v4)(__int64, HWND *); // rax
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  const char *v8; // r9
  int v9; // eax
  HWND v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+28h] BYREF

  v10[0] = 0LL;
  v3 = *((_QWORD *)this + 12);
  hWnd = 0LL;
  if ( v3 && *((_QWORD *)this + 11) )
  {
    v4 = *(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v3 + 392LL);
    if ( a2 )
    {
      if ( v4(v3, &hWnd) >= 0
        && IsWindow(hWnd)
        && (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 11) + 280LL))(*((_QWORD *)this + 11), v10) >= 0
        && IsWindow(v10[0]) )
      {
        v12 = (int)hWnd;
        v13 = (int)v10[0];
        StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
        if ( !SetPropW(hWnd, L"CrossProcessParentHWND", v10[0]) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x43C,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v5);
        if ( !SetPropW(v10[0], L"CrossProcessChildHWND", hWnd) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x43D,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v6);
        if ( !SetPropW(hWnd, L"NonComponentUIWindow", HANDLE_FLAG_INHERIT) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x440,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            v7);
        RemovePropW(hWnd, L"UIA_WindowPatternEnabled");
      }
    }
    else
    {
      if ( v4(v3, &hWnd) >= 0 )
      {
        if ( IsWindow(hWnd) )
        {
          RemovePropW(hWnd, L"CrossProcessParentHWND");
          RemovePropW(hWnd, L"NonComponentUIWindow");
          if ( !SetPropW(hWnd, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x454,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              v8);
        }
      }
      if ( (*(int (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 11) + 280LL))(*((_QWORD *)this + 11), v10) >= 0
        && IsWindow(v10[0]) )
      {
        RemovePropW(v10[0], L"CrossProcessChildHWND");
      }
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 408LL))(*((_QWORD *)this + 12));
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x45C,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v9);
      v12 = (int)hWnd;
      v13 = (int)v10[0];
      StartWindowTelemetry::UnlinkingUIATrees<unsigned int,unsigned int>(&v13, &v12);
    }
  }
}
