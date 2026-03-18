/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C0019D90
 * Callers:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C0019DD0 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C0019EE0 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C0019FA0 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001CC30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E1E0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001E2F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C001EA20 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001F95C (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
