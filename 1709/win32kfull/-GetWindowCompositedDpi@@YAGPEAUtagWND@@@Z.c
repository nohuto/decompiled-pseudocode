/*
 * XREFs of ?GetWindowCompositedDpi@@YAGPEAUtagWND@@@Z @ 0x1C005F570
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C005D45C (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 *     SelectWindowRgn @ 0x1C00E6E74 (SelectWindowRgn.c)
 *     IsSmallerThanScreen @ 0x1C0115C10 (IsSmallerThanScreen.c)
 *     GetMonitorMenuRectForWindow @ 0x1C023A7CC (GetMonitorMenuRectForWindow.c)
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpi(struct tagWND *a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
  if ( v2 && (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 52LL) & 1) != 0 )
    return (*((_DWORD *)a1 + 92) >> 8) & 0x1FF;
  return v1;
}
