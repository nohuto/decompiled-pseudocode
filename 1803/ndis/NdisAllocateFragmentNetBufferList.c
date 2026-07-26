/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C0010990
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0003920 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C00045B0 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C0004820 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0005010 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisAdvanceNetBufferDataStart @ 0x1C0006F80 (NdisAdvanceNetBufferDataStart.c)
 *     ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C0011070 (-ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0011140 (NdisFreeFragmentNetBufferList.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004CD80 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateFragmentNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPool,
        NDIS_HANDLE NetBufferPool,
        ULONG StartOffset,
        ULONG MaximumLength,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateFragmentFlags)
{
  unsigned __int64 v8; // rbp
  struct _NDIS_NET_BUFFER_POOL *v9; // rbx
  ULONG v10; // r13d
  char *v11; // rdi
  int v12; // eax
  unsigned int Number; // r12d
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  char *v16; // rsi
  _SLIST_HEADER *v17; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // r15
  __int16 v19; // bx
  int v20; // eax
  __int64 *v21; // rcx
  _QWORD *p_Alignment; // r14
  ULONG v23; // r12d
  ULONG v24; // esi
  ULONG v25; // edx
  struct _MDL *v26; // r13
  ULONG i; // ebx
  ULONG v28; // esi
  ULONG ByteCount; // ebx
  ULONG v30; // edi
  char *v31; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v33; // r14
  void *v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r12d
  unsigned __int64 v38; // r14
  _SLIST_HEADER *v39; // rcx
  PSLIST_ENTRY v40; // rdi
  PSLIST_ENTRY *v41; // r14
  __int64 v42; // rax
  struct _NET_BUFFER *FirstNetBuffer; // rbx
  unsigned int DataOffset; // ecx
  PMDL MdlChain; // rax
  ULONG v46; // ecx
  ULONG v47; // ecx
  _QWORD *v48; // rcx
  __int64 v49; // rax
  KIRQL v51; // al
  __int64 v52; // rdx
  KIRQL v53; // al
  __int64 v54; // r8
  struct _LOOKASIDE_LIST_EX *v55; // r14
  SIZE_T Size; // rdx
  ULONG Tag; // r8d
  POOL_TYPE Type; // ecx
  __int64 v59; // rax
  KSPIN_LOCK *v60; // r14
  KIRQL v61; // al
  _QWORD *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  SIZE_T v65; // rdx
  ULONG v66; // r8d
  POOL_TYPE v67; // ecx
  struct _NET_BUFFER_LIST *v68; // rax
  KIRQL v69; // al
  char **v70; // r8
  void ***v71; // rdx
  void **v72; // rcx
  bool v73; // zf
  __int64 v74; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v76; // rax
  ULONG v77; // edx
  struct _NET_BUFFER *j; // rsi
  __int128 v79; // xmm0
  __int64 v80; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v82; // [rsp+28h] [rbp-58h]
  int v83; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v8 + 16) = StartOffset;
  v9 = (struct _NDIS_NET_BUFFER_POOL *)NetBufferPool;
  v10 = StartOffset;
  v11 = (char *)NetBufferListPool;
  *(_QWORD *)(v8 + 64) = NetBufferPool;
  *(_QWORD *)(v8 + 144) = OriginalNetBufferList;
  *(_QWORD *)(v8 + 152) = 0LL;
  if ( !MaximumLength )
    return 0LL;
  if ( !NetBufferListPool )
    v11 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPool )
  {
    v9 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v12 = *((_DWORD *)v11 + 15);
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 5) == 1 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v14 = 1;
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_73;
      v15 = (unsigned __int64)Number << 8;
      v16 = &v11[v15 + 384];
      if ( !v16[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&v11[v15 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v11 + 128));
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 24);
      ++*((_DWORD *)v16 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v17);
      if ( !NetBufferList )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v16 + 25)) < 0xAu
          || (v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 26),
              v52 = *((_QWORD *)v16 + 24),
              *((_QWORD *)v16 + 24) = *((_QWORD *)v16 + 25),
              *((_QWORD *)v16 + 25) = v52,
              KeReleaseSpinLock((PKSPIN_LOCK)v16 + 26, v51),
              (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v16 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v16 + 6);
        }
      }
      if ( !NetBufferList )
      {
LABEL_73:
        ++*((_DWORD *)v11 + 37);
        NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 8);
        if ( !NetBufferList )
        {
          v65 = *((unsigned int *)v11 + 43);
          v66 = *((_DWORD *)v11 + 42);
          v67 = *((_DWORD *)v11 + 41);
          ++*((_DWORD *)v11 + 38);
          v68 = (struct _NET_BUFFER_LIST *)ndisAllocateFromNPagedPool(v67, v65, v66, (PLOOKASIDE_LIST_EX)(v11 + 128));
          NetBufferList = v68;
          if ( v68 )
          {
            v68[-1].NetBufferListInfo[26] = v11;
            v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 1);
            v70 = (char **)*((_QWORD *)v11 + 2);
            v71 = (void ***)(v11 + 16);
            v72 = &NetBufferList[-1].NetBufferListInfo[27];
            if ( v70[1] != v11 + 16 )
              __fastfail(3u);
            v72[1] = v71;
            *v72 = v70;
            v70[1] = (char *)v72;
            *v71 = v72;
            KeReleaseSpinLock((PKSPIN_LOCK)v11 + 1, v69);
          }
          v14 = 0;
          if ( !NetBufferList )
          {
            NetBufferList = 0LL;
            goto LABEL_20;
          }
        }
        LODWORD(NetBufferList[-1].NetBufferListInfo[29]) = Number;
      }
      v19 = WORD1(NetBufferList->NdisReserved[1]);
      memset(NetBufferList, 0, 8 * (v14 ^ 1LL) + 368);
      NetBufferList->NdisPoolHandle = v11;
      NetBufferList->Flags = 256;
      if ( v14 )
        WORD1(NetBufferList->NdisReserved[1]) = v19;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
      LOBYTE(NetBufferList->NetBufferListInfo[7]) = v11[32];
      v20 = *((_DWORD *)v11 + 15);
      if ( (v20 & 2) != 0 )
      {
        v73 = (v20 & 1) == 0;
        v74 = 560LL;
        if ( v73 )
          v74 = 384LL;
        NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v74);
        *(unsigned __int64 *)((char *)&NetBufferList->Link.Alignment + v74) = 0LL;
        NetBufferList->Context->Size = *((_WORD *)v11 + 17);
        NetBufferList->Context->Offset = *((_WORD *)v11 + 17);
      }
      memset(&NetBufferList[1], 0, 0xB0uLL);
      NetBufferList[1].NdisReserved[1] = v11;
      NetBufferList[1].NdisPoolHandle = 0LL;
      *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
      LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
      NetBufferList[1].Link.Region = 0LL;
      LODWORD(NetBufferList[1].Context) = 0;
      NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
      if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
        ndisNblTrackerRecordEvent(NetBufferList, 0LL, 3u, 0LL, 0);
