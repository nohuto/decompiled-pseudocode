/*
 * XREFs of RaidAdapterCancelRemoveDeviceIrp @ 0x1C00628B4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00104D0 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 */

NTSTATUS __fastcall RaidAdapterCancelRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 1);
  a2->IoStatus.Status = 0;
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pq(v4, &EventPnpRequestComplete, &v7, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
