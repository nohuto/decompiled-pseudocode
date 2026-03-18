/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x140226A90
 * Callers:
 *     KeAccumulateTicks @ 0x14010D530 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
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
