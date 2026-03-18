/*
 * XREFs of ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0049A60 (PhysicalToLogicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     OriginFromMonFlags @ 0x1C0049C70 (OriginFromMonFlags.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00DE2D0 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00DE510 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 */

_BOOL8 __fastcall ValidateMonFlags(unsigned int *a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  if ( (*a1 & 0xE0) == 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    *a1 |= MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
  }
  if ( (*a1 & 3) == 0 )
    *a1 |= 2u;
  return (*a1 & 0x20) == 0;
}
