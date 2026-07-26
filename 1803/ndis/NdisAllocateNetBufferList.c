/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0003920
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0004860 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0010990 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C00056B0 (NdisFreeNetBufferList.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C004CF20 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00672F4 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
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
  __int64 v13; // rax
  _SLIST_ENTRY *v14; // rax
  int v15; // eax
  unsigned __int16 v16; // ax
  struct _MDL *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  KIRQL v21; // al
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v26; // al
  __int64 v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int16 v32; // r8
  int v33; // r8d
  KIRQL v34; // al
  KIRQL v35; // [rsp+80h] [rbp+8h]
  char *v36; // [rsp+98h] [rbp+20h]

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v8 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
    if ( !v8[216] )
    {
      v36 = (char *)PoolHandle + 128;
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
      v35 = v34;
      if ( !v8[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v8,
          ndisAllocateFromNPagedPool,
          *((PFREE_FUNCTION_EX *)v36 + 7),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v36 + 11),
          *((_DWORD *)v36 + 10),
          0x400u);
        v34 = v35;
        v8[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v34);
    }
    v9 = (_SLIST_HEADER *)*((_QWORD *)v8 + 24);
    ++*((_DWORD *)v8 + 5);
    v10 = ExpInterlockedPopEntrySList(v9);
    if ( !v10 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v8 + 25)) < 0xAu
        || (v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26),
            v22 = *((_QWORD *)v8 + 24),
            *((_QWORD *)v8 + 24) = *((_QWORD *)v8 + 25),
            *((_QWORD *)v8 + 25) = v22,
            KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v21),
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
    v24 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v24 + 32 < v24 )
      return 0LL;
    PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v24 + 32,
                                            *((_DWORD *)PoolHandle + 42),
                                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v10 = PoolWithTagPriority + 2;
      PoolWithTagPriority->Next = 0LL;
      if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
      {
        PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v27 = *((_QWORD *)PoolHandle + 2);
        v28 = (char *)PoolHandle + 16;
        v29 = &v10[-2].Next + 1;
        if ( *(NDIS_HANDLE *)(v27 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        v29[1] = v28;
        *v29 = v27;
        *(_QWORD *)(v27 + 8) = v29;
        *v28 = v29;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v26);
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
    && ((v12 & 1) == 0 ? (v13 = 24LL) : (v13 = 35LL),
        v14 = &v10[v13],
        v10[1].Next = v14,
        v14->Next = 0LL,
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
    v15 = *((_DWORD *)PoolHandle + 15);
    if ( (v15 & 1) != 0 )
    {
      *((_QWORD *)&v10->Next + 1) = v10 + 24;
      v15 = *((_DWORD *)PoolHandle + 15);
    }
    if ( (v15 & 4) != 0 )
    {
      v16 = *((_WORD *)PoolHandle + 17);
      if ( v16 )
        v17 = (struct _MDL *)((char *)&v10[36] + v16);
      else
        v17 = (struct _MDL *)&v10[35];
      if ( v7 )
      {
        v17->ByteCount = *((_DWORD *)PoolHandle + 22);
        v17->Next = 0LL;
      }
      else
      {
        v30 = *((unsigned int *)PoolHandle + 22);
        v31 = (unsigned __int64)v17 + *((unsigned int *)PoolHandle + 23);
        v32 = (_WORD)v17 + *((_DWORD *)PoolHandle + 23);
        v17->Next = 0LL;
        v17->MdlFlags = 0;
        v17->ByteCount = v30;
        v17->StartVa = (PVOID)(v31 & 0xFFFFFFFFFFFFF000uLL);
        v33 = v32 & 0xFFF;
        v17->ByteOffset = v33;
        v17->Size = 8 * ((((unsigned __int64)(unsigned __int16)v33 + v30 + 4095) >> 12) + 6);
        MmBuildMdlForNonPagedPool(v17);
      }
      v18 = *((_QWORD *)&v10->Next + 1);
      if ( v18 )
      {
        v19 = *((_DWORD *)PoolHandle + 22);
        *(_QWORD *)v18 = 0LL;
        *(_QWORD *)(v18 + 56) = PoolHandle;
        *(_QWORD *)(v18 + 8) = v17;
        *(_DWORD *)(v18 + 16) = v19;
        *(_QWORD *)(v18 + 32) = v17;
        *(_DWORD *)(v18 + 40) = v19;
        *(_DWORD *)(v18 + 24) = 0;
        *(_DWORD *)(v18 + 48) = 0;
        *(_QWORD *)(v18 + 72) = 0LL;
        *(_QWORD *)(v18 + 64) = 0LL;
        *(_QWORD *)(v18 + 136) = 0LL;
        *(_QWORD *)(v18 + 128) = 0LL;
        *(_QWORD *)(v18 + 168) = 0LL;
      }
    }
    else
    {
      v23 = *((_QWORD *)&v10->Next + 1);
      if ( v23 )
      {
        *(_QWORD *)v23 = 0LL;
        *(_QWORD *)(v23 + 56) = PoolHandle;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_DWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 32) = 0LL;
        *(_DWORD *)(v23 + 40) = 0;
        *(_DWORD *)(v23 + 24) = 0;
        *(_DWORD *)(v23 + 48) = 0;
        *(_QWORD *)(v23 + 72) = 0LL;
        *(_QWORD *)(v23 + 64) = 0LL;
        *(_QWORD *)(v23 + 136) = 0LL;
        *(_QWORD *)(v23 + 128) = 0LL;
        *(_QWORD *)(v23 + 168) = 0LL;
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v10, 0LL, 2u, 0LL, 0);
  }
  return (PNET_BUFFER_LIST)v10;
}
