/*
 * XREFs of HvlIsCoreSharingPossible @ 0x14017AB04
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14017B4B0 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x140856048 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  unsigned __int64 CoreProcessorSet; // rcx
  bool result; // al

  result = 1;
  if ( (HvlpFlags & 2) != 0 && (HvlpRootFlags & 0x400) == 0 )
  {
    switch ( HvlpSchedulerType )
    {
      case 1:
        return 0;
      case 3:
        return 0;
      case 4:
        CoreProcessorSet = KeGetCurrentPrcb()->CoreProcessorSet;
        if ( ((CoreProcessorSet - 1) & CoreProcessorSet) == 0 )
          return 0;
        break;
    }
  }
  return result;
}
