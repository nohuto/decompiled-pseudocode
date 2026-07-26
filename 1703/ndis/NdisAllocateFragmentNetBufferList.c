/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C0023D80
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     NdisAdvanceNetBufferDataStart @ 0x1C0005F70 (NdisAdvanceNetBufferDataStart.c)
 *     NdisAllocateNetBuffer @ 0x1C000E090 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C000E300 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000E638 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C0024460 (-ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0024530 (NdisFreeFragmentNetBufferList.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004E2A0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
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
  _QWORD *v8; // rbp
  ULONG v9; // r14d
  struct _NDIS_NET_BUFFER_POOL *v10; // rdi
  char *v11; // rsi
  PNET_BUFFER_LIST v12; // r12
  struct _NET_BUFFER_LIST *v13; // rbx
  int v14; // eax
  unsigned int Number; // r12d
  int v16; // r15d
  unsigned __int64 v17; // rax
  char *v18; // r14
  _SLIST_HEADER *v19; // rcx
  PSLIST_ENTRY v20; // rdi
  __int16 v21; // bx
  size_t v22; // r8
  int v23; // eax
  const struct _EVENT_DESCRIPTOR *v24; // rdx
  _NET_BUFFER *FirstNetBuffer; // rcx
  _QWORD *p_Alignment; // r13
  ULONG v27; // r15d
  ULONG DataLength; // esi
  struct _MDL *MdlChain; // r12
  __int64 v30; // rax
  unsigned int i; // edi
  ULONG ByteCount; // edi
  ULONG v33; // esi
  ULONG v34; // ebx
  char *v35; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v37; // r14
  void *v38; // r8
  PNET_BUFFER_LIST v39; // rcx
  struct _NET_BUFFER *Alignment; // rbx
  unsigned int DataOffset; // ecx
  PMDL v42; // rax
  ULONG v43; // ecx
  unsigned int v44; // ecx
  _QWORD *v45; // r12
  __int64 v47; // rcx
  unsigned int v48; // r15d
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r14
  _SLIST_HEADER *v51; // rcx
  PSLIST_ENTRY v52; // rbx
  KIRQL v53; // al
  __int64 v54; // rdx
  KIRQL v55; // al
  __int64 v56; // r8
  struct _LOOKASIDE_LIST_EX *v57; // r14
  SIZE_T Size; // rdx
  ULONG Tag; // r8d
  POOL_TYPE Type; // ecx
  __int64 v61; // rax
  KSPIN_LOCK *v62; // r14
  KIRQL v63; // al
  _QWORD *v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  SIZE_T v67; // rdx
  ULONG v68; // r8d
  POOL_TYPE v69; // ecx
  _SLIST_ENTRY *v70; // rax
  KIRQL v71; // al
  __int64 v72; // r8
  _QWORD *v73; // rdx
  _QWORD *v74; // rcx
  bool v75; // zf
  _SLIST_ENTRY *v76; // rax
  PNET_BUFFER_LIST NetBufferList; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v79; // rax
  struct _NET_BUFFER_LIST *v80; // rax
  struct _NET_BUFFER *v81; // rsi
  __int128 v82; // xmm0
  PNET_BUFFER_LIST v83; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v85; // [rsp+28h] [rbp-58h]
  PNET_BUFFER_LIST FragmentNetBufferList; // [rsp+80h] [rbp+0h] BYREF

  v8 = (_QWORD *)((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL);
  *((_DWORD *)v8 + 34) = StartOffset;
  v9 = StartOffset;
  v10 = (struct _NDIS_NET_BUFFER_POOL *)NetBufferPool;
  v11 = (char *)NetBufferListPool;
  v8[8] = NetBufferPool;
  v12 = OriginalNetBufferList;
  v8[19] = OriginalNetBufferList;
  v13 = 0LL;
  v8[18] = 0LL;
  if ( !MaximumLength )
    return v13;
  if ( !NetBufferListPool )
    v11 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPool )
  {
    v10 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v14 = *((_DWORD *)v11 + 15);
  if ( (v14 & 1) != 0 )
  {
    if ( (v14 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v11);
      return v13;
    }
    Number = KeGetPcr()->Prcb.Number;
    v16 = 1;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_79;
    v17 = (unsigned __int64)Number << 8;
    v18 = &v11[v17 + 384];
    if ( !v18[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v11[v17 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v11 + 128));
    v19 = (_SLIST_HEADER *)*((_QWORD *)v18 + 24);
    ++*((_DWORD *)v18 + 5);
    v20 = ExpInterlockedPopEntrySList(v19);
    if ( !v20 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v18 + 25)) < 0xAu
        || (v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18 + 26),
            v54 = *((_QWORD *)v18 + 24),
            *((_QWORD *)v18 + 24) = *((_QWORD *)v18 + 25),
            *((_QWORD *)v18 + 25) = v54,
            KeReleaseSpinLock((PKSPIN_LOCK)v18 + 26, v53),
            (v20 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v18 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v18 + 6);
      }
    }
    if ( !v20 )
    {
LABEL_79:
      ++*((_DWORD *)v11 + 37);
      v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11 + 8);
      if ( !v20 )
      {
        v67 = *((unsigned int *)v11 + 43);
        v68 = *((_DWORD *)v11 + 42);
        v69 = *((_DWORD *)v11 + 41);
        ++*((_DWORD *)v11 + 38);
        v70 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v69, v67, v68, (PLOOKASIDE_LIST_EX)(v11 + 128));
        v20 = v70;
        if ( v70 )
        {
          v70[-2].Next = (_SLIST_ENTRY *)v11;
          v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 1);
          v72 = *((_QWORD *)v11 + 2);
          v73 = v11 + 16;
          v74 = &v20[-2].Next + 1;
          if ( *(char **)(v72 + 8) != v11 + 16 )
            __fastfail(3u);
          v74[1] = v73;
          *v74 = v72;
          *(_QWORD *)(v72 + 8) = v74;
          *v73 = v74;
          KeReleaseSpinLock((PKSPIN_LOCK)v11 + 1, v71);
        }
        v24 = 0LL;
        v16 = 0;
        if ( !v20 )
        {
          v13 = 0LL;
          *v8 = 0LL;
LABEL_23:
          if ( !v13 )
            return v13;
          v9 = *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
          v12 = *(PNET_BUFFER_LIST *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
          goto LABEL_25;
        }
      }
      *((_DWORD *)&v20[-1].Next + 2) = Number;
    }
    v21 = *((_WORD *)&v20[3].Next + 5);
    v22 = 360LL;
    if ( !v16 )
      v22 = 368LL;
    memset(v20, 0, v22);
    v20[2].Next = (_SLIST_ENTRY *)v11;
    *((_DWORD *)&v20[8].Next + 2) = 256;
    if ( v16 )
      *((_WORD *)&v20[3].Next + 5) = v21;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds((__int64)v20, 1u);
    *((_BYTE *)&v20[12].Next + 8) = v11[32];
    v23 = *((_DWORD *)v11 + 15);
    if ( (v23 & 2) != 0 )
    {
      v75 = (v23 & 1) == 0;
      v76 = v20 + 34;
      if ( v75 )
        v76 = v20 + 23;
      v20[1].Next = v76;
      v76->Next = 0LL;
      *((_WORD *)&v20[1].Next->Next + 4) = *((_WORD *)v11 + 17);
      *((_WORD *)&v20[1].Next->Next + 5) = *((_WORD *)v11 + 17);
    }
    *v8 = v20;
    memset(&v20[23], 0, 0xB0uLL);
    v24 = 0LL;
    *((_QWORD *)&v20[26].Next + 1) = v11;
    v20[25].Next = 0LL;
    *((_DWORD *)&v20[25].Next + 2) = 0;
    *((_DWORD *)&v20[24].Next + 2) = 0;
    *((_QWORD *)&v20[23].Next + 1) = 0LL;
    LODWORD(v20[24].Next) = 0;
    *((_QWORD *)&v20->Next + 1) = v20 + 23;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v20, 0LL, 3u, 0LL, 0);
      v24 = 0LL;
    }
    v13 = (struct _NET_BUFFER_LIST *)*v8;
    goto LABEL_23;
  }
  NetBufferList = NdisAllocateNetBufferList(v11, 0, 0);
  *v8 = NetBufferList;
  v13 = NetBufferList;
  if ( !NetBufferList )
    return v13;
  NetBuffer = NdisAllocateNetBuffer(v10, 0LL, 0, 0LL);
  if ( !NetBuffer )
  {
LABEL_101:
    NdisFreeFragmentNetBufferList((PNET_BUFFER_LIST)*v8, 0, 0);
    return 0LL;
  }
  v13->Link.Region = (unsigned __int64)NetBuffer;
  v24 = 0LL;
