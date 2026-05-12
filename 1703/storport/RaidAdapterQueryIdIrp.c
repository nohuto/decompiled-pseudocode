/*
 * XREFs of RaidAdapterQueryIdIrp @ 0x1C002CBD8
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C001293C (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryIdIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( StorEtwLoggingEnabled )
  {
    v6[0] = 0LL;
    v6[1] = 0LL;
    IoGetActivityIdIrp(a2, v6);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
      Template_pq(v4, &EventPnpRequestComplete, v6, a2, a2->IoStatus.Status);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
