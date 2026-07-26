/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0015EA0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C004C0E0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0014360 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C004C4F0 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00667C0 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  unsigned int Number; // r13d
  unsigned int v7; // r12d
  char *v8; // r15
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rbx
  __int16 v11; // r15
  int v12; // eax
  _SLIST_ENTRY *v13; // rax
  unsigned __int16 v14; // ax
  struct _MDL *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  KIRQL v19; // al
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v23; // al
  __int64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int16 v29; // ax
  __int64 v30; // rax
  PFREE_FUNCTION_EX *v31; // rbx
  KIRQL v32; // al
  KIRQL v33; // [rsp+70h] [rbp+8h]

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v8 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
    if ( !v8[216] )
    {
      v31 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
      v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
      v33 = v32;
      if ( !v8[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v8,
          ndisAllocateFromNPagedPool,
          *(v31 - 25),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v31 - 53),
          *((_DWORD *)v31 - 54),
          0x400u);
        v32 = v33;
        v8[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v32);
    }
    v9 = (_SLIST_HEADER *)*((_QWORD *)v8 + 24);
    ++*((_DWORD *)v8 + 5);
    v10 = ExpInterlockedPopEntrySList(v9);
    if ( !v10 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v8 + 25)) < 0xAu
        || (v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26),
            v20 = *((_QWORD *)v8 + 24),
            *((_QWORD *)v8 + 24) = *((_QWORD *)v8 + 25),
            *((_QWORD *)v8 + 25) = v20,
            KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v19),
            (v10 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v8 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v8 + 6);
      }
    }
    if ( v10 )
      goto LABEL_7;
  }
  ++*((_DWORD *)PoolHandle + 37);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( !v10 )
  {
    v21 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v21 + 32 < v21 )
      return 0LL;
    PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v21 + 32,
                                            *((_DWORD *)PoolHandle + 42),
                                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v10 = PoolWithTagPriority + 2;
      PoolWithTagPriority->Next = 0LL;
      if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
      {
        PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v24 = *((_QWORD *)PoolHandle + 2);
        v25 = (char *)PoolHandle + 16;
        v26 = &v10[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v24 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        v26[1] = v25;
        *v26 = v24;
        *(_QWORD *)(v24 + 8) = v26;
        *v25 = v26;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v23);
      }
    }
    else
    {
      v10 = 0LL;
    }
    v7 = 0;
    if ( !v10 )
      return 0LL;
  }
  *((_DWORD *)&v10[-1].Next + 2) = Number;
LABEL_7:
  v11 = *((_WORD *)&v10[3].Next + 5);
  memset(v10, 0, 8 * (v7 ^ 1LL) + 368);
  v10[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v10[8].Next + 2) = 256;
  if ( v7 )
    *((_WORD *)&v10[3].Next + 5) = v11;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v10, 1LL);
  *((_BYTE *)&v10[12].Next + 8) = *((_BYTE *)PoolHandle + 32);
  v12 = *((_DWORD *)PoolHandle + 15);
  if ( (v12 & 2) != 0
    && ((v12 & 1) == 0 ? (v13 = v10 + 24) : (v13 = v10 + 35),
        v10[1].Next = v13,
        v13->Next = 0LL,
        *((_WORD *)&v10[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)&v10[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)PoolHandle + 17) >= ContextSize) )
  {
    *((_WORD *)&v10[1].Next->Next + 5) -= ContextSize;
  }
  else if ( ContextSize )
  {
    if ( NdisAllocateNetBufferListContext(
           (PNET_BUFFER_LIST)v10,
           ContextSize,
           ContextBackFill,
           *((_DWORD *)PoolHandle + 14)) )
    {
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v10);
      v10 = 0LL;
    }
    else
    {
      *((_DWORD *)&v10[8].Next + 2) |= 0x400u;
    }
  }
  if ( v10 )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 1) != 0 )
      *((_QWORD *)&v10->Next + 1) = v10 + 24;
    if ( (*((_DWORD *)PoolHandle + 15) & 4) != 0 )
    {
      v14 = *((_WORD *)PoolHandle + 17);
      if ( v14 )
        v15 = (struct _MDL *)((char *)&v10[36] + v14);
      else
        v15 = (struct _MDL *)&v10[35];
      if ( v7 )
      {
        v15->ByteCount = *((_DWORD *)PoolHandle + 22);
        v15->Next = 0LL;
      }
      else
      {
        v27 = *((unsigned int *)PoolHandle + 22);
        v28 = (unsigned __int64)v15 + *((unsigned int *)PoolHandle + 23);
        v29 = (_WORD)v15 + *((_DWORD *)PoolHandle + 23);
        v15->Next = 0LL;
        v15->MdlFlags = 0;
        v15->ByteCount = v27;
        v15->StartVa = (PVOID)(v28 & 0xFFFFFFFFFFFFF000uLL);
        v15->Size = 8 * ((((unsigned __int64)(v29 & 0xFFF) + v27 + 4095) >> 12) + 6);
        v15->ByteOffset = v28 & 0xFFF;
        MmBuildMdlForNonPagedPool(v15);
      }
      v16 = *((_QWORD *)&v10->Next + 1);
      if ( v16 )
      {
        v17 = *((_DWORD *)PoolHandle + 22);
        *(_QWORD *)v16 = 0LL;
        *(_QWORD *)(v16 + 56) = PoolHandle;
        *(_QWORD *)(v16 + 8) = v15;
        *(_DWORD *)(v16 + 16) = v17;
        *(_QWORD *)(v16 + 32) = v15;
        *(_DWORD *)(v16 + 40) = v17;
        *(_DWORD *)(v16 + 24) = 0;
        *(_DWORD *)(v16 + 48) = 0;
        *(_QWORD *)(v16 + 72) = 0LL;
        *(_QWORD *)(v16 + 64) = 0LL;
        *(_QWORD *)(v16 + 136) = 0LL;
        *(_QWORD *)(v16 + 128) = 0LL;
        *(_QWORD *)(v16 + 168) = 0LL;
      }
    }
    else
    {
      v30 = *((_QWORD *)&v10->Next + 1);
      if ( v30 )
      {
        *(_QWORD *)v30 = 0LL;
        *(_QWORD *)(v30 + 56) = PoolHandle;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_DWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 32) = 0LL;
        *(_DWORD *)(v30 + 40) = 0;
        *(_DWORD *)(v30 + 24) = 0;
        *(_DWORD *)(v30 + 48) = 0;
        *(_QWORD *)(v30 + 72) = 0LL;
        *(_QWORD *)(v30 + 64) = 0LL;
        *(_QWORD *)(v30 + 136) = 0LL;
        *(_QWORD *)(v30 + 128) = 0LL;
        *(_QWORD *)(v30 + 168) = 0LL;
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v10, 0LL, 2u, 0LL, 0);
  }
  return (PNET_BUFFER_LIST)v10;
}
