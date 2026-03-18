/*
 * XREFs of PoDestroyReasonContext @ 0x14007227C
 * Callers:
 *     NtSetTimerEx @ 0x1400479E0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     NtCancelTimer @ 0x14004AB00 (NtCancelTimer.c)
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x14012B620 (ExpDeleteTimer.c)
 *     NtSetTimer @ 0x140134C70 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x14022DBD0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
 *     PoCreatePowerRequest @ 0x1404C73E0 (PoCreatePowerRequest.c)
 *     PopPowerRequestCreateInfo @ 0x1404C7E70 (PopPowerRequestCreateInfo.c)
 *     PoCreateThermalRequest @ 0x1405D6BA0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1406C66C0 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140825090 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
      ObfDereferenceObject(v2);
  }
  ExFreePoolWithTag(a1, 0x78435250u);
}
