/*
 * XREFs of sub_18005905C @ 0x18005905C
 * Callers:
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 * Callees:
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180059228 @ 0x180059228 (sub_180059228.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 sub_18005905C()
{
  struct _TEB *v0; // r13
  PVOID ProcessHeap; // r12
  ULONG SizeOfBitMap; // r15d
  PVOID *p_ThreadLocalStoragePointer; // rdi
  _DWORD *i; // rcx
  _DWORD *v5; // r14
  int v6; // ecx
  char v7; // al
  int v8; // r8d
  PVOID Heap; // rax
  _QWORD *v10; // rcx
  ULONG j; // r14d
  PVOID *v13; // r8
  __int64 v14; // [rsp+58h] [rbp-70h]
  size_t Size; // [rsp+60h] [rbp-68h]
  int v16; // [rsp+D0h] [rbp+8h]
  _DWORD *v17; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&stru_18015C0D8);
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  if ( !BitMapHeader.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_14:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&dword_18015B1A0);
    RtlReleaseSRWLockShared(&stru_18015C0D8);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (PVOID *)sub_180059228(BitMapHeader.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    for ( i = off_1801555D0; i != (_DWORD *)&off_1801555D0; i = v17 )
    {
      v5 = i;
      v17 = *(_DWORD **)i;
      v6 = (i[13] >> 20) & 0xF;
      Size = *((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2);
      v7 = v6 - 1;
      if ( !v6 )
        v7 = 0;
      v8 = 1 << v7;
      if ( (unsigned int)(1 << v7) < 0x10 )
        v8 = 16;
      v16 = v8 - 1;
      v14 = (unsigned int)(v8 - 1);
      Heap = RtlAllocateHeap(
               ProcessHeap,
               dword_18015B268 + 786432,
               v14 + *((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2) + 1LL);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&stru_18015C0D8);
        for ( j = 0; j < SizeOfBitMap; ++j )
        {
          v13 = (PVOID *)p_ThreadLocalStoragePointer[j];
          if ( v13 )
            RtlFreeHeap(ProcessHeap, 0, *(v13 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v10 = (_QWORD *)(~v14 & ((unsigned __int64)Heap + (unsigned int)(v16 + 1)));
      *(v10 - 1) = Heap;
      p_ThreadLocalStoragePointer[v5[16]] = v10;
      memmove(v10, *((const void **)v5 + 2), Size);
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          v5[16],
          v5[6] - v5[4],
          *((const void **)v5 + 2),
          p_ThreadLocalStoragePointer[v5[16]]);
    }
    goto LABEL_14;
  }
  RtlReleaseSRWLockShared(&stru_18015C0D8);
  return 3221225495LL;
}
