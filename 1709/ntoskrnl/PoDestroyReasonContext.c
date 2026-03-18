/*
 * XREFs of PoDestroyReasonContext @ 0x1400B0710
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x1400E0CF0 (ExpDeleteTimer.c)
 *     NtCancelTimer @ 0x1400E1574 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1400E17C0 (NtSetTimerEx.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     PoRegisterSystemState @ 0x1402411B0 (PoRegisterSystemState.c)
 *     NtSetTimer @ 0x140286C38 (NtSetTimer.c)
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1404F1D38 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x1405DBED0 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x1406F69D0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1406F6AF0 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x14084EDCC (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObject(v2);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
