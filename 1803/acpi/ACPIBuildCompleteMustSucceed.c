/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C0009C70
 * Callers:
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C000CC90 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CE60 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000D400 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000D5C0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000E650 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000E750 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C000E860 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000E9C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000F260 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000F4D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C000F910 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000FA10 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00109A0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0010B10 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  signed __int32 v5; // edx
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    v5 = 2;
  }
  else
  {
    v6 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v6 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v6);
    }
    *(_DWORD *)(a4 + 32) = 2;
    v5 = v4;
  }
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v5);
}
