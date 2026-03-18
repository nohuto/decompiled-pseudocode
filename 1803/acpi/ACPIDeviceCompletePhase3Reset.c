/*
 * XREFs of ACPIDeviceCompletePhase3Reset @ 0x1C0019FA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall ACPIDeviceCompletePhase3Reset(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  signed __int32 v6; // edx
  KIRQL v7; // bl
  char v8; // [rsp+30h] [rbp-18h]

  v8 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    17,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a4,
    v8);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v6 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  v7 = v5;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v6);
  KeReleaseSpinLock(&AcpiPowerLock, v7);
}
