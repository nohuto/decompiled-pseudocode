/*
 * XREFs of _EnablePerMonitorMenuScaling @ 0x1C0204280
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 EnablePerMonitorMenuScaling()
{
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) |= 0x80000u;
  return 1LL;
}
