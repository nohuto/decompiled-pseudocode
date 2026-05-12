/*
 * XREFs of WPP_SF_q @ 0x1C00303C8
 * Callers:
 *     StorpRequestTimer @ 0x1C000C9F4 (StorpRequestTimer.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C0012C00 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 *     StorpInitializeTimer @ 0x1C001B9E4 (StorpInitializeTimer.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C001DD3C (RaidSyncAcpiEvalMethod.c)
 *     RaDriverUnload @ 0x1C0030C50 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C00331C0 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C0034038 (StorpFreeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0039CF0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C0039E6C (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003A0A8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A494 (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AA14 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B010 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BF80 (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidUnitRequestTimeout @ 0x1C003E02C (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005EAB0 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
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
