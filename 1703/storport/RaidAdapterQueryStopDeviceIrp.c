/*
 * XREFs of RaidAdapterQueryStopDeviceIrp @ 0x1C0064010
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C001293C (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  a2->IoStatus.Status = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 88), 3);
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      Status = a2->IoStatus.Status;
      Template_pq(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
