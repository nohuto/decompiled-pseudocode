/*
 * XREFs of WPP_SF_qq @ 0x1C0030BAC
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00058E0 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0007280 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007320 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C000E690 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E774 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E97C (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000EA70 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000F4E4 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000F5C0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F714 (RaidAdapterSetSystemPowerIrp.c)
 *     StorpInitializeWorkItem @ 0x1C000F89C (StorpInitializeWorkItem.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000F990 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000FA60 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000FB10 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000FBB0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000FD80 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000FE30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaDriverPowerIrp @ 0x1C0010AC0 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0010D00 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010E6C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010F4C (RaidAdapterStartDeviceIrp.c)
 *     RaDriverAddDevice @ 0x1C0011430 (RaDriverAddDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00119D8 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorpInitializeTimer @ 0x1C001B900 (StorpInitializeTimer.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C001C9B0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     StorpFreeTimer @ 0x1C0035180 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00353BC (StorpFreeWorkItem.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003C584 (RaUnitRemoveDeviceIrp.c)
 *     RaDriverCloseIrp @ 0x1C005F710 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005F7C0 (RaDriverCreateIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0063B60 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C0067818 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
