/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x1406F9580
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PopFxReleaseDevice @ 0x14023EE80 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140243450 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxUpdateVetoMaskWork(unsigned int *P)
{
  __int64 v1; // rdi
  __int64 v3; // rbx

  v1 = *(_QWORD *)P;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 48LL) + 32LL);
  PoFxActivateDevice(v3);
  PopPepUpdateDripsDeviceVetoMask(v1, P[2]);
  PoFxIdleDevice(v3);
  PopFxReleaseDevice(v1);
  ExFreePoolWithTag(P, 0x4D584650u);
}
