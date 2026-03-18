/*
 * XREFs of ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x18018EB40
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180016C90 (-FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayByHMonitorNoRefNoConst(CDisplaySet *this, HMONITOR a2, HMONITOR **a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  __int64 v6; // r11
  HMONITOR *v7; // rcx

  *a3 = 0LL;
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18);
  v5 = -2147024809;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 6);
    while ( 1 )
    {
      v7 = *(HMONITOR **)(v6 + 8 * v3);
      if ( v7[2] == a2 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_5;
    }
    v5 = 0;
    *a3 = v7;
  }
  else
  {
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x3DBu);
  }
  return v5;
}
