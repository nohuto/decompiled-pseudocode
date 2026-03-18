/*
 * XREFs of ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0072150 (TransformRectBetweenCoordinateSpaces.c)
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00DE394 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z.c)
 * Callees:
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpacesPerMonitor(
        struct tagRECT *a1,
        struct tagRECT *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagMONITOR *a5)
{
  unsigned int v8; // eax
  unsigned int v9; // eax

  v8 = MonitorFlagsFromDpiAwarenessContext(a4);
  LODWORD(a2) = LogicalToPhysicalDPIRect(a1, (__int64)a2, v8, (__int64 *)&a5);
  v9 = MonitorFlagsFromDpiAwarenessContext(a3);
  return (unsigned int)a2 | (unsigned int)PhysicalToLogicalDPIRect(a1, (__int64)a1, v9, (__int64 *)&a5);
}
