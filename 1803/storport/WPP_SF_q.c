/*
 * XREFs of WPP_SF_q @ 0x1C002C118
 * Callers:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0011A40 (RaidUnitPendingDpcRoutine.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00128E0 (RaidpBuildAdapterBusRelations.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaDriverUnload @ 0x1C002CF40 (RaDriverUnload.c)
 *     StorPortReady @ 0x1C0030DD0 (StorPortReady.c)
 *     StorpFreeTimer @ 0x1C00324A0 (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C0033130 (StorpInitializeTimer.c)
 *     RaUnitAsyncNotificationWorkItemRoutine @ 0x1C003A2E0 (RaUnitAsyncNotificationWorkItemRoutine.c)
 *     RaUnitAttributeManagement @ 0x1C003A45C (RaUnitAttributeManagement.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C003A698 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitGetQOSIoctl @ 0x1C003A92C (RaUnitGetQOSIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C003AD84 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C003B374 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BD4C (RaUnitUnresponsiveAttributeMgmt.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C003C20C (RaidSyncAcpiEvalMethod.c)
 *     RaidUnitRequestTimeout @ 0x1C003D4D0 (RaidUnitRequestTimeout.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005FE64 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           0LL);
}
