/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0049C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C004B19C (WPP_RECORDER_SF_qd.c)
 *     ACPIWakeRestoreEnables @ 0x1C005A028 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // edi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  int v6; // edx
  __int64 result; // rax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    64,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    0);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1
    || v4 != 5
    || (v1 = ACPIWakeRestoreEnables(v5, a1),
        LOBYTE(v6) = 4,
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          10,
          65,
          (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
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