LABEL_20:
      if ( !NetBufferList )
        return NetBufferList;
      goto LABEL_21;
    }
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v11);
    return 0LL;
  }
  NetBufferList = NdisAllocateNetBufferList(v11, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v9, 0LL, 0, 0LL);
  if ( !NetBuffer )
  {
LABEL_95:
    NdisFreeFragmentNetBufferList(NetBufferList, 0, 0);
    return 0LL;
  }
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_21:
  v21 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) + 8LL);
  *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v21;
  if ( !v21 )
    goto LABEL_95;
  while ( *((_DWORD *)v21 + 6) <= v10 )
  {
    v21 = (__int64 *)*v21;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v21;
    if ( !v21 )
      goto LABEL_95;
  }
  p_Alignment = &NetBufferList->FirstNetBuffer->$5B41323DEF39027040E8FCD3533B14FA::$F792E5F6E1D2B7A68FA990F8D4008735::Link.Alignment;
  v23 = 0;
  *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = p_Alignment;
  while ( 1 )
  {
    v24 = *((_DWORD *)v21 + 6);
    if ( v24 > v10 )
      break;
LABEL_107:
    v21 = (__int64 *)*v21;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v21;
LABEL_108:
    if ( !v21 )
      goto LABEL_52;
  }
  v25 = v10 + *((_DWORD *)v21 + 10);
  v26 = (struct _MDL *)v21[4];
  *(_DWORD *)v8 = v25;
  if ( !v26 )
  {
LABEL_106:
    v10 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_107;
  }
  for ( i = v26->ByteCount; v25 >= i; i = v26->ByteCount )
  {
    v26 = v26->Next;
    v25 -= i;
    *(_DWORD *)v8 = v25;
    if ( !v26 )
      goto LABEL_106;
  }
  v28 = v24 - *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  ByteCount = i - v25;
  if ( ByteCount > v28 )
    ByteCount = v28;
  while ( 1 )
  {
    if ( !ByteCount )
    {
      v26 = v26->Next;
      goto LABEL_48;
    }
    v30 = v28;
    if ( v28 >= MaximumLength - v23 )
      v30 = MaximumLength - v23;
    v31 = (char *)v26->StartVa + v26->ByteOffset + v25;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v31;
    Mdl = IoAllocateMdl(v31, v30, 0, 0, 0LL);
    v33 = Mdl;
    if ( !Mdl )
      goto LABEL_95;
    v34 = *(void **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    if ( v30 < ByteCount )
    {
      IoBuildPartialMdl(v26, Mdl, v34, v30);
      *(_DWORD *)v8 += v30;
    }
    else
    {
      v30 = ByteCount;
      IoBuildPartialMdl(v26, Mdl, v34, ByteCount);
    }
    v35 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v23 += v30;
    if ( *(_QWORD *)(v35 + 32) )
    {
      **(_QWORD **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v33;
    }
    else
    {
      *(_QWORD *)(v35 + 8) = v33;
      *(_QWORD *)(v35 + 32) = v33;
      *(_DWORD *)(v35 + 40) = 0;
      *(_DWORD *)(v35 + 16) = 0;
    }
    ByteCount -= v30;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v33;
    v33->Next = 0LL;
    v28 -= v30;
    if ( !v28 )
      break;
    if ( ByteCount )
    {
      *(_DWORD *)(v35 + 24) = v23;
    }
    else
    {
      v26 = v26->Next;
      if ( !v26 )
        break;
      v25 = 0;
      ByteCount = v26->ByteCount;
      *(_DWORD *)v8 = 0;
      if ( v23 < MaximumLength || (*(_DWORD *)(v35 + 24) = v23, !ByteCount) )
      {
        p_Alignment = (_QWORD *)v35;
        goto LABEL_48;
      }
    }
    v36 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v36 )
      goto LABEL_95;
    if ( (*(_DWORD *)(v36 + 88) & 1) != 0 )
    {
      DbgPrint(
        "NdisAllocateNetBuffer: Pool %p wrong pool type.\n",
        *(const void **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
      goto LABEL_95;
    }
    v37 = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_76;
    v38 = v36 + 384 + ((unsigned __int64)v37 << 8);
    if ( !*(_BYTE *)(v38 + 216) )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)(v36 + 384 + ((unsigned __int64)v37 << 8)),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v36 + 128));
    v39 = *(_SLIST_HEADER **)(v38 + 192);
    ++*(_DWORD *)(v38 + 20);
    v40 = ExpInterlockedPopEntrySList(v39);
    if ( !v40 )
    {
      if ( ExQueryDepthSList(*(PSLIST_HEADER *)(v38 + 200)) < 0xAu
        || (v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 208)),
            v54 = *(_QWORD *)(v38 + 192),
            *(_QWORD *)(v38 + 192) = *(_QWORD *)(v38 + 200),
            *(_QWORD *)(v38 + 200) = v54,
            KeReleaseSpinLock((PKSPIN_LOCK)(v38 + 208), v53),
            (v40 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v38 + 192))) == 0LL) )
      {
        ++*(_DWORD *)(v38 + 24);
      }
    }
    if ( !v40 )
    {
      v36 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_76:
      v55 = (struct _LOOKASIDE_LIST_EX *)(v36 + 128);
      ++*(_DWORD *)(v36 + 148);
      v40 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v36 + 128));
      if ( !v40 )
      {
        Size = v55->L.Size;
        Tag = v55->L.Tag;
        Type = v55->L.Type;
        ++v55->L.AllocateMisses;
        v40 = (PSLIST_ENTRY)ndisAllocateFromNPagedPool(Type, Size, Tag, v55);
        if ( !v40 )
          goto LABEL_95;
        v59 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v40[-2].Next = (_SLIST_ENTRY *)v59;
        v60 = (KSPIN_LOCK *)(v59 + 8);
        v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v59 + 8));
        v62 = &v40[-2].Next + 1;
        v63 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 16LL;
        v64 = *(_QWORD *)v63;
        if ( *(_QWORD *)(*(_QWORD *)v63 + 8LL) != v63 )
          __fastfail(3u);
        *v62 = v64;
        v62[1] = v63;
        *(_QWORD *)(v64 + 8) = v62;
        *(_QWORD *)v63 = v62;
        KeReleaseSpinLock(v60, v61);
      }
      *((_DWORD *)&v40[-1].Next + 2) = v37;
    }
    v41 = *(PSLIST_ENTRY **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v42 = *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v23 = 0;
    v25 = *(_DWORD *)v8;
    v40->Next = 0LL;
    *((_QWORD *)&v40[3].Next + 1) = v42;
    LODWORD(v40[3].Next) = 0;
    *((_QWORD *)&v40[4].Next + 1) = 0LL;
    v40[4].Next = 0LL;
    *((_QWORD *)&v40[8].Next + 1) = 0LL;
    v40[8].Next = 0LL;
    *((_QWORD *)&v40[10].Next + 1) = 0LL;
    v40[2].Next = 0LL;
    *((_DWORD *)&v40[2].Next + 2) = 0;
    *((_DWORD *)&v40[1].Next + 2) = 0;
    *((_QWORD *)&v40->Next + 1) = 0LL;
    LODWORD(v40[1].Next) = 0;
    *v41 = v40;
    p_Alignment = &v40->Next;
    *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v40;
LABEL_48:
    if ( !v26 )
      goto LABEL_51;
  }
  p_Alignment = (_QWORD *)v35;
  *(_DWORD *)(v35 + 24) = v23;