LABEL_25:
  FirstNetBuffer = v12->FirstNetBuffer;
  *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = FirstNetBuffer;
  if ( !FirstNetBuffer )
    goto LABEL_101;
  while ( FirstNetBuffer->DataLength <= v9 )
  {
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = FirstNetBuffer;
    if ( !FirstNetBuffer )
      goto LABEL_101;
  }
  p_Alignment = &v13->FirstNetBuffer->$BA5FAF52916F2DB317C4131218E52A70::$B0781928517498A0092EFEC1C3F9F347::Link.Alignment;
  v27 = 0;
  while ( 1 )
  {
    DataLength = FirstNetBuffer->DataLength;
    if ( DataLength > v9 )
    {
      MdlChain = FirstNetBuffer->MdlChain;
      v30 = v9 + FirstNetBuffer->DataOffset;
      *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v30;
      if ( MdlChain )
        break;
    }
LABEL_112:
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = FirstNetBuffer;
LABEL_113:
    if ( !FirstNetBuffer )
      goto LABEL_49;
  }
  for ( i = MdlChain->ByteCount; (unsigned int)v30 >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    v30 = (unsigned int)v30 - i;
    *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v30;
    if ( !MdlChain )
      goto LABEL_112;
  }
  ByteCount = i - v30;
  v33 = DataLength - v9;
  if ( ByteCount > v33 )
    ByteCount = v33;
  while ( 1 )
  {
    if ( !ByteCount )
    {
      MdlChain = MdlChain->Next;
      goto LABEL_45;
    }
    v34 = MaximumLength - v27;
    if ( v33 < MaximumLength - v27 )
      v34 = v33;
    v35 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v30;
    *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v35;
    Mdl = IoAllocateMdl(v35, v34, 0, 0, 0LL);
    v37 = Mdl;
    if ( !Mdl )
      goto LABEL_101;
    v38 = *(void **)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    if ( v34 < ByteCount )
    {
      IoBuildPartialMdl(MdlChain, Mdl, v38, v34);
      *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 8) += v34;
    }
    else
    {
      v34 = ByteCount;
      IoBuildPartialMdl(MdlChain, Mdl, v38, ByteCount);
    }
    v27 += v34;
    v24 = 0LL;
    if ( p_Alignment[4] )
    {
      **(_QWORD **)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v37;
    }
    else
    {
      p_Alignment[1] = v37;
      p_Alignment[4] = v37;
      *((_DWORD *)p_Alignment + 10) = 0;
      *((_DWORD *)p_Alignment + 4) = 0;
    }
    ByteCount -= v34;
    *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v37;
    v37->Next = 0LL;
    v33 -= v34;
    if ( !v33 )
      break;
    if ( ByteCount )
    {
      *((_DWORD *)p_Alignment + 6) = v27;
    }
    else
    {
      MdlChain = MdlChain->Next;
      if ( !MdlChain )
        break;
      ByteCount = MdlChain->ByteCount;
      v30 = 0LL;
      *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
      if ( v27 < MaximumLength )
        goto LABEL_45;
      *((_DWORD *)p_Alignment + 6) = v27;
      if ( !ByteCount )
        goto LABEL_45;
    }
    v47 = *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v47 )
      goto LABEL_101;
    if ( (*(_DWORD *)(v47 + 88) & 1) != 0 )
    {
      DbgPrint(
        "NdisAllocateNetBuffer: Pool %p wrong pool type.\n",
        *(const void **)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
      goto LABEL_101;
    }
    v48 = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_82;
    v49 = (unsigned __int64)v48 << 8;
    v50 = v49 + v47 + 384;
    if ( !*(_BYTE *)(v50 + 216) )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)(v49 + v47 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v47 + 128));
    v51 = *(_SLIST_HEADER **)(v50 + 192);
    ++*(_DWORD *)(v50 + 20);
    v52 = ExpInterlockedPopEntrySList(v51);
    if ( !v52 )
    {
      if ( ExQueryDepthSList(*(PSLIST_HEADER *)(v50 + 200)) < 0xAu
        || (v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v50 + 208)),
            v56 = *(_QWORD *)(v50 + 192),
            *(_QWORD *)(v50 + 192) = *(_QWORD *)(v50 + 200),
            *(_QWORD *)(v50 + 200) = v56,
            KeReleaseSpinLock((PKSPIN_LOCK)(v50 + 208), v55),
            (v52 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v50 + 192))) == 0LL) )
      {
        ++*(_DWORD *)(v50 + 24);
      }
    }
    if ( !v52 )
    {
      v47 = *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_82:
      v57 = (struct _LOOKASIDE_LIST_EX *)(v47 + 128);
      ++*(_DWORD *)(v47 + 148);
      v52 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v47 + 128));
      if ( !v52 )
      {
        Size = v57->L.Size;
        Tag = v57->L.Tag;
        Type = v57->L.Type;
        ++v57->L.AllocateMisses;
        v52 = (PSLIST_ENTRY)ndisAllocateFromNPagedPool(Type, Size, Tag, v57);
        if ( !v52 )
          goto LABEL_101;
        v61 = *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v52[-2].Next = (_SLIST_ENTRY *)v61;
        v62 = (KSPIN_LOCK *)(v61 + 8);
        v63 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v61 + 8));
        v64 = &v52[-2].Next + 1;
        v65 = *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 16LL;
        v66 = *(_QWORD *)v65;
        if ( *(_QWORD *)(*(_QWORD *)v65 + 8LL) != v65 )
          __fastfail(3u);
        *v64 = v66;
        v64[1] = v65;
        *(_QWORD *)(v66 + 8) = v64;
        *(_QWORD *)v65 = v64;
        KeReleaseSpinLock(v62, v63);
      }
      *((_DWORD *)&v52[-1].Next + 2) = v48;
    }
    v24 = 0LL;
    *((_QWORD *)&v52[3].Next + 1) = *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v27 = 0;
    v30 = *(unsigned int *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v52->Next = 0LL;
    LODWORD(v52[3].Next) = 0;
    *((_QWORD *)&v52[4].Next + 1) = 0LL;
    v52[4].Next = 0LL;
    *((_QWORD *)&v52[8].Next + 1) = 0LL;
    v52[8].Next = 0LL;
    *((_QWORD *)&v52[10].Next + 1) = 0LL;
    v52[2].Next = 0LL;
    *((_DWORD *)&v52[2].Next + 2) = 0;
    *((_DWORD *)&v52[1].Next + 2) = 0;
    *((_QWORD *)&v52->Next + 1) = 0LL;
    LODWORD(v52[1].Next) = 0;
    *p_Alignment = v52;
    p_Alignment = &v52->Next;
LABEL_45:
    if ( !MdlChain )
      goto LABEL_48;
  }
  *((_DWORD *)p_Alignment + 6) = v27;
