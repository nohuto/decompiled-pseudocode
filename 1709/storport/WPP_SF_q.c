/*
 * XREFs of WPP_SF_q @ 0x1C0030A44
 * Callers:
 *     StorpRequestTimer @ 0x1C000E0A8 (StorpRequestTimer.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012570 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0014CDC (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C001AF90 (RaidUnitPendingDpcRoutine.c)
 *     StorpInitializeTimer @ 0x1C001B900 (StorpInitializeTimer.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C001D0BC (RaidSyncAcpiEvalMethod.c)
 *     RaDriverUnload @ 0x1C0031340 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0034310 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C0035180 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C003BA40 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C003BBBC (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003BDF8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C003C1C0 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003C758 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003CD54 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003D888 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C003EF68 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0060E2C (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
