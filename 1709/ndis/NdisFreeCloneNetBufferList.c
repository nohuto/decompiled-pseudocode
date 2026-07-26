/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C00140C0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00156C0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0018908 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C0019770 (NdisFreeNetBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x1C004CEC0 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  bool v3; // r12
  _DWORD *NdisPoolHandle; // r15
  __int64 v5; // r8
  __int64 v6; // r13
  __int64 v7; // r14
  PNET_BUFFER_LIST Alignment; // rsi
  void *v9; // rbx
  unsigned __int8 *SourceHandle; // rcx
  bool v11; // r14
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v15; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v17; // r14
  unsigned __int64 v18; // rax
  char *v19; // rbx
  _SLIST_HEADER *v20; // rsi
  _SLIST_HEADER *v21; // rcx
  char *v22; // r14
  char v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+18h]

  v3 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_19;
  v5 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  v23 = 0;
  v24 = 0;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    v5 = 0LL;
  }
  Alignment = CloneNetBufferList;
  do
  {
    v9 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v9 )
    {
      if ( !v9 && !Alignment->SourceHandle )
        Alignment->SourceHandle = 0LL;
      if ( ((unsigned __int8)v9 & 4) != 0 )
        goto LABEL_40;
      SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
      if ( SourceHandle )
      {
        *(_QWORD *)&FreeCloneFlags = *SourceHandle;
        if ( (unsigned __int8)(FreeCloneFlags - 17) <= 1u || (_BYTE)FreeCloneFlags == 5 )
        {
          if ( SourceHandle != (unsigned __int8 *)136 || Alignment->ParentNetBufferList )
          {
            ++v7;
            Alignment->NetBufferListInfo[27] = (void *)136;
          }
          else
          {
            ++v5;
            Alignment->NetBufferListInfo[27] = (void *)24;
            v25 = v5;
            ++v7;
          }
          goto LABEL_15;
        }
        if ( (unsigned __int8)byte_1C0098762 >= 3u )
        {
          WPP_SF_qD(12LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment, (unsigned __int8)FreeCloneFlags);
          goto LABEL_47;
        }
      }
      else if ( (unsigned __int8)byte_1C0098762 >= 3u )
      {
        WPP_SF_q(11LL, &WPP_3f0e5fb1449539a2d364d566bb0add56_Traceguids, Alignment);
LABEL_47:
        v5 = v25;
      }
LABEL_40:
      Alignment->NetBufferListInfo[27] = (void *)140;
LABEL_15:
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v9, v6 - v7, &v23, &v24);
      v5 = v25;
    }
    v6 = v7;
  }
  while ( Alignment );
LABEL_19:
  v11 = (NdisPoolHandle[15] & 1) == 0;
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
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
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v11 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v15;
    }
    while ( v15 );
  }
  Context = CloneNetBufferList->Context;
  v17 = (char *)CloneNetBufferList->NdisPoolHandle;
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
    v18 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[29]) << 8;
    v19 = &v17[v18 + 384];
    if ( !v19[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v17[v18 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v17 + 128));
    if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[29]) == KeGetPcr()->Prcb.Number )
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 24);
    else
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 25);
    ++*((_DWORD *)v19 + 7);
    if ( ExQueryDepthSList(v20) < *((_WORD *)v19 + 8) )
    {
      v21 = v20;
      goto LABEL_38;
    }
    ++*((_DWORD *)v19 + 8);
  }
  v22 = v17 + 128;
  ++*((_DWORD *)v22 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v22) >= *((_WORD *)v22 + 8) )
  {
    ++*((_DWORD *)v22 + 8);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v22 + 7))(CloneNetBufferList, v22);
  }
  else
  {
    v21 = (_SLIST_HEADER *)v22;
LABEL_38:
    ExpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)CloneNetBufferList);
  }
}
