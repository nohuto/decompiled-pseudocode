/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x1C0007530
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C000DAAC (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 *     HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1C000DBCC (HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased.c)
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v1);
  return HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(v1);
}
