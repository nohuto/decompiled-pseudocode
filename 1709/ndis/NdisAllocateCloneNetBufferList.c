/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0018230
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeCloneNetBufferList @ 0x1C00140C0 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBufferList @ 0x1C0015EA0 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C0018700 (NdisAllocateNetBuffer.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0018908 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004BDF0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  NDIS_HANDLE v5; // rbx
  char *v6; // rsi
  PNET_BUFFER_LIST v7; // r15
  int v8; // eax
  unsigned int Number; // r13d
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax
  char *v12; // r15
  _SLIST_HEADER *v13; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v15; // bx
  int v16; // eax
  SIZE_T DataOffset; // rdx
  PNET_BUFFER FirstNetBuffer; // r12
  _NET_BUFFER *Alignment; // rbx
  void *v20; // rsi
  struct _MDL *MdlChain; // rax
  ULONG DataLength; // r13d
  unsigned int ByteCount; // esi
  ULONG v24; // esi
  struct _MDL *v25; // r15
  char *v26; // rcx
  struct _MDL *Mdl; // rax
  ULONG v28; // r13d
  unsigned __int64 v29; // rax
  struct _MDL *Next; // rsi
  ULONG v32; // ecx
  char *v33; // rax
  struct _MDL *v34; // rax
  struct _MDL *v35; // rax
  unsigned __int64 v36; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v38; // al
  char **v39; // r8
  void ***v40; // rdx
  void **v41; // rcx
  KIRQL v42; // al
  __int64 v43; // r8
  bool v44; // zf
  _SLIST_HEADER *v45; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v47; // rax
  __int128 v48; // xmm0
  __int64 v49; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v51; // [rsp+28h] [rbp-58h]
  char v52; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 136) = AllocateCloneFlags;
  v5 = NetBufferPoolHandle;
  *(_QWORD *)(v4 + 64) = NetBufferPoolHandle;
  v6 = (char *)NetBufferListPoolHandle;
  *(_QWORD *)(v4 + 128) = OriginalNetBufferList;
  v7 = OriginalNetBufferList;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
  {
    v5 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 15);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
      return 0LL;
    }
    Number = KeGetPcr()->Prcb.Number;
    v10 = 1;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_50;
    v11 = (unsigned __int64)Number << 8;
    v12 = &v6[v11 + 384];
    if ( !v12[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v6[v11 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v6 + 128));
    v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
    ++*((_DWORD *)v12 + 5);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v13);
    if ( !NetBufferList )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
        || (v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
            v43 = *((_QWORD *)v12 + 24),
            *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
            *((_QWORD *)v12 + 25) = v43,
            KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v42),
            (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v12 + 6);
      }
    }
    if ( !NetBufferList )
    {
LABEL_50:
      ++*((_DWORD *)v6 + 37);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
      if ( !NetBufferList )
      {
        v36 = *((unsigned int *)v6 + 43);
        ++*((_DWORD *)v6 + 38);
        DataOffset = v36 + 32;
        if ( v36 + 32 < v36 )
          goto LABEL_60;
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                NonPagedPoolNx,
                                DataOffset,
                                *((_DWORD *)v6 + 42),
                                NormalPoolPriority);
        if ( PoolWithTagPriority )
        {
          NetBufferList = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
          *PoolWithTagPriority = 0LL;
          if ( PoolWithTagPriority != (_QWORD *)-32LL )
          {
            *PoolWithTagPriority = v6;
            v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
            v39 = (char **)*((_QWORD *)v6 + 2);
            v40 = (void ***)(v6 + 16);
            v41 = &NetBufferList[-1].NetBufferListInfo[27];
            if ( v39[1] != v6 + 16 )
              __fastfail(3u);
            v41[1] = v40;
            *v41 = v39;
            v39[1] = (char *)v41;
            *v40 = v41;
            KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v38);
          }
        }
        else
        {
          NetBufferList = 0LL;
        }
        v10 = 0;
        if ( !NetBufferList )
        {
LABEL_60:
          NetBufferList = 0LL;
LABEL_21:
          if ( !NetBufferList )
            return NetBufferList;
          FirstNetBuffer = NetBufferList->FirstNetBuffer;
          v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
          goto LABEL_23;
        }
      }
      LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
    }
    v15 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
    NetBufferList->NdisPoolHandle = v6;
    NetBufferList->Flags = 256;
    if ( v10 )
      WORD1(NetBufferList->NdisReserved[1]) = v15;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[32];
    v16 = *((_DWORD *)v6 + 15);
    if ( (v16 & 2) != 0 )
    {
      v44 = (v16 & 1) == 0;
      v45 = (_SLIST_HEADER *)&NetBufferList[1].NetBufferListInfo[4];
      if ( v44 )
        v45 = (_SLIST_HEADER *)&NetBufferList[1];
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)v45;
      v45->Alignment = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v6 + 17);
      NetBufferList->Context->Offset = *((_WORD *)v6 + 17);
    }
    memset(&NetBufferList[1], 0, 0xB0uLL);
    NetBufferList[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
    LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
    NetBufferList[1].NdisReserved[1] = v6;
    NetBufferList[1].Link.Region = 0LL;
    LODWORD(NetBufferList[1].Context) = 0;
    NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 3u, 0LL, 0);
    goto LABEL_21;
  }
  NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
  FirstNetBuffer = NetBuffer;
  if ( !NetBuffer )
    goto LABEL_83;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_23:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_36:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    v29 = (unsigned __int64)v7->NetBufferListInfo[10];
    if ( (v29 & 1) == 0 && (v29 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      v48 = *(_OWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      v49 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v48;
      *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v49;
      LODWORD(v49) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0xA0);
      if ( (_DWORD)v49 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)DataOffset,
          (const struct _GUID *)(v4 + 176),
          (const struct _GUID *)(v4 + 192),
          Irp,
          v51,
          1u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  v20 = *(void **)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    MdlChain = Alignment->MdlChain;
    DataLength = Alignment->DataLength;
    DataOffset = Alignment->DataOffset;
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !*(_BYTE *)v4 )
      break;
    FirstNetBuffer->MdlChain = MdlChain;
    FirstNetBuffer->Link.Region = Alignment->Link.Region;
    FirstNetBuffer->DataLength = Alignment->DataLength;
    FirstNetBuffer->DataOffset = DataOffset;
    FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
LABEL_74:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_35:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_36;
    }
