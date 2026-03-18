/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C005DEF0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C005D840 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00E4F4C (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     LogicalToPhysicalDPIRect @ 0x1C0059390 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00595A0 (PhysicalToLogicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(_OWORD *a1, _OWORD *a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, (__int64 *)va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, a3, (__int64 *)va);
}
