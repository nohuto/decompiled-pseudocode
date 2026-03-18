/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00F36F0
 * Callers:
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00F3570 (DxgkEngNotifyDisplayChange.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9B70 (DrvDisplayConfigSetScaleFactorOverride.c)
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
