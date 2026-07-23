/*
 * XREFs of RtlAllocateMemoryBlockLookaside @ 0x180112010
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180100DB4 (RtlpInitializeStackTraceLog.c)
 *     RtlpRegisterStackTrace @ 0x1801021EC (RtlpRegisterStackTrace.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x180076DA0 (RtlInitializeSListHead.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlAllocateMemoryZone @ 0x180112100 (RtlAllocateMemoryZone.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlAllocateMemoryBlockLookaside(PVOID MemoryBlockLookaside, ULONG BlockSize, PVOID *Block)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rax
  _SLIST_HEADER *v7; // rbx
  PSLIST_ENTRY v8; // rax
  _SLIST_ENTRY *v9; // rcx
  _SLIST_ENTRY *v10; // rax
  _SLIST_HEADER *v12; // rsi
  PSLIST_ENTRY v13; // rax
  PVOID Blocka; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&BlockSize;
  if ( *(_QWORD *)&BlockSize > *((_QWORD *)MemoryBlockLookaside + 4) )
    return -1073741811;
  v6 = *((_QWORD *)MemoryBlockLookaside + 3);
  v7 = (_SLIST_HEADER *)((char *)MemoryBlockLookaside + 48);
  while ( v6 < *(_QWORD *)&BlockSize )
  {
    v7 += 2;
    v6 *= 2LL;
  }
  v8 = RtlpInterlockedPopEntrySList(v7);
  v9 = v8;
  if ( v8 )
  {
    if ( ((unsigned __int8)v8 & 7) != 0
      || (_SLIST_HEADER *)v8[2].Next != v7
      || v8[1].Next != (_SLIST_ENTRY *)v7[1].Alignment )
    {
      RtlInitializeSListHead(v7);
      v9 = 0LL;
    }
    Blocka = v9;
    if ( v9 )
    {
LABEL_10:
      *((_QWORD *)&v9[1].Next + 1) = v4;
      v10 = v9 + 3;
LABEL_11:
      *Block = v10;
      return 0;
    }
  }
  else
  {
    Blocka = 0LL;
  }
  if ( RtlAllocateMemoryZone(*((PVOID *)MemoryBlockLookaside + 2), v7[1].Alignment + 64, &Blocka) >= 0 )
  {
    v9 = (_SLIST_ENTRY *)(((unsigned __int64)Blocka + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[2].Next = (_SLIST_ENTRY *)v7;
    v9[1].Next = (_SLIST_ENTRY *)v7[1].Alignment;
    goto LABEL_10;
  }
  v12 = (_SLIST_HEADER *)((char *)MemoryBlockLookaside + 32 * *((unsigned int *)MemoryBlockLookaside + 10) + 48);
  while ( v7 < v12 )
  {
    v13 = RtlpInterlockedPopEntrySList(v7);
    if ( v13 )
    {
      if ( ((unsigned __int8)v13 & 7) != 0
        || (_SLIST_HEADER *)v13[2].Next != v7
        || v13[1].Next != (_SLIST_ENTRY *)v7[1].Alignment )
      {
        RtlInitializeSListHead(v7);
        v13 = 0LL;
      }
      if ( v13 )
      {
        *((_QWORD *)&v13[1].Next + 1) = v4;
        v10 = v13 + 3;
        goto LABEL_11;
      }
    }
    v7 += 2;
  }
  return -1073741670;
}
