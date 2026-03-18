/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C000FC60
 * Callers:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00018A0 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C00110B0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00135B0 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A91C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D720 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00291E4 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002A1CC (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F024 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C005A0F4 (ACPIDelayedFreeWakeInterrupt.c)
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
