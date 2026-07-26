/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0004860
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0003920 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C00045B0 (NdisAllocateNetBuffer.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0005410 (NdisFreeCloneNetBufferList.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004CD80 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  struct _NDIS_NET_BUFFER_POOL *v5; // rbx
  char *v6; // r14
  PNET_BUFFER_LIST v7; // r13
  int v8; // eax
  unsigned int Number; // ebx
  unsigned int v10; // r12d
  bool v11; // zf
  unsigned __int64 v12; // rax
  char *v13; // r15
  _SLIST_HEADER *v14; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rdi
  __int16 v16; // bx
  int v17; // eax
  SIZE_T v18; // rdx
  PNET_BUFFER FirstNetBuffer; // r14
  _NET_BUFFER *Alignment; // rbx
  void *v21; // r13
  unsigned int DataLength; // r12d
  unsigned int DataOffset; // r8d
  struct _MDL *MdlChain; // r15
  ULONG ByteCount; // eax
  ULONG v26; // eax
  _MDL *v27; // r13
  char *v28; // rcx
  struct _MDL *Mdl; // rax
  ULONG v30; // r12d
  unsigned __int64 v31; // rax
  struct _MDL *Next; // r14
  ULONG v34; // eax
  char *v35; // r15
  struct _MDL *v36; // rax
  struct _MDL *v37; // rax
  unsigned __int64 v38; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v40; // al
  char **v41; // r8
  void ***v42; // rdx
  void **v43; // rcx
  KIRQL v44; // al
  __int64 v45; // r8
  __int64 v46; // rax
  PNET_BUFFER NetBuffer; // rax
  __int128 v48; // xmm0
  __int64 v49; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v51; // [rsp+28h] [rbp-58h]
  _BYTE v52[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 8) = AllocateCloneFlags;
  v5 = (struct _NDIS_NET_BUFFER_POOL *)NetBufferPoolHandle;
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
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
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
    v11 = ndisMaxNumberOfProcessors == 1;
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = Number;
    if ( !v11 )
    {
      v12 = (unsigned __int64)Number << 8;
      v13 = &v6[v12 + 384];
      if ( !v13[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&v6[v12 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v6 + 128));
      v14 = (_SLIST_HEADER *)*((_QWORD *)v13 + 24);
      ++*((_DWORD *)v13 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v14);
      if ( !NetBufferList )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v13 + 25)) < 0xAu
          || (v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 26),
              v45 = *((_QWORD *)v13 + 24),
              *((_QWORD *)v13 + 24) = *((_QWORD *)v13 + 25),
              *((_QWORD *)v13 + 25) = v45,
              KeReleaseSpinLock((PKSPIN_LOCK)v13 + 26, v44),
              (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v13 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v13 + 6);
        }
      }
      if ( NetBufferList )
        goto LABEL_14;
      Number = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    }
    ++*((_DWORD *)v6 + 37);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
    if ( !NetBufferList )
    {
      v38 = *((unsigned int *)v6 + 43);
      ++*((_DWORD *)v6 + 38);
      v18 = v38 + 32;
      if ( v38 + 32 < v38 )
        goto LABEL_61;
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v18, *((_DWORD *)v6 + 42), NormalPoolPriority);
      if ( PoolWithTagPriority )
      {
        NetBufferList = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
        *PoolWithTagPriority = 0LL;
        if ( PoolWithTagPriority != (_QWORD *)-32LL )
        {
          *PoolWithTagPriority = v6;
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
          v41 = (char **)*((_QWORD *)v6 + 2);
          v42 = (void ***)(v6 + 16);
          v43 = &NetBufferList[-1].NetBufferListInfo[27];
          if ( v41[1] != v6 + 16 )
            __fastfail(3u);
          v43[1] = v42;
          *v43 = v41;
          v41[1] = (char *)v43;
          *v42 = v43;
          KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v40);
        }
      }
      else
      {
        NetBufferList = 0LL;
      }
      v10 = 0;
      if ( !NetBufferList )
      {
LABEL_61:
        NetBufferList = 0LL;
LABEL_21:
        if ( !NetBufferList )
          return NetBufferList;
        FirstNetBuffer = NetBufferList->FirstNetBuffer;
        goto LABEL_23;
      }
    }
    LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
LABEL_14:
    v16 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * (v10 ^ 1LL) + 368);
    NetBufferList->NdisPoolHandle = v6;
    NetBufferList->Flags = 256;
    if ( v10 )
      WORD1(NetBufferList->NdisReserved[1]) = v16;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[32];
    v17 = *((_DWORD *)v6 + 15);
    if ( (v17 & 2) != 0 )
    {
      v11 = (v17 & 1) == 0;
      v46 = 560LL;
      if ( v11 )
        v46 = 384LL;
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v46);
      *(unsigned __int64 *)((char *)&NetBufferList->Link.Alignment + v46) = 0LL;
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
    goto LABEL_76;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_23:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_36:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    v31 = (unsigned __int64)v7->NetBufferListInfo[10];
    if ( (v31 & 1) == 0 && (v31 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      v48 = *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      v49 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v48;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v49;
      LODWORD(v49) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0);
      if ( (_DWORD)v49 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)v18,
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
  v21 = *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    DataLength = Alignment->DataLength;
    DataOffset = Alignment->DataOffset;
    MdlChain = Alignment->MdlChain;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
    if ( *(_BYTE *)v4 )
    {
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_35;
      FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
      if ( !FirstNetBuffer )
        goto LABEL_76;
      goto LABEL_82;
    }
    if ( MdlChain )
      break;
LABEL_80:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_35:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_36;
    }
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_76;
LABEL_82:
    **(_QWORD **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = FirstNetBuffer;
  }
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset -= ByteCount;
    if ( !MdlChain )
      goto LABEL_80;
  }
  v26 = ByteCount - DataOffset;
  v18 = DataLength;
  v27 = 0LL;
  if ( v26 < DataLength )
    v18 = v26;
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v18;
  if ( (_DWORD)v18 )
  {
    v28 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + DataOffset;
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v28;
    Mdl = IoAllocateMdl(v28, v18, 0, 0, 0LL);
    v27 = Mdl;
    if ( !Mdl )
      goto LABEL_76;
    IoBuildPartialMdl(
      MdlChain,
      Mdl,
      *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0),
      *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
    v18 = *(unsigned int *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v27->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v27;
  FirstNetBuffer->MdlChain = v27;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  v30 = DataLength - v18;
  if ( !v30 || (Next = MdlChain->Next) == 0LL )
  {
LABEL_34:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_35;
    v21 = *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    FirstNetBuffer = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !FirstNetBuffer )
      goto LABEL_76;
    goto LABEL_82;
  }
  while ( 1 )
  {
    v34 = Next->ByteCount;
    v35 = (char *)Next->StartVa + Next->ByteOffset;
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v34;
    if ( v34 > v30 )
    {
      v34 = v30;
      *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v30;
    }
    v36 = IoAllocateMdl(v35, v34, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v36;
    if ( !v36 )
      break;
    IoBuildPartialMdl(Next, v36, v35, *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4));
    v37 = *(struct _MDL **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
    v27->Next = v37;
    v27 = v37;
    v37->Next = 0LL;
    v30 -= *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( v30 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_34;
  }
LABEL_76:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  return 0LL;
}
