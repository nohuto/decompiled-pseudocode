/*
 * XREFs of WPP_SF_ @ 0x1C0030340
 * Callers:
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 *     RaidResumeIoQueue @ 0x1C000D2E4 (RaidResumeIoQueue.c)
 *     StorpAcquireMSISpinLock @ 0x1C000DE50 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C000DEF0 (StorpReleaseMSISpinLock.c)
 *     StorpInitializeWorkItem @ 0x1C000FD08 (StorpInitializeWorkItem.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001096C (RaidAdapterConnectInterrupt.c)
 *     RaCallMiniportFindAdapter @ 0x1C0010DCC (RaCallMiniportFindAdapter.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012C00 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpInitializeTimer @ 0x1C001B9E4 (StorpInitializeTimer.c)
 *     StorpAllocatePool @ 0x1C001BAB8 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C001BE0C (StorpGetMSIInfo.c)
 *     RaidGetStartIoPerfParams @ 0x1C001C3B0 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C001CAF4 (RaidInitializePerfOpts.c)
 *     SrbShimHookDeviceControl @ 0x1C001E160 (SrbShimHookDeviceControl.c)
 *     StorpAllocateMdl @ 0x1C0033B4C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C0033C80 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C0033D24 (StorpBuildScatterGatherList.c)
 *     StorpFreeMdl @ 0x1C0033F94 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C0034038 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003426C (StorpFreeWorkItem.c)
 *     StorpGetDataInSgList @ 0x1C00344B8 (StorpGetDataInSgList.c)
 *     StorpGetExtendedTable @ 0x1C0034534 (StorpGetExtendedTable.c)
 *     StorpGetOriginalMdl @ 0x1C00346F0 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C003480C (StorpGetSystemAddress.c)
 *     StorpPutScatterGatherList @ 0x1C0034AB8 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C0034BB8 (StorpQueueWorkItem.c)
 *     RaUnitRequestPowerDown @ 0x1C00357F4 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0035928 (RaUnitRequestPowerUp.c)
 *     StorWaitForSingleObject @ 0x1C0039BBC (StorWaitForSingleObject.c)
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 *     DeviceIdShimHookDeviceControl @ 0x1C0046650 (DeviceIdShimHookDeviceControl.c)
 *     SrbShimStorageAdapterPropertyCompletionHook @ 0x1C0046A20 (SrbShimStorageAdapterPropertyCompletionHook.c)
 *     RaidAdapterReleaseResources @ 0x1C00640B0 (RaidAdapterReleaseResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
