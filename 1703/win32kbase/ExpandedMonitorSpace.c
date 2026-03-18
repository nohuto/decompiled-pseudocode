/*
 * XREFs of ExpandedMonitorSpace @ 0x1C00DE480
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0072984 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C00729F4 (MinimumMonitorDpi.c)
 */

struct tagPOINT __fastcall ExpandedMonitorSpace(struct tagPOINT *a1)
{
  unsigned __int16 v2; // di
  char CurrentThreadDpiAwarenessContext; // al
  BOOL v4; // ebx
  struct tagPOINT result; // rax

  v2 = MinimumMonitorDpi();
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  *a1 = ExpandMonitorSpaceVertex(
          (CurrentThreadDpiAwarenessContext & 0xF) == 0,
          v2,
          *(struct tagPOINT *)(*(_QWORD *)gpDispInfo + 24LL));
  v4 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0;
  result = ExpandMonitorSpaceVertex(v4, v2, *(struct tagPOINT *)(*(_QWORD *)gpDispInfo + 32LL));
  a1[1] = result;
  return result;
}
