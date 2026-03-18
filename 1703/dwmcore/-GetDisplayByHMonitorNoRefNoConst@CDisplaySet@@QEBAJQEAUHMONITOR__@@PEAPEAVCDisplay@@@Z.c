/*
 * XREFs of ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450
 * Callers:
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800692A4 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayByHMonitorNoRef@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEBVCDisplay@@@Z @ 0x1800CD414 (-GetDisplayByHMonitorNoRef@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayByHMonitorNoRefNoConst(CDisplaySet *this, HMONITOR a2, struct CDisplay **a3)
{
  int DisplayByHMonitorNoRef; // eax
  unsigned int v5; // ebx
  struct CDisplay *v7; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  DisplayByHMonitorNoRef = CDisplaySet::GetDisplayByHMonitorNoRef(this, a2, (HMONITOR **)&v7);
  v5 = DisplayByHMonitorNoRef;
  if ( DisplayByHMonitorNoRef < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayByHMonitorNoRef, 0x3D9u);
  else
    *a3 = v7;
  return v5;
}
