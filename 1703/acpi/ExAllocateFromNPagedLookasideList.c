/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C00131D8
 * Callers:
 *     ACPIBuildThermalZoneRequest @ 0x1C00067F4 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C0012910 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C0012FC4 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001DEF8 (ACPIBuildRunMethodRequest.c)
 *     NewContext @ 0x1C001E574 (NewContext.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002073C (ACPIWakeEnableDisableAsync.c)
 *     ACPIDeviceRecordDependencies @ 0x1C002576C (ACPIDeviceRecordDependencies.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0025960 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0029FB4 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C0043DA0 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C0054E44 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0059224 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 *     ACPIDispatchAddDevice @ 0x1C00AD890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
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
