/*
 * XREFs of NdisMUpdateOffloadComplete @ 0x1C0067F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMUpdateOffloadComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 792LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
