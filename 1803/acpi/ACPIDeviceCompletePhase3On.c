/*
 * XREFs of ACPIDeviceCompletePhase3On @ 0x1C0019EE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C0019D90 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall ACPIDeviceCompletePhase3On(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  KIRQL v6; // si
  signed __int32 v7; // edx
  char v8; // [rsp+30h] [rbp-18h]

  v5 = a2;
  v8 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    16,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a4,
    v8);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( v5 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10uLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
