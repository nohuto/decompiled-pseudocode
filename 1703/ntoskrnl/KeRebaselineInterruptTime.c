/*
 * XREFs of KeRebaselineInterruptTime @ 0x140136EF4
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140404FC0 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000350] = result.QuadPart;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
