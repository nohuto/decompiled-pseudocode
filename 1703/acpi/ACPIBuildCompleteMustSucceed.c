/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C0012240
 * Callers:
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00097D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000E7E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000FFF0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C00126D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001ED90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0027CC0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0027F70 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028280 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028420 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044000 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044510 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0044800 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned int v5; // eax
  KIRQL v6; // bl
  int v7; // edx

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), 2);
  }
  else
  {
    v5 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v5 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v5);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
}
