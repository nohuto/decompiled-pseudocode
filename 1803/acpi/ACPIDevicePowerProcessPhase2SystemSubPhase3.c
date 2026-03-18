/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C001D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIWakeRestoreEnables @ 0x1C0041B68 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // edi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  __int64 result; // rax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    65,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    0);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1
    || v4 != 5
    || (v1 = ACPIWakeRestoreEnables(v5, a1),
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          4,
          10,
          66,
          (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
          a1,
          v1),
        result = 259LL,
        v1 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
