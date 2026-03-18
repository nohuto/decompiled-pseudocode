/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0059B24
 * Callers:
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     GetScreenRect @ 0x1C00594A4 (GetScreenRect.c)
 *     GetMonitorRect @ 0x1C005955C (GetMonitorRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetCurrentThreadCompositedDpi(void)
{
  unsigned __int16 v0; // bx

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 8LL)
                   + 52LL) & 1) == 0) )
  {
    return 0;
  }
  return v0;
}
