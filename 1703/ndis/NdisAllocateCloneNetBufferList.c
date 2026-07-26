/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C000DBB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006260 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C000E090 (NdisAllocateNetBuffer.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004E2A0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
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
  PNET_BUFFER_LIST v7; // rdi
  int v8; // eax
  unsigned int Number; // r12d
  int v10; // r15d
  unsigned __int64 v11; // rax
  char *v12; // rdi
  _SLIST_HEADER *v13; // rcx
  PSLIST_ENTRY v14; // rbx
  __int16 v15; // di
  size_t v16; // r8
  int v17; // eax
  PNET_BUFFER_LIST NetBufferList; // r15
  SIZE_T DataOffset; // rdx
  _NET_BUFFER *FirstNetBuffer; // r12
  _NET_BUFFER *Alignment; // rbx
  void *v22; // rdi
  struct _MDL *MdlChain; // rax
  ULONG DataLength; // r13d
  unsigned int ByteCount; // edi
  ULONG v26; // edi
  struct _MDL *v27; // r14
  char *v28; // rcx
  struct _MDL *Mdl; // rax
  ULONG v30; // r13d
  struct _MDL *Next; // rdi
  ULONG v33; // ecx
  char *v34; // rax
  struct _MDL *v35; // rax
  struct _MDL *v36; // rax
  unsigned __int64 v37; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v39; // al
  __int64 v40; // r8
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  KIRQL v43; // al
  __int64 v44; // r8
  bool v45; // zf
  _SLIST_ENTRY *v46; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v52; // [rsp+28h] [rbp-58h]
  char v53; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 136) = AllocateCloneFlags;
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
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
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
      goto LABEL_53;
    v11 = (unsigned __int64)Number << 8;
    v12 = &v6[v11 + 384];
    if ( !v12[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v6[v11 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v6 + 128));
    v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
    ++*((_DWORD *)v12 + 5);
    v14 = ExpInterlockedPopEntrySList(v13);
    if ( !v14 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
        || (v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
            v44 = *((_QWORD *)v12 + 24),
            *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
            *((_QWORD *)v12 + 25) = v44,
            KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v43),
            (v14 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v12 + 6);
      }
    }
    if ( !v14 )
    {
LABEL_53:
      ++*((_DWORD *)v6 + 37);
      v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
      if ( !v14 )
      {
        v37 = *((unsigned int *)v6 + 43);
        ++*((_DWORD *)v6 + 38);
        DataOffset = v37 + 32;
        if ( v37 + 32 < v37 )
          goto LABEL_68;
        PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                DataOffset,
                                                *((_DWORD *)v6 + 42),
                                                NormalPoolPriority);
        if ( PoolWithTagPriority )
        {
          v14 = PoolWithTagPriority + 2;
          PoolWithTagPriority->Next = 0LL;
          if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
          {
            PoolWithTagPriority->Next = (_SLIST_ENTRY *)v6;
            v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
            v40 = *((_QWORD *)v6 + 2);
            v41 = v6 + 16;
            v42 = &v14[-2].Next + 1;
            if ( *(char **)(v40 + 8) != v6 + 16 )
              __fastfail(3u);
            v42[1] = v41;
            *v42 = v40;
            *(_QWORD *)(v40 + 8) = v42;
            *v41 = v42;
            KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v39);
          }
        }
        else
        {
          v14 = 0LL;
        }
        v10 = 0;
        if ( !v14 )
        {
LABEL_68:
          NetBufferList = 0LL;
LABEL_23:
          if ( !NetBufferList )
            return NetBufferList;
          FirstNetBuffer = NetBufferList->FirstNetBuffer;
          v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
          goto LABEL_25;
        }
      }
      *((_DWORD *)&v14[-1].Next + 2) = Number;
    }
    v15 = *((_WORD *)&v14[3].Next + 5);
    v16 = 360LL;
    if ( !v10 )
      v16 = 368LL;
    memset(v14, 0, v16);
    v14[2].Next = (_SLIST_ENTRY *)v6;
    *((_DWORD *)&v14[8].Next + 2) = 256;
    if ( v10 )
      *((_WORD *)&v14[3].Next + 5) = v15;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(v14, 1LL);
    *((_BYTE *)&v14[12].Next + 8) = v6[32];
    v17 = *((_DWORD *)v6 + 15);
    if ( (v17 & 2) != 0 )
    {
      v45 = (v17 & 1) == 0;
      v46 = v14 + 34;
      if ( v45 )
        v46 = v14 + 23;
      v14[1].Next = v46;
      v46->Next = 0LL;
      *((_WORD *)&v14[1].Next->Next + 4) = *((_WORD *)v6 + 17);
      *((_WORD *)&v14[1].Next->Next + 5) = *((_WORD *)v6 + 17);
    }
    NetBufferList = (PNET_BUFFER_LIST)v14;
    memset(&v14[23], 0, 0xB0uLL);
    v14[25].Next = 0LL;
    *((_DWORD *)&v14[25].Next + 2) = 0;
    *((_DWORD *)&v14[24].Next + 2) = 0;
    *((_QWORD *)&v14[26].Next + 1) = v6;
    *((_QWORD *)&v14[23].Next + 1) = 0LL;
    LODWORD(v14[24].Next) = 0;
    *((_QWORD *)&v14->Next + 1) = v14 + 23;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v14, 0LL, 3u, 0LL, 0);
    goto LABEL_23;
  }
  NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
  FirstNetBuffer = NetBuffer;
  if ( !NetBuffer )
    goto LABEL_84;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_25:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_38:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    if ( ((unsigned __int64)v7->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
      && ((__int64)v7->NetBufferListInfo[10] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      v49 = *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      v50 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v49;
      *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v50;
      LODWORD(v50) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0xA0);
      if ( (_DWORD)v50 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)DataOffset,
          (const struct _GUID *)(v4 + 176),
          (const struct _GUID *)(v4 + 192),
          Irp,
          v52,
          1u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  v22 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    MdlChain = Alignment->MdlChain;
    DataLength = Alignment->DataLength;
    DataOffset = Alignment->DataOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !*(_BYTE *)v4 )
      break;
    FirstNetBuffer->MdlChain = MdlChain;
    FirstNetBuffer->Link.Region = Alignment->Link.Region;
    FirstNetBuffer->DataLength = Alignment->DataLength;
    FirstNetBuffer->DataOffset = DataOffset;
    FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
LABEL_77:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
    {
LABEL_37:
      v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      goto LABEL_38;
    }
LABEL_80:
    v48 = NdisAllocateNetBuffer(v22, 0LL, 0, 0LL);
    if ( !v48 )
      goto LABEL_84;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)v48;
    FirstNetBuffer = v48;
  }
  if ( !MdlChain )
    goto LABEL_77;
  while ( 1 )
  {
    ByteCount = MdlChain->ByteCount;
    if ( (unsigned int)DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset = (unsigned int)DataOffset - ByteCount;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MdlChain;
    if ( !MdlChain )
    {
      v22 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      goto LABEL_77;
    }
  }
  v26 = ByteCount - DataOffset;
  if ( v26 >= DataLength )
    v26 = DataLength;
  v27 = 0LL;
  if ( v26 )
  {
    v28 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)DataOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v28;
    Mdl = IoAllocateMdl(v28, v26, 0, 0, 0LL);
    v27 = Mdl;
    if ( !Mdl )
      goto LABEL_84;
    IoBuildPartialMdl(
      *(PMDL *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      Mdl,
      *(PVOID *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0),
      v26);
    MdlChain = *(struct _MDL **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v27->Next = 0LL;
  }
  FirstNetBuffer->Link.Region = (unsigned __int64)v27;
  FirstNetBuffer->MdlChain = v27;
  FirstNetBuffer->DataLength = Alignment->DataLength;
  FirstNetBuffer->CurrentMdlOffset = 0;
  FirstNetBuffer->DataOffset = 0;
  v30 = DataLength - v26;
  if ( !v30 || (Next = MdlChain->Next) == 0LL )
  {
LABEL_36:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_37;
    v22 = *(void **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    goto LABEL_80;
  }
  while ( 1 )
  {
    v33 = Next->ByteCount;
    v34 = (char *)Next->StartVa + Next->ByteOffset;
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v34;
    *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v33;
    if ( v33 > v30 )
    {
      v33 = v30;
      *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v30;
    }
    v35 = IoAllocateMdl(v34, v33, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v35;
    if ( !v35 )
      break;
    IoBuildPartialMdl(
      Next,
      v35,
      *(PVOID *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0),
      *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    v36 = *(struct _MDL **)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    v27->Next = v36;
    v27 = v36;
    v36->Next = 0LL;
    v30 -= *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v30 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_36;
  }
LABEL_84:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)&v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88));
  return 0LL;
}
