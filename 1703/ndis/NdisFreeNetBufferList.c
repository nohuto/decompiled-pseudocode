/*
 * XREFs of NdisFreeNetBufferList @ 0x1C0006520
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C004E7E0 (NdisFreeReassembledNetBufferList.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004F040 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004F180 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004F6B0 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C005190C (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C005512C (ndisDoLoopbackNetBufferList.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059DF8 (ndisFDoLoopbackNetBufferList.c)
 *     ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C00678C8 (-ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z.c)
 *     ndisFreePeriodicReceives @ 0x1C0068288 (ndisFreePeriodicReceives.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010A30 (NdisFreeNetBufferListContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

void __stdcall NdisFreeNetBufferList(PNET_BUFFER_LIST NetBufferList)
{
  __int64 v1; // rdx
  char *NdisPoolHandle; // r14
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  unsigned __int64 v5; // rax
  char *v6; // rdi
  _SLIST_HEADER *v7; // rsi
  _SLIST_HEADER *v8; // rcx
  char *v9; // r14

  NdisPoolHandle = (char *)NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  if ( Context && (NetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(NetBufferList, Context->Size - Context->Offset);
  NetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)NetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v1) = 1;
    WfpNblInfoCleanup(NetBufferList, v1);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(NetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v5 = (unsigned __int64)LODWORD(NetBufferList[-1].NetBufferListInfo[27]) << 8;
    v6 = &NdisPoolHandle[v5 + 384];
    if ( !v6[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v5 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
    if ( LODWORD(NetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
    else
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 25);
    ++*((_DWORD *)v6 + 7);
    if ( ExQueryDepthSList(v7) < *((_WORD *)v6 + 8) )
    {
      v8 = v7;
LABEL_15:
      ExpInterlockedPushEntrySList(v8, (PSLIST_ENTRY)NetBufferList);
      return;
    }
    ++*((_DWORD *)v6 + 8);
  }
  v9 = NdisPoolHandle + 128;
  ++*((_DWORD *)v9 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v9) < *((_WORD *)v9 + 8) )
  {
    v8 = (_SLIST_HEADER *)v9;
    goto LABEL_15;
  }
  ++*((_DWORD *)v9 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v9 + 7))(NetBufferList, v9);
}
