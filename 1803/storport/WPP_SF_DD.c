/*
 * XREFs of WPP_SF_DD @ 0x1C002C06C
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C000E2AC (RaidAdapterSetDevicePowerIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C000FDA0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidStallDeviceQueue @ 0x1C0010300 (RaidStallDeviceQueue.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00128E0 (RaidpBuildAdapterBusRelations.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005EFC0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00632F8 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0063E98 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_DD(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
