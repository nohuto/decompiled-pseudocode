/*
 * XREFs of NdisAllocateNetBuffer @ 0x1C0018700
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C004C0E0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0018908 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  int v4; // r12d
  PSLIST_ENTRY v8; // rbx
  unsigned int Number; // ebp
  unsigned __int64 v10; // rax
  char *v11; // rdi
  _SLIST_HEADER *v12; // rcx
  ULONG v13; // ecx
  PMDL v14; // rax
  unsigned __int64 v16; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v18; // al
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rcx
  ULONG ByteCount; // edx
  KIRQL v23; // al
  __int64 v24; // r8

  v4 = DataLength;
  v8 = 0LL;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 22) & 1) != 0 )
    {
      DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
    }
    else
    {
      Number = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_10;
      v10 = (unsigned __int64)Number << 8;
      v11 = (char *)PoolHandle + v10 + 384;
      if ( !v11[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v10 + 384),
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
      v12 = (_SLIST_HEADER *)*((_QWORD *)v11 + 24);
      ++*((_DWORD *)v11 + 5);
      v8 = ExpInterlockedPopEntrySList(v12);
      if ( !v8 )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v11 + 25)) < 0xAu
          || (v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 26),
              v24 = *((_QWORD *)v11 + 24),
              *((_QWORD *)v11 + 24) = *((_QWORD *)v11 + 25),
              *((_QWORD *)v11 + 25) = v24,
              KeReleaseSpinLock((PKSPIN_LOCK)v11 + 26, v23),
              (v8 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v11 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v11 + 6);
        }
      }
      if ( !v8 )
      {
LABEL_10:
        ++*((_DWORD *)PoolHandle + 37);
        v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( !v8 )
        {
          v16 = *((unsigned int *)PoolHandle + 43);
          ++*((_DWORD *)PoolHandle + 38);
          if ( v16 + 32 < v16 )
            return 0LL;
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v16 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v8 = PoolWithTagPriority + 2;
          }
          else
          {
            v8 = 0LL;
          }
          if ( !v8 )
            return 0LL;
          v8[-2].Next = (_SLIST_ENTRY *)PoolHandle;
          v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
          v19 = (char *)PoolHandle + 16;
          v20 = *((_QWORD *)PoolHandle + 2);
          v21 = &v8[-2].Next + 1;
          if ( *(NDIS_HANDLE *)(v20 + 8) != (char *)PoolHandle + 16 )
            __fastfail(3u);
          v21[1] = v19;
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v19 = v21;
          KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v18);
        }
        *((_DWORD *)&v8[-1].Next + 2) = Number;
      }
      v8->Next = 0LL;
      v13 = DataOffset;
      *((_QWORD *)&v8[3].Next + 1) = PoolHandle;
      v14 = MdlChain;
      *((_QWORD *)&v8->Next + 1) = 0LL;
      LODWORD(v8[1].Next) = 0;
      v8[2].Next = 0LL;
      *((_DWORD *)&v8[2].Next + 2) = 0;
      *((_DWORD *)&v8[1].Next + 2) = 0;
      LODWORD(v8[3].Next) = 0;
      *((_QWORD *)&v8[4].Next + 1) = 0LL;
      v8[4].Next = 0LL;
      *((_QWORD *)&v8[8].Next + 1) = 0LL;
      v8[8].Next = 0LL;
      for ( *((_QWORD *)&v8[10].Next + 1) = 0LL; v14; v13 -= ByteCount )
      {
        ByteCount = v14->ByteCount;
        if ( v13 < ByteCount )
          break;
        v14 = v14->Next;
      }
      v8[2].Next = (_SLIST_ENTRY *)MdlChain;
      *((_DWORD *)&v8[2].Next + 2) = DataOffset;
      *((_DWORD *)&v8[1].Next + 2) = v4;
      *((_QWORD *)&v8->Next + 1) = v14;
      LODWORD(v8[1].Next) = v13;
    }
  }
  return (PNET_BUFFER)v8;
}
