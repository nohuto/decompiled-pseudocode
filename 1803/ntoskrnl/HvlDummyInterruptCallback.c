/*
 * XREFs of HvlDummyInterruptCallback @ 0x140226850
 * Callers:
 *     HvlRouteInterrupt @ 0x140226D30 (HvlRouteInterrupt.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x14022A0E0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
