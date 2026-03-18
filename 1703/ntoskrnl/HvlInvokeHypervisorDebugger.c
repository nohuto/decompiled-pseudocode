/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x1401E4C4C
 * Callers:
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = (unsigned int)HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = (unsigned int)HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallCodeVa();
  }
  return result;
}
