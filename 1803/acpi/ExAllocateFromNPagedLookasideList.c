/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C0003CBC
 * Callers:
 *     NewContext @ 0x1C0003A74 (NewContext.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0009CE0 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C000AA00 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C000C080 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00111B8 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0011404 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0011B7C (ACPIBuildThermalZoneRequest.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C001A3A4 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C001F6C0 (ACPIPowerNodeDiscoverDependencies.c)
 *     DispatchNotification @ 0x1C0035820 (DispatchNotification.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C003FE88 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     NewLocalHeap @ 0x1C0049A10 (NewLocalHeap.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