LABEL_77:
    v47 = NdisAllocateNetBuffer(v20, 0LL, 0, 0LL);
    if ( !v47 )
      goto LABEL_83;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)v47;
    FirstNetBuffer = v47;
  }
  if ( !MdlChain )
    goto LABEL_74;
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( (unsigned int)DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset = (unsigned int)DataOffset - ByteCount;
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !MdlChain )
    {
      v20 = *(void **)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      goto LABEL_74;
    }
  }
  v24 = ByteCount - DataOffset;
  if ( v24 >= DataLength )
    v24 = DataLength;
  v25 = 0LL;
  if ( v24 )
  {
    v26 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)DataOffset;
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v26;
    Mdl = IoAllocateMdl(v26, v24, 0, 0, 0LL);
    v25 = Mdl;
    if ( !Mdl )
      goto LABEL_83;
    IoBuildPartialMdl(
      *(PMDL *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      Mdl,
      *(PVOID *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0),
      v24);
    MdlChain = *(struct _MDL **)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v25->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v25;
  FirstNetBuffer->MdlChain = v25;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  v28 = DataLength - v24;
  if ( !v28 || (Next = MdlChain->Next) == 0LL )
  {
LABEL_34:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_35;
    v20 = *(void **)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v32 = Next->ByteCount;
    v33 = (char *)Next->StartVa + Next->ByteOffset;
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v33;
    *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v32;
    if ( v32 > v28 )
    {
      v32 = v28;
      *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v28;
    }
    v34 = IoAllocateMdl(v33, v32, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v34;
    if ( !v34 )
      break;
    IoBuildPartialMdl(
      Next,
      v34,
      *(PVOID *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0),
      *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v35 = *(struct _MDL **)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    v25->Next = v35;
    v25 = v35;
    v35->Next = 0LL;
    v28 -= *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v28 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_34;
  }
LABEL_83:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)&v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88));
  return 0LL;
}
