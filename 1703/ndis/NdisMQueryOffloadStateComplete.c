/*
 * XREFs of NdisMQueryOffloadStateComplete @ 0x1C0066B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMQueryOffloadStateComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 808LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