LABEL_48:
  FirstNetBuffer = **(_NET_BUFFER ***)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    v9 = *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
    if ( FirstNetBuffer->DataLength > v9 )
    {
      v79 = NdisAllocateNetBuffer(
              *(NDIS_HANDLE *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
              0LL,
              0,
              0LL);
      if ( !v79 )
        goto LABEL_101;
      FirstNetBuffer = *(_NET_BUFFER **)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      v24 = 0LL;
      *p_Alignment = v79;
      v27 = 0;
      p_Alignment = &v79->Link.Alignment;
    }
    goto LABEL_113;
  }
LABEL_49:
  v39 = (PNET_BUFFER_LIST)*v8;
  Alignment = *(struct _NET_BUFFER **)(*v8 + 8LL);
  if ( !Alignment )
  {
LABEL_55:
    v45 = *(_QWORD **)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
    v39->NetBufferListInfo[16] = (void *)v45[34];
    if ( (v45[28] & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v45[28] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v45, *v8, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v45[31] & 0x7FFFFFFFFFFFFFFFLL;
      v82 = *(_OWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
      *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
      v83 = (PNET_BUFFER_LIST)*v8;
      *(_OWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v82;
      *(_QWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = (__int64)v83->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      LODWORD(v83) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
      if ( (_DWORD)v83 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          v24,
          (const struct _GUID *)v8 + 13,
          (const struct _GUID *)v8 + 12,
          Irp,
          v85,
          2u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)*v8, 0LL, 7u, v45, 0);
    return (PNET_BUFFER_LIST)*v8;
  }
  while ( 2 )
  {
    DataOffset = Alignment->DataOffset;
    if ( DataOffset >= DataOffsetDelta )
    {
      Alignment->DataLength += DataOffsetDelta;
      v44 = DataOffset - DataOffsetDelta;
      v42 = Alignment->MdlChain;
      for ( Alignment->DataOffset = v44; v42; v44 -= (unsigned int)v24 )
      {
        v24 = (const struct _EVENT_DESCRIPTOR *)v42->ByteCount;
        if ( v44 < (unsigned int)v24 )
          break;
        v42 = v42->Next;
      }
LABEL_53:
      Alignment->CurrentMdlOffset = v44;
      Alignment->Link.Region = (unsigned __int64)v42;
      Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
      {
        v39 = (PNET_BUFFER_LIST)*v8;
        goto LABEL_55;
      }
      continue;
    }
    break;
  }
  *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) = DataBackFill
                                                                                         + DataOffsetDelta
                                                                                         - DataOffset;
  v42 = ndisAllocateMdl((PULONG)v8 + 35);
  if ( v42 )
  {
    v42->Next = Alignment->MdlChain;
    v43 = *(_DWORD *)(((unsigned __int64)&FragmentNetBufferList & 0xFFFFFFFFFFFFFFC0uLL) + 0x8C) - DataOffsetDelta;
    Alignment->MdlChain = v42;
    Alignment->DataOffset += v43;
    Alignment->DataLength += DataOffsetDelta;
    v44 = Alignment->DataOffset;
    goto LABEL_53;
  }
  v80 = (struct _NET_BUFFER_LIST *)*v8;
  v81 = *(struct _NET_BUFFER **)(*v8 + 8LL);
  if ( v81 != Alignment )
  {
    do
    {
      NdisAdvanceNetBufferDataStart(v81, DataOffsetDelta, 1u, ndisFreeMdl);
      v81 = (struct _NET_BUFFER *)v81->Link.Alignment;
    }
    while ( v81 != Alignment );
    v80 = (struct _NET_BUFFER_LIST *)*v8;
  }
  NdisFreeFragmentNetBufferList(v80, 0, 0);
  return 0LL;
}
