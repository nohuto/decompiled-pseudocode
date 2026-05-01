/*
 * XREFs of ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180067658
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800677F0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F3AC (-ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeApplicationViewData(
        HWND *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  signed int LastError; // eax
  signed int ScaleFactorForWindow; // ecx
  signed int v8; // eax
  HMONITOR v9; // rax
  signed int v10; // eax
  LONG v11; // eax
  struct tagRECT v12; // xmm1
  struct APPLICATION_VIEW_DATA *v14; // [rsp+20h] [rbp-E0h] BYREF
  RECT rcWork; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+3Ch] [rbp-C4h]
  RECT rcMonitor; // [rsp+40h] [rbp-C0h]
  struct tagRECT v19; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-A0h]
  LONG v21; // [rsp+70h] [rbp-90h]
  struct tagPOINT Points[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT Rect; // [rsp+88h] [rbp-78h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF

  memset(a3, 0, 0x24uLL);
  *(struct tagRECT *)&Points[0].x = *a2;
  SetLastError(0);
  if ( MapWindowPoints(this[15], 0LL, Points, 2u) || !GetLastError() )
  {
    ScaleFactorForWindow = 0;
  }
  else
  {
    LastError = GetLastError();
    ScaleFactorForWindow = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      ScaleFactorForWindow = LastError;
    if ( ScaleFactorForWindow >= 0 )
      ScaleFactorForWindow = -2147467259;
  }
  if ( ScaleFactorForWindow >= 0 )
  {
    if ( GetWindowRect(this[15], &Rect) )
    {
      v9 = MonitorFromWindow(this[15], 1u);
      mi.cbSize = 104;
      if ( GetMonitorInfoW(v9, &mi) )
      {
        ScaleFactorForWindow = GetScaleFactorForWindow(*(_QWORD *)this[13], &v14);
        if ( ScaleFactorForWindow >= 0 )
        {
          v17 = 0;
          v16 = (int)v14;
          rcWork = mi.rcWork;
          rcMonitor = mi.rcMonitor;
          ScaleFactorForWindow = ImmersiveApplicationLayout::ComputeAppViewData(
                                   (ImmersiveApplicationLayout *)&rcWork,
                                   (const struct LAYOUT_ENVIRONMENT_DETAILS *)Points,
                                   &Rect,
                                   &v19,
                                   v14);
          if ( ScaleFactorForWindow >= 0 )
          {
            v11 = v21;
            v12 = v20;
            *a3 = v19;
            a3[1] = v12;
            a3[2].left = v11;
          }
        }
      }
      else
      {
        v10 = GetLastError();
        ScaleFactorForWindow = (unsigned __int16)v10 | 0x80070000;
        if ( v10 <= 0 )
          ScaleFactorForWindow = v10;
        if ( ScaleFactorForWindow >= 0 )
          return (unsigned int)-2147467259;
      }
    }
    else
    {
      v8 = GetLastError();
      ScaleFactorForWindow = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        ScaleFactorForWindow = v8;
      if ( ScaleFactorForWindow >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)ScaleFactorForWindow;
}
