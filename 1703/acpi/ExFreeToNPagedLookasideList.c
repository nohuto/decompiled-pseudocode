/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0020A70
 * Callers:
 *     ACPIBuildThermalZoneRequest @ 0x1C00067F4 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0008800 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000A974 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000C150 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildDeviceRequest @ 0x1C0012910 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001DEF8 (ACPIBuildRunMethodRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C00594F0 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0059770 (ACPIFreeWaitWakePowerRequest.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 *     ACPIDispatchAddDevice @ 0x1C00AD890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
