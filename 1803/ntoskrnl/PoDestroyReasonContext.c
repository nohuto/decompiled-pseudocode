/*
 * XREFs of PoDestroyReasonContext @ 0x14007624C
 * Callers:
 *     NtCancelTimer @ 0x14005A790 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14005AE80 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x1400C00C0 (ExpDeleteTimer.c)
 *     NtSetTimer @ 0x14014A5DC (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402786C0 (PoRegisterSystemState.c)
 *     PopPowerRequestCreateInfo @ 0x1405251E0 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x1405253F0 (PoCreatePowerRequest.c)
 *     NtSetThreadExecutionState @ 0x140526F38 (NtSetThreadExecutionState.c)
 *     PoCreateThermalRequest @ 0x1406270A0 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x14075E600 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1408C7738 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
