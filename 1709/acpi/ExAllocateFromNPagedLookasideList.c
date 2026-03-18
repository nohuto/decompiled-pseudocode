/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C00111E4
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C000EC5C (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C000EE50 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00110B0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0012FA4 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00135B0 (ACPIBuildRunMethodRequest.c)
 *     NewContext @ 0x1C0014F9C (NewContext.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A91C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001AB98 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002A1CC (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0043760 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C0055A30 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0059E28 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
