/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x1C0011140
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C0010990 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C0008B30 (NdisFreeNetBuffer.c)
 *     ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C00113E0 (-ndisFreeMdl@@YAXPEAU_MDL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     NdisFreeNetBufferListContext @ 0x1C004D830 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  ULONG v3; // edi
  bool v5; // r12
  _NET_BUFFER *FirstNetBuffer; // rbx
  struct _MDL *MdlChain; // rcx
  struct _MDL *v8; // r8
  struct _MDL *v9; // rax
  unsigned int DataOffset; // eax
  _NET_BUFFER *v11; // rbx
  struct _MDL *v12; // rcx
  struct _MDL *Next; // rdi
  _NET_BUFFER *Alignment; // r15
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  char *v19; // rbx
  _SLIST_HEADER *v20; // rdi
  _SLIST_HEADER *v21; // rcx
  char *NdisPoolHandle; // r13
  unsigned int SharedMemoryInfo; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  _SLIST_HEADER *v26; // r14
  char *v27; // r14
  char *v28; // r13
  _MDL *v29; // rcx

  FragmentNetBufferList->Link.Alignment = 0LL;
  v3 = DataOffsetDelta;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(FragmentNetBufferList, 0LL, 0x98uLL, 8LL, 0);
  v5 = (*((_DWORD *)FragmentNetBufferList->NdisPoolHandle + 15) & 1) == 0;
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      MdlChain = FirstNetBuffer->MdlChain;
      FirstNetBuffer->DataOffset += v3;
      v8 = MdlChain;
      FirstNetBuffer->DataLength -= v3;
      if ( MdlChain )
      {
        v9 = MdlChain;
        do
        {
          *(_QWORD *)&DataOffsetDelta = FirstNetBuffer->DataOffset;
          v8 = v9;
          if ( MdlChain->ByteCount > DataOffsetDelta )
            break;
          if ( MdlChain == (struct _MDL *)&FirstNetBuffer[1] )
            break;
          FirstNetBuffer->MdlChain = MdlChain->Next;
          FirstNetBuffer->DataOffset = DataOffsetDelta - MdlChain->ByteCount;
          ndisFreeMdl(MdlChain);
          MdlChain = FirstNetBuffer->MdlChain;
          v9 = MdlChain;
          v8 = MdlChain;
        }
        while ( MdlChain );
      }
      DataOffset = FirstNetBuffer->DataOffset;
      FirstNetBuffer->Link.Region = (unsigned __int64)v8;
      FirstNetBuffer->CurrentMdlOffset = DataOffset;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    v11 = FragmentNetBufferList->FirstNetBuffer;
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v11->MdlChain;
        if ( v12 )
        {
          do
          {
            Next = v12->Next;
            IoFreeMdl(v12);
            v12 = Next;
          }
          while ( Next );
        }
        Alignment = (_NET_BUFFER *)v11->Link.Alignment;
        if ( v11 == FragmentNetBufferList->FirstNetBuffer )
        {
          if ( v5 )
            NdisFreeNetBuffer(v11);
          goto LABEL_16;
        }
        NdisPoolHandle = (char *)v11->NdisPoolHandle;
        if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
        {
          v29 = v11->MdlChain;
          if ( (v29->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages(v29->MappedSystemVa, v11->MdlChain);
        }
        if ( ndisMaxNumberOfProcessors == 1 )
          goto LABEL_44;
        SharedMemoryInfo = (unsigned int)v11[-1].SharedMemoryInfo;
        v24 = (unsigned __int64)SharedMemoryInfo << 8;
        v25 = (unsigned __int64)&NdisPoolHandle[v24 + 384];
        if ( !*(_BYTE *)(v25 + 216) )
        {
          ndisPplLazyInitializeLookaside(
            (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v24 + 384],
            (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
          SharedMemoryInfo = (unsigned int)v11[-1].SharedMemoryInfo;
        }
        v26 = SharedMemoryInfo == KeGetPcr()->Prcb.Number
            ? *(_SLIST_HEADER **)(v25 + 192)
            : *(_SLIST_HEADER **)(v25 + 200);
        ++*(_DWORD *)(v25 + 28);
        if ( ExQueryDepthSList(v26) >= *(_WORD *)(v25 + 16) )
          break;
        ExpInterlockedPushEntrySList(v26, (PSLIST_ENTRY)v11);
LABEL_16:
        v11 = Alignment;
        if ( !Alignment )
          goto LABEL_17;
      }
      ++*(_DWORD *)(v25 + 32);
LABEL_44:
      v28 = NdisPoolHandle + 128;
      ++*((_DWORD *)v28 + 7);
      if ( ExQueryDepthSList((PSLIST_HEADER)v28) >= *((_WORD *)v28 + 8) )
      {
        ++*((_DWORD *)v28 + 8);
        (*((void (__fastcall **)(_NET_BUFFER *, char *))v28 + 7))(v11, v28);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v28, (PSLIST_ENTRY)v11);
      }
      goto LABEL_16;
    }
  }
LABEL_17:
  Context = FragmentNetBufferList->Context;
  v16 = (char *)FragmentNetBufferList->NdisPoolHandle;
  if ( Context && (FragmentNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(FragmentNetBufferList, Context->Size - Context->Offset);
  FragmentNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)FragmentNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(DataOffsetDelta) = 1;
    WfpNblInfoCleanup(FragmentNetBufferList, *(_QWORD *)&DataOffsetDelta);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(FragmentNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v17 = (unsigned int)FragmentNetBufferList[-1].NetBufferListInfo[29];
    v18 = (unsigned __int64)v17 << 8;
    v19 = &v16[v18 + 384];
    if ( !v19[216] )
    {
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v16[v18 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v16 + 128));
      v17 = (unsigned int)FragmentNetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v17 == KeGetPcr()->Prcb.Number )
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 24);
    else
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 25);
    ++*((_DWORD *)v19 + 7);
    if ( ExQueryDepthSList(v20) < *((_WORD *)v19 + 8) )
    {
      v21 = v20;
LABEL_29:
      ExpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)FragmentNetBufferList);
      return;
    }
    ++*((_DWORD *)v19 + 8);
  }
  v27 = v16 + 128;
  ++*((_DWORD *)v27 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v27) < *((_WORD *)v27 + 8) )
  {
    v21 = (_SLIST_HEADER *)v27;
    goto LABEL_29;
  }
  ++*((_DWORD *)v27 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v27 + 7))(FragmentNetBufferList, v27);
}
