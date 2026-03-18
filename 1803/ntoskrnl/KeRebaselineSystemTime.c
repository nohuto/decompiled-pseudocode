/*
 * XREFs of KeRebaselineSystemTime @ 0x14014F56C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  MEMORY[0xFFFFF78000000348] = result.QuadPart;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
