/*
 * XREFs of NdisFreeReassembledNetBufferList @ 0x1C004D9C0
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004D0B0 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     NdisAdvanceNetBufferListDataStart @ 0x1C004CEC0 (NdisAdvanceNetBufferListDataStart.c)
 */

void __stdcall NdisFreeReassembledNetBufferList(
        PNET_BUFFER_LIST ReassembledNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeReassembleFlags)
{
  struct _MDL *v4; // rcx
  struct _MDL *Next; // rbx

  NdisAdvanceNetBufferListDataStart(
    ReassembledNetBufferList,
    DataOffsetDelta,
    1u,
    (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
  v4 = *(struct _MDL **)(ReassembledNetBufferList->Link.Region + 32);
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      IoFreeMdl(v4);
      v4 = Next;
    }
    while ( Next );
  }
  NdisFreeNetBufferList(ReassembledNetBufferList);
}
