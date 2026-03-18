/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x14022A0E0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x140226850 (HvlDummyInterruptCallback.c)
 * Callees:
 *     <none>
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
