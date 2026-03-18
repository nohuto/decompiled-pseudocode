/*
 * XREFs of PopApplyLegacyPowerRequestFlags @ 0x140077528
 * Callers:
 *     PoRegisterSystemState @ 0x1402786C0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x140526F38 (NtSetThreadExecutionState.c)
 * Callees:
 *     PoSetPowerRequest @ 0x140077090 (PoSetPowerRequest.c)
 *     PoClearPowerRequest @ 0x140077210 (PoClearPowerRequest.c)
 */

NTSTATUS __fastcall PopApplyLegacyPowerRequestFlags(PVOID PowerRequest, char a2, char a3)
{
  NTSTATUS result; // eax

  if ( (a3 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestSystemRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestSystemRequired);
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (a2 & 2) != 0 )
      result = PoSetPowerRequest(PowerRequest, PowerRequestDisplayRequired);
    else
      result = PoClearPowerRequest(PowerRequest, PowerRequestDisplayRequired);
  }
  if ( (a3 & 0x40) != 0 )
  {
    if ( (a2 & 0x40) != 0 )
      return PoSetPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
    else
      return PoClearPowerRequest(PowerRequest, PowerRequestAwayModeRequired);
  }
  return result;
}
