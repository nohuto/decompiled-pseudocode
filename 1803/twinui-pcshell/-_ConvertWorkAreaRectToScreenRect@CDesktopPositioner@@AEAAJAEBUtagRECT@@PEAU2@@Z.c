/*
 * XREFs of ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x1802C0C80
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800226F8 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     _lambda_d40303f400b27b9399fd75f15be23f87_::operator() @ 0x1802BEC1C (_lambda_d40303f400b27b9399fd75f15be23f87_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  HMONITOR v4; // rbx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF

  *a3 = *a2;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    memset_0(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v4, &mi) )
    {
      if ( mi.rcMonitor.left != mi.rcWork.left || mi.rcMonitor.top != mi.rcWork.top )
        OffsetRect(a3, mi.rcWork.left - mi.rcMonitor.left, mi.rcWork.top - mi.rcMonitor.top);
    }
  }
  return 0LL;
}
