/*
 * XREFs of GetDwmDependentMetric @ 0x1C002BF30
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047210 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     _GetClientRect @ 0x1C013E1F0 (_GetClientRect.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDwmDependentMetric(int a1)
{
  __int64 v1; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  char *v4; // rcx
  int v5; // eax
  char *v6; // rcx

  v1 = a1;
  if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v4 = (char *)gpsi;
    v5 = CurrentThreadDpiAwarenessContext & 0xF;
    if ( v5 == 1 )
    {
      v6 = (char *)gpsi + 2656;
      return *(unsigned int *)&v6[4 * v1];
    }
    if ( !v5 )
    {
      v6 = (char *)gpsi + 2268;
      return *(unsigned int *)&v6[4 * v1];
    }
  }
  else
  {
    v4 = (char *)gpsi;
  }
  v6 = v4 + 1880;
  return *(unsigned int *)&v6[4 * v1];
}
