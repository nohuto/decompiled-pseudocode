/*
 * XREFs of WPP_SF_qq @ 0x1C002C280
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0007FE0 (RaDriverDeviceControlIrp.c)
 *     RaDriverScsiIrp @ 0x1C0008520 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C00085C0 (RaUnitScsiIrp.c)
 *     RaDriverPowerIrp @ 0x1C000DBB0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C000DD20 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C000DE04 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E0E8 (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000E1DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000E2AC (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000E4AC (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C000E64C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E75C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000F014 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000F0C0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000F1A0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00105B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0010AB0 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0010B80 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0010CC0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0010D70 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0010E10 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001274C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaDriverAddDevice @ 0x1C002CCB0 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C00324A0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C00326DC (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C0033130 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00332B0 (StorpInitializeWorkItem.c)
 *     RaDriverCreateIrp @ 0x1C005E120 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C005E1D0 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0060710 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C006477C (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
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
