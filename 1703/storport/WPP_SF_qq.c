/*
 * XREFs of WPP_SF_qq @ 0x1C0030534
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C00050C0 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0006EF0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0006F90 (RaUnitScsiIrp.c)
 *     RaUnitPowerIrp @ 0x1C000E39C (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E684 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000EE68 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C000EF40 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F0A8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C000F2B0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000F390 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C000F440 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C000F4E0 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     StorpInitializeWorkItem @ 0x1C000FD08 (StorpInitializeWorkItem.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00115E0 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaDriverPowerIrp @ 0x1C0011A80 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011CC0 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E30 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011F10 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaDriverAddDevice @ 0x1C0019B00 (RaDriverAddDevice.c)
 *     StorpInitializeTimer @ 0x1C001B9E4 (StorpInitializeTimer.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C001BFF0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     StorpFreeTimer @ 0x1C0034038 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003426C (StorpFreeWorkItem.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C003A840 (RaUnitRemoveDeviceIrp.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaDriverCloseIrp @ 0x1C005D760 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C005D810 (RaDriverCreateIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C00617A0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterScsiIrp @ 0x1C00642D4 (RaidAdapterScsiIrp.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
