/*
 * XREFs of Template_pq @ 0x1C002FB54
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0003EE4 (RaUnitAtaPassThroughIoctl.c)
 *     StorPortNotification @ 0x1C0005A70 (StorPortNotification.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001253C (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0012A74 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C002CBD8 (RaidAdapterQueryIdIrp.c)
 *     RaidpLinkUp @ 0x1C0032184 (RaidpLinkUp.c)
 *     StorPortResume @ 0x1C00333F0 (StorPortResume.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C005D0E0 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C005DD1C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C005E46C (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0063C98 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0063F70 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0064010 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0064338 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C0064F74 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00650BC (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS Template_pq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  va_copy(v5, va1);
  v7 = 0;
  v6 = 4;
  return EtwWrite(Microsoft_Windows_StorPortHandle, a2, a3, 2u, &v4);
}