LABEL_51:
  v21 = **(__int64 ***)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v21;
  if ( v21 )
  {
    v10 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( *((_DWORD *)v21 + 6) > v10 )
    {
      v76 = NdisAllocateNetBuffer(
              *(NDIS_HANDLE *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
              0LL,
              0,
              0LL);
      if ( !v76 )
        goto LABEL_95;
      v21 = *(__int64 **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      *p_Alignment = v76;
      v23 = 0;
      p_Alignment = &v76->Link.Alignment;
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v76;
    }
    goto LABEL_108;
  }
LABEL_52:
  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  if ( !FirstNetBuffer )
  {
LABEL_57:
    v48 = *(_QWORD **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    NetBufferList->NetBufferListInfo[16] = (void *)v48[34];
    v49 = v48[28];
    if ( (v49 & 1) == 0 && (v49 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v48, NetBufferList, 0LL, 0LL);
      v48 = *(_QWORD **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v48[31] & 0x7FFFFFFFFFFFFFFFLL;
      v79 = *(_OWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
      v80 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v79;
      *(_QWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v80;
      LODWORD(v80) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0xB0);
      if ( (_DWORD)v80 )
      {
        EtwEx_tidActivityInfoTransfer(
          (unsigned __int64)v48,
          (const struct _EVENT_DESCRIPTOR *)0x7FFFFFFFFFFFFFFFLL,
          (const struct _GUID *)(v8 + 208),
          (const struct _GUID *)(v8 + 192),
          Irp,
          v82,
          2u);
        v48 = *(_QWORD **)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 7u, v48, 0);
    return NetBufferList;
  }
  while ( 2 )
  {
    DataOffset = FirstNetBuffer->DataOffset;
    if ( DataOffset >= DataOffsetDelta )
    {
      FirstNetBuffer->DataLength += DataOffsetDelta;
      v47 = DataOffset - DataOffsetDelta;
      MdlChain = FirstNetBuffer->MdlChain;
      for ( FirstNetBuffer->DataOffset = v47; MdlChain; v47 -= v77 )
      {
        v77 = MdlChain->ByteCount;
        if ( v47 < v77 )
          break;
        MdlChain = MdlChain->Next;
      }
LABEL_56:
      FirstNetBuffer->Link.Region = (unsigned __int64)MdlChain;
      FirstNetBuffer->CurrentMdlOffset = v47;
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( !FirstNetBuffer )
        goto LABEL_57;
      continue;
    }
    break;
  }
  *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = DataBackFill + DataOffsetDelta - DataOffset;
  MdlChain = ndisAllocateMdl((PULONG)(v8 + 136));
  if ( MdlChain )
  {
    MdlChain->Next = FirstNetBuffer->MdlChain;
    v46 = *(_DWORD *)(((unsigned __int64)&v83 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) - DataOffsetDelta;
    FirstNetBuffer->MdlChain = MdlChain;
    FirstNetBuffer->DataOffset += v46;
    FirstNetBuffer->DataLength += DataOffsetDelta;
    v47 = FirstNetBuffer->DataOffset;
    goto LABEL_56;
  }
  for ( j = NetBufferList->FirstNetBuffer; j != FirstNetBuffer; j = (struct _NET_BUFFER *)j->Link.Alignment )
    NdisAdvanceNetBufferDataStart(j, DataOffsetDelta, 1u, ndisFreeMdl);
  NdisFreeFragmentNetBufferList(NetBufferList, 0, 0);
  return 0LL;
}
