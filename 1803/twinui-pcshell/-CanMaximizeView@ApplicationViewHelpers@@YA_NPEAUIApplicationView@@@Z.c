/*
 * XREFs of ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18030531C
 * Callers:
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C18E0 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x180305340 (-CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::CanMaximizeView(
        __int64 (__fastcall ***this)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        struct IApplicationView *a2)
{
  char v2; // bl
  ApplicationViewHelpers *WindowForView; // rax
  HWND v4; // rdx

  v2 = 0;
  WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return ApplicationViewHelpers::CanMaximizeWindow(WindowForView, v4);
  return v2;
}
