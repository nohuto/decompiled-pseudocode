/*
 * XREFs of RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006088C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00122A4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      McTemplateK0pq(v4, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}
