/*
 * XREFs of WPP_SF_ @ 0x1C002BFFC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidResumeIoQueue @ 0x1C0003BC4 (RaidResumeIoQueue.c)
 *     StorpAllocatePool @ 0x1C0010C60 (StorpAllocatePool.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00128E0 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidGetStartIoPerfParams @ 0x1C0017150 (RaidGetStartIoPerfParams.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0025920 (RaidAdapterConnectInterrupt.c)
 *     RaidInitializePerfOpts @ 0x1C002A6A4 (RaidInitializePerfOpts.c)
 *     RaCallMiniportFindAdapter @ 0x1C002E8E0 (RaCallMiniportFindAdapter.c)
 *     StorEnablePassiveInitialization @ 0x1C002F9CC (StorEnablePassiveInitialization.c)
 *     StorpAcquireMSISpinLock @ 0x1C0031750 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C0031F4C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0032080 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C0032124 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C00323FC (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C00324A0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00326DC (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C0032928 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C00329A4 (StorpGetExtendedTable.c)
 *     StorpGetMSIInfo @ 0x1C0032B60 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C0032C48 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C0032FBC (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C0033130 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00332B0 (StorpInitializeWorkItem.c)
 *     StorpPutScatterGatherList @ 0x1C0033558 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0033658 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0033788 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C00349AC (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0034AD0 (RaUnitRequestPowerUp.c)
 *     StorWaitForSingleObject @ 0x1C0039F6C (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C003D4D0 (RaidUnitRequestTimeout.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0047390 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimHookDeviceControl @ 0x1C0047760 (SrbShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0047840 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C0064554 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
