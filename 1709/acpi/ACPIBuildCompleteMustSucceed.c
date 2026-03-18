/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C0014D80
 * Callers:
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012820 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012AD0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C00140D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0014470 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0014530 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0014610 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0014840 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0014D00 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028F80 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029090 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00439C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0043ED0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C00441C0 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
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
    ACPIBuildCompleteCommon(a4 + 24, 2LL);
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
