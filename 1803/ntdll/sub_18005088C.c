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

__int64 __fastcall sub_18005088C(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rsi
  void *ProcessHeap; // r15
  unsigned int v6; // r14d
  void **p_ThreadLocalStoragePointer; // rbx
  _UNKNOWN **v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  __int64 Heap; // rax
  _QWORD *v12; // rcx
  __int64 i; // rsi
  _QWORD *v15; // r8
  __int64 Size; // [rsp+50h] [rbp-78h]
  unsigned int v17; // [rsp+D0h] [rbp+8h] BYREF
  int v18; // [rsp+D8h] [rbp+10h]
  _UNKNOWN **v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&qword_18015D118, a2, a3, a4);
  v6 = dword_18015C1D0;
  v18 = dword_18015C1D0;
  if ( !dword_18015C1D0 )
  {
    p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
LABEL_9:
    v4->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&dword_18015C1C0);
    RtlReleaseSRWLockShared(&qword_18015D118);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)sub_180050A6C((unsigned int)dword_18015C1D0);
  if ( p_ThreadLocalStoragePointer )
  {
    v8 = &off_1801565D8;
    v19 = &off_1801565D8;
    v9 = off_1801565D8;
    while ( v9 != v8 )
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
      Size = sub_180050A28(v10, &v17);
      v20 = v17;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 786432, v17 + 1LL + Size);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&qword_18015D118);
        for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
        {
          v15 = p_ThreadLocalStoragePointer[i];
          if ( v15 )
            RtlFreeHeap((__int64)ProcessHeap, 0, *(v15 - 1));
        }
        RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)(p_ThreadLocalStoragePointer - 2));
        return 3221225495LL;
      }
      v12 = (_QWORD *)(~v20 & (Heap + v17 + 1));
      *(v12 - 1) = Heap;
      p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)] = v12;
      memmove(v12, (const void *)v10[2], Size);
      v8 = v19;
      if ( (dword_180156A70 & 5) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          *((_DWORD *)v10 + 16),
          *((_DWORD *)v10 + 6) - v10[2],
          (const void *)v10[2],
          p_ThreadLocalStoragePointer[*((unsigned int *)v10 + 16)]);
        v8 = v19;
      }
    }
    goto LABEL_9;
  }
  RtlReleaseSRWLockShared(&qword_18015D118);
  return 3221225495LL;
}
