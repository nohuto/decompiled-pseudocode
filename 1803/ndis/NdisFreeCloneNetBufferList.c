/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0005410
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0004860 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C0008B30 (NdisFreeNetBuffer.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00253A8 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     NdisFreeNetBufferListContext @ 0x1C004D830 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  __int64 v2; // r9
  _BYTE *v3; // rbp
  void *NdisPoolHandle; // rax
  ULONG v5; // r12d
  enum _NDIS_NBL_TRACKER_MODE v7; // eax
  _NET_BUFFER *FirstNetBuffer; // rsi
  bool v9; // r14
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v12; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v14; // r14
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  char *v17; // rbx
  _SLIST_HEADER *v18; // rsi
  _SLIST_HEADER *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r15
  PNET_BUFFER_LIST Alignment; // rsi
  void *v24; // rbx
  unsigned __int8 *SourceHandle; // rcx
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  char v28; // [rsp+70h] [rbp+0h] BYREF

  v3 = (_BYTE *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL);
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  CloneNetBufferList->Link.Alignment = 0LL;
  v5 = FreeCloneFlags & 2;
  *(_QWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = NdisPoolHandle;
  v7 = ndisNblTrackerMode;
  if ( ndisNblTrackerMode == NdisTrackNblDisabled )
    goto LABEL_2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_BYTE *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
  *v3 = 0;
  if ( v7 >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
  Alignment = CloneNetBufferList;
  while ( 2 )
  {
    v24 = Alignment->NetBufferListInfo[27];
    while ( Alignment->NetBufferListInfo[27] == v24 )
    {
      if ( !v24 && !Alignment->SourceHandle )
        Alignment->SourceHandle = 0LL;
      if ( ((unsigned __int8)v24 & 4) == 0 )
      {
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          v26 = *SourceHandle;
          if ( (unsigned __int8)(*SourceHandle - 17) <= 1u || v26 == 5 )
          {
            if ( SourceHandle != (unsigned __int8 *)136 || Alignment->ParentNetBufferList )
            {
              ++v21;
              v27 = 136LL;
            }
            else
            {
              ++v20;
              v27 = 24LL;
              ++v21;
            }
            goto LABEL_35;
          }
          if ( (unsigned __int8)byte_1C0099622 >= 3u )
            WPP_SF_qD(12LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v26);
        }
        else if ( (unsigned __int8)byte_1C0099622 >= 3u )
        {
          WPP_SF_q(11LL, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, Alignment, v2);
        }
      }
      v27 = 140LL;
LABEL_35:
      Alignment->NetBufferListInfo[27] = (void *)v27;
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      if ( !Alignment )
        break;
    }
    if ( ((unsigned __int8)v24 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v24, v22 - v21, v3 + 1, (unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL);
    v22 = v21;
    if ( Alignment )
      continue;
    break;
  }
LABEL_2:
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  v9 = (*(_BYTE *)(*(_QWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 60LL) & 1) == 0;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v5 )
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
      v12 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v9 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v12;
    }
    while ( v12 );
  }
  Context = CloneNetBufferList->Context;
  v14 = (char *)CloneNetBufferList->NdisPoolHandle;
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
    v15 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    v16 = (unsigned __int64)v15 << 8;
    v17 = &v14[v16 + 384];
    if ( !v17[216] )
    {
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v14[v16 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v14 + 128));
      v15 = (unsigned int)CloneNetBufferList[-1].NetBufferListInfo[29];
    }
    if ( v15 == KeGetPcr()->Prcb.Number )
      v18 = (_SLIST_HEADER *)*((_QWORD *)v17 + 24);
    else
      v18 = (_SLIST_HEADER *)*((_QWORD *)v17 + 25);
    ++*((_DWORD *)v17 + 7);
    if ( ExQueryDepthSList(v18) < *((_WORD *)v17 + 8) )
    {
      v19 = v18;
      goto LABEL_21;
    }
    ++*((_DWORD *)v17 + 8);
  }
  ++*((_DWORD *)v14 + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)v14 + 8) >= *((_WORD *)v14 + 72) )
  {
    ++*((_DWORD *)v14 + 40);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v14 + 23))(CloneNetBufferList, v14 + 128);
  }
  else
  {
    v19 = (_SLIST_HEADER *)(v14 + 128);
LABEL_21:
    ExpInterlockedPushEntrySList(v19, (PSLIST_ENTRY)CloneNetBufferList);
  }
}
