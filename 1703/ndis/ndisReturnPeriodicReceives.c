/*
 * XREFs of ndisReturnPeriodicReceives @ 0x1C00284F8
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001008 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001480 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002930 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C00051B0 (NdisReturnNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0068A50 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00692B0 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0006520 (NdisFreeNetBufferList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0054984 (ExFreeToNPagedLookasideList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  _QWORD *p_Alignment; // r14
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  _MDL *CurrentMdl; // rsi

  v2 = 0LL;
  p_Alignment = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      v4->Link.Alignment = 0LL;
      if ( v4->NdisPoolHandle == WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 3240));
        FirstNetBuffer = v4->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v4);
      }
      else
      {
        if ( v2 )
          *p_Alignment = v4;
        else
          v2 = v4;
        p_Alignment = &v4->Link.Alignment;
      }
      v4 = Alignment;
    }
    while ( Alignment );
  }
  return v2;
}
