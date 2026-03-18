/*
 * XREFs of HvlDummyInterruptCallback @ 0x1401E96E0
 * Callers:
 *     HvlRouteInterrupt @ 0x1401E9C40 (HvlRouteInterrupt.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1401ECA40 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
