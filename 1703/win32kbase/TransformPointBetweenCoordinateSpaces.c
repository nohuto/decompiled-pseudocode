/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1C0072830
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // eax
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v12; // eax

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(a3 + 368);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 368);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int8)CurrentThreadDpiAwarenessContext ^ (unsigned __int8)v8) & 0xF) != 0 )
  {
    v10 = MonitorFlagsFromDpiAwarenessContext(v8);
    v11 = LogicalToPhysicalDPIPoint((__int64)a1, (__int64)a2, v10, 0LL);
    v12 = MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    return v11 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, v12, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
