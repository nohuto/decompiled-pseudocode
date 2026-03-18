/*
 * XREFs of zzzSetFMouseMoved @ 0x1C003C3C0
 * Callers:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     zzzSetWindowsHookEx @ 0x1C00E45A4 (zzzSetWindowsHookEx.c)
 *     HandleAsyncResizeComplete @ 0x1C01F5B1C (HandleAsyncResizeComplete.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 */

__int64 zzzSetFMouseMoved()
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( (gdwMitConfig & 1) != 0 )
    return GenerateMouseMove();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))zzzSetFMouseMovedWorker)(
           (LARGE_INTEGER)PerformanceCounter.QuadPart,
           0LL,
           0LL,
           0LL,
           0);
}
