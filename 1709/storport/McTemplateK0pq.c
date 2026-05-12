/*
 * XREFs of McTemplateK0pq @ 0x1C002B808
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003E90 (RaUnitAtaPassThroughIoctl.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0011EA4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00123E4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002DB58 (RaidAdapterQueryIdIrp.c)
 *     RaidpLinkUp @ 0x1C003325C (RaidpLinkUp.c)
 *     StorPortResume @ 0x1C0034540 (StorPortResume.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005F0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006006C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006088C (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0065DEC (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C00674B0 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0067550 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C006787C (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00684A0 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00685E8 (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0003DBC (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWriteKM(a1, a2, a3, 3u, &v4);
}
