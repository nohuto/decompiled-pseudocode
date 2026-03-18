/*
 * XREFs of HvlIsCoreSharingPossible @ 0x140226AE0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401A5BD0 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x1408B7998 (VslConnectSwInterrupt.c)
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
