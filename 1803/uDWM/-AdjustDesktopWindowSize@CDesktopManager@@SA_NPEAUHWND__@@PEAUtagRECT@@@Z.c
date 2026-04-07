/*
 * XREFs of ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180074BB8
 * Callers:
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18008382C (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x1800273A8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002BA44 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

char __fastcall CDesktopManager::AdjustDesktopWindowSize(HWND a1, struct tagRECT *a2)
{
  char v4; // bl
  struct CWindowData *WindowDataByHwnd; // rdx
  HMONITOR v6; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                       a1);
  if ( WindowDataByHwnd
    && a1 == CWindowList::GetShellWindowForDesktop(
               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
               *((_QWORD *)WindowDataByHwnd + 15)) )
  {
    v6 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v6, &mi) )
    {
      v4 = 1;
      *a2 = mi.rcMonitor;
    }
  }
  else
  {
    *(_QWORD *)&a2->left = 0LL;
  }
  return v4;
}
