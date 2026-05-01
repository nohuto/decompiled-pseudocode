/*
 * XREFs of ?OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1802BCBB0
 * Callers:
 *     ?OnViewClosing@TabletModePositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x1800AF5D0 (-OnViewClosing@TabletModePositioner@@W7EAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::OnViewClosing(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        int a3)
{
  HWND WindowForView; // rbx

  if ( a3 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    if ( WindowForView )
    {
      if ( (int)DwmpBeginTransitionRequest(50LL) >= 0 )
      {
        DwmpTransitionWindow(WindowForView, 536870997LL);
        DwmpEndTransitionRequest(50LL);
      }
    }
  }
  return 0LL;
}
