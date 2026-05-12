/*
 * XREFs of WPP_SF_ @ 0x1C003096C
 * Callers:
 *     RaidResumeIoQueue @ 0x1C0002060 (RaidResumeIoQueue.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 *     StorpInitializeWorkItem @ 0x1C000F89C (StorpInitializeWorkItem.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012570 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014CDC (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001A11C (RaidAdapterConnectInterrupt.c)
 *     RaCallMiniportFindAdapter @ 0x1C001A5F4 (RaCallMiniportFindAdapter.c)
 *     StorpInitializeTimer @ 0x1C001B900 (StorpInitializeTimer.c)
 *     StorpAllocatePool @ 0x1C001B9D4 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C001C920 (StorpGetMSIInfo.c)
 *     RaidGetStartIoPerfParams @ 0x1C001CD70 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C001DA14 (RaidInitializePerfOpts.c)
 *     SrbShimHookDeviceControl @ 0x1C001EC70 (SrbShimHookDeviceControl.c)
 *     StorpAcquireMSISpinLock @ 0x1C0034880 (StorpAcquireMSISpinLock.c)
 *     StorpAllocateMdl @ 0x1C0034C98 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0034DCC (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C0034E70 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C00350DC (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0035180 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00353BC (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C0035608 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C0035684 (StorpGetExtendedTable.c)
 *     StorpGetOriginalMdl @ 0x1C0035840 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C0035B88 (StorpGetSystemAddress.c)
 *     StorpPutScatterGatherList @ 0x1C0035E34 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0035F34 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C0036064 (StorpReleaseMSISpinLock.c)
 *     RaUnitRequestPowerDown @ 0x1C00374A8 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C00375DC (RaUnitRequestPowerUp.c)
 *     StorWaitForSingleObject @ 0x1C003B6CC (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C003EF68 (RaidUnitRequestTimeout.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0046F80 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0047350 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C00675F0 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           0LL);
}
