/*
 * XREFs of ACPIWakeEmulationInterruptServiceRoutine @ 0x1C002B1B0
 * Callers:
 *     <none>
 * Callees:
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 */

char __fastcall ACPIWakeEmulationInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  OSNotifyDeviceWakeByInterrupt(a2);
  return 1;
}
