/*
 * XREFs of NdisMCoSendNetBufferListsComplete @ 0x1C0053920
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0052670 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoSendNetBufferListsComplete(
        NDIS_HANDLE NdisVcHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG SendCompleteFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 32))(
    NdisVcHandle,
    NetBufferLists,
    SendCompleteFlags);
}
