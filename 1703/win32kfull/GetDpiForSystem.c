/*
 * XREFs of GetDpiForSystem @ 0x1C0238FB8
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetDpiForSystem()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    return 96LL;
  }
  else
  {
    return *(unsigned __int16 *)(gpsi + 8678LL);
  }
}
