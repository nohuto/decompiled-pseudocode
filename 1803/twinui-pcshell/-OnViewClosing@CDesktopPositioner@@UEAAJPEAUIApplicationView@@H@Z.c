/*
 * XREFs of ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1802BF750
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1800AF140 (-OnViewClosing@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z @ 0x1800AF150 (-OnViewClosing@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C18E0 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::OnViewClosing(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        __int64 a3)
{
  struct IApplicationView *v4; // rdx
  HWND WindowForView; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (_DWORD)a3 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, a3);
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v4);
    if ( WindowForView )
    {
      if ( (int)DwmpBeginTransitionRequest(50LL) >= 0 )
      {
        v6 = DwmpTransitionWindow(WindowForView, 536870997LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            364LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v6);
        v7 = DwmpEndTransitionRequest(50LL);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            365LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v7);
      }
    }
  }
  v8 = CDesktopPositioner::_PersistPosition((CDesktopPositioner *)((char *)this - 104), (struct IApplicationView *)a2);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x173,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
