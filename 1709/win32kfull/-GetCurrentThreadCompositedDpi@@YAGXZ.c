/*
 * XREFs of ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004BAB0
 * Callers:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     GetMonitorMenuRect @ 0x1C023A788 (GetMonitorMenuRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v2
    && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL) + 52LL) & 1) == 0) )
  {
    return 0;
  }
  return v2;
}
