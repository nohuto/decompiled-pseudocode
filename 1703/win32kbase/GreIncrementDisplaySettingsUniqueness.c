/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00F0B10
 * Callers:
 *     ApplyPathsModality @ 0x1C005B154 (ApplyPathsModality.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00F0990 (DxgkEngNotifyDisplayChange.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9990 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     <none>
 */

PVOID GreIncrementDisplaySettingsUniqueness()
{
  PVOID result; // rax

  result = gpGdiSharedMemory;
  if ( gpGdiSharedMemory )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    return (PVOID)DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
