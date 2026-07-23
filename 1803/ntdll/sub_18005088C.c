/*
 * XREFs of sub_18005088C @ 0x18005088C
 * Callers:
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180050A28 @ 0x180050A28 (sub_180050A28.c)
 *     sub_180050A6C @ 0x180050A6C (sub_180050A6C.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 sub_18005088C()
{
  struct _TEB *v0; // rsi
  PVOID ProcessHeap; // r15
  ULONG SizeOfBitMap; // r14d
  PVOID *p_ThreadLocalStoragePointer; // rbx
  _UNKNOWN **v4; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // r13
  PVOID Heap; // rax
  _QWORD *v8; // rcx
  __int64 i; // rsi
  PVOID *v11; // r8
  __int64 Size; // [rsp+50h] [rbp-78h]
  unsigned int v13; // [rsp+D0h] [rbp+8h] BYREF
  ULONG v14; // [rsp+D8h] [rbp+10h]
  _UNKNOWN **v15; // [rsp+E0h] [rbp+18h]
  __int64 v16; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&stru_18015D118);
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v14 = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_9:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&dword_18015C1C0);
    RtlReleaseSRWLockShared(&stru_18015D118);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (PVOID *)sub_180050A6C(BitMapHeader.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    v4 = &off_1801565D8;
    v15 = &off_1801565D8;
    v5 = off_1801565D8;
    while ( v5 != v4 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
      Size = sub_180050A28(v6, &v13);
      v16 = v13;
      Heap = RtlAllocateHeap(ProcessHeap, Flags + 786432, v13 + 1LL + Size);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&stru_18015D118);
        for ( i = 0LL; (unsigned int)i < SizeOfBitMap; i = (unsigned int)(i + 1) )
        {
          v11 = (PVOID *)p_ThreadLocalStoragePointer[i];
          if ( v11 )
            RtlFreeHeap(ProcessHeap, 0, *(v11 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v8 = (_QWORD *)(~v16 & ((unsigned __int64)Heap + v13 + 1));
      *(v8 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v6 + 16)] = v8;
      memmove(v8, (const void *)v6[2], Size);
      v4 = v15;
      if ( (dword_180156A70 & 5) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v6 + 16),
          *((_DWORD *)v6 + 6) - v6[2],
          (const void *)v6[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v6 + 16)]);
        v4 = v15;
      }
    }
    goto LABEL_9;
  }
  RtlReleaseSRWLockShared(&stru_18015D118);
  return 3221225495LL;
}
