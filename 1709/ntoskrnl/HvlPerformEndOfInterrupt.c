/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1401ECA40
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1401E96E0 (HvlDummyInterruptCallback.c)
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
