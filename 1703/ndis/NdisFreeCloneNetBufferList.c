/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0006260
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000DBB0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C00105E0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010A30 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012B34 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00282F0 (-ndisNblTrackerCanNblBeTracked@@YA_NPEAU_NET_BUFFER_LIST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  ULONG v3; // r13d
  enum _NDIS_NBL_TRACKER_MODE v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  PNET_BUFFER_LIST Alignment; // rdi
  void *v10; // rbx
  _NET_BUFFER *FirstNetBuffer; // rdi
  bool v12; // si
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v15; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *NdisPoolHandle; // rsi
  unsigned __int64 v18; // rax
  char *v19; // rbx
  _SLIST_HEADER *v20; // rdi
  _SLIST_HEADER *v21; // rcx
  char v22; // [rsp+70h] [rbp+0h] BYREF

  v2 = (_BYTE *)((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = FreeCloneFlags & 2;
  *(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v5 = ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    *(_BYTE *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    *v2 = 0;
    if ( v5 >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    Alignment = CloneNetBufferList;
    do
    {
      v10 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v10 )
          break;
        if ( !v10 && !Alignment->SourceHandle )
          Alignment->SourceHandle = 0LL;
        if ( ((unsigned __int8)v10 & 4) != 0 || !ndisNblTrackerCanNblBeTracked(Alignment) )
        {
          Alignment->NetBufferListInfo[26] = (void *)140;
        }
        else if ( Alignment->SourceHandle != (void *)136 || Alignment->ParentNetBufferList )
        {
          ++v6;
          Alignment->NetBufferListInfo[26] = (void *)136;
        }
        else
        {
          ++v8;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v6;
        }
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( ((unsigned __int8)v10 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v10, v7 - v6, v2 + 1, (unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL);
      v7 = v6;
    }
    while ( Alignment );
  }
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  v12 = (*(_BYTE *)(*(_QWORD *)(((unsigned __int64)&v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 60LL) & 1) == 0;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v3 )
      {
        MdlChain = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          do
          {
            Next = MdlChain->Next;
            IoFreeMdl(MdlChain);
            MdlChain = Next;
          }
          while ( Next );
        }
      }
      v15 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v12 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v15;
    }
    while ( v15 );
  }
  Context = CloneNetBufferList->Context;
  NdisPoolHandle = (char *)CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(FreeCloneFlags) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, *(_QWORD *)&FreeCloneFlags);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v18 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v19 = &NdisPoolHandle[v18 + 384];
    if ( !v19[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v18 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
    if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 24);
    else
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 25);
    ++*((_DWORD *)v19 + 7);
    if ( ExQueryDepthSList(v20) < *((_WORD *)v19 + 8) )
    {
      v21 = v20;
      goto LABEL_48;
    }
    ++*((_DWORD *)v19 + 8);
  }
  ++*((_DWORD *)NdisPoolHandle + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) >= *((_WORD *)NdisPoolHandle + 72) )
  {
    ++*((_DWORD *)NdisPoolHandle + 40);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))NdisPoolHandle + 23))(CloneNetBufferList, NdisPoolHandle + 128);
    return;
  }
  v21 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
LABEL_48:
  ExpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)CloneNetBufferList);
}
