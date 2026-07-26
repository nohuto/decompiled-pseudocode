/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C0017D10
 * Callers:
 *     <none>
 * Callees:
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  NDIS_PORT_NUMBER v5; // r11d
  NDIS_HANDLE v7; // r10
  __int64 v8; // rdx
  int v9; // r8d

  v5 = PortNumber;
  v7 = NdisFilterHandle;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, NumberOfNetBufferLists);
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v7 + 80))(
    v7,
    NetBufferLists,
    v5,
    *(_QWORD *)&NumberOfNetBufferLists,
    ReceiveFlags);
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( (ReceiveFlags & 2) != 0 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, v8, v9);
  }
}
