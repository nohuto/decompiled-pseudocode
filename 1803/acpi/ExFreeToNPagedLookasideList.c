/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C0002FF4
 * Callers:
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     ACPIBuildDeviceRequest @ 0x1C000AA00 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C000EAE0 (ACPIBuildProcessGenericComplete.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00111B8 (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0011404 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C0011B7C (ACPIBuildThermalZoneRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001A020 (ACPIDeviceCompleteRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0040154 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0040450 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIDispatchAddDevice @ 0x1C0099120 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
