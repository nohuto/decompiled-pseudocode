/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x18009D16C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009F000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18004849C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x18006C93C (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  HWND v4; // rdx
  int v5; // esi
  int v6; // r14d
  int SystemMetrics; // r14d
  int v8; // esi
  HMONITOR v9; // rax
  HMONITOR v10; // rbx
  int v11; // eax
  struct tagPOINT v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
              v4,
              &v12) >= 0 )
    OffsetRect(&rc, v12.x - rc.left, v12.y - rc.top);
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) + 48LL),
              *((HWND *)a2 + 5),
              (struct tagSIZE *)&v12) >= 0 )
  {
    rc.right = rc.left + v12.x;
    rc.bottom = rc.top + v12.y;
  }
  if ( (*((_DWORD *)a2 + 150) & 0x800000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 163) - rc.left;
    v6 = *((_DWORD *)a2 + 164) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v6 = GetSystemMetrics(33) + SystemMetrics;
    v8 = GetSystemMetrics(92);
    v5 = GetSystemMetrics(32) + v8;
    v9 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    v10 = v9;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v10, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v6 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v5 = mi.rcMonitor.left - rc.left;
    }
  }
  v11 = *((_DWORD *)a2 + 150);
  if ( (v11 & 0x1000000) != 0 )
  {
    OffsetRect((LPRECT)((char *)a2 + 604), v5 - *((_DWORD *)a2 + 151), v6 - *((_DWORD *)a2 + 152));
    v11 = *((_DWORD *)a2 + 150);
  }
  if ( (v11 & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 636), v5 - *((_DWORD *)a2 + 159), v6 - *((_DWORD *)a2 + 160));
}
