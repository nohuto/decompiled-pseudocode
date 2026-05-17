/*
 * XREFs of sub_180049998 @ 0x180049998
 * Callers:
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180049998(unsigned __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  volatile signed __int64 *v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *i; // rdx
  volatile signed __int32 *v10; // rcx
  void *Heap; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  _QWORD *j; // rcx
  volatile signed __int32 *v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v4 = qword_18015D058;
  if ( a3 )
    return 3221225485LL;
  v7 = (volatile signed __int64 *)(qword_18015D058 + 8);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 8), a2, 0LL, a4);
  v8 = (_QWORD *)(v4 + 16);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = (volatile signed __int32 *)(i - 4);
    if ( (char *)*(i - 2) == a2 )
    {
      _InterlockedIncrement(v10 + 27);
      *a1 = (unsigned __int64)v10;
      RtlReleaseSRWLockShared(v7);
      return 0LL;
    }
  }
  RtlReleaseSRWLockShared(v7);
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 152LL);
  v12 = (unsigned __int64)Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0x98uLL);
    *(_DWORD *)v12 = 9963794;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 56) = 0LL;
    *(_QWORD *)(v12 + 16) = a2;
    *(_QWORD *)(v12 + 72) = v12 + 64;
    *(_QWORD *)(v12 + 64) = v12 + 64;
    *(_DWORD *)(v12 + 128) = 0;
    *(_QWORD *)(v12 + 120) = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 108) = 1;
    RtlAcquireSRWLockExclusive((unsigned __int64)v7, v13, v14, v15);
    for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
    {
      v17 = (volatile signed __int32 *)(j - 4);
      if ( (char *)*(j - 2) == a2 )
      {
        _InterlockedIncrement(v17 + 27);
        *a1 = (unsigned __int64)v17;
        RtlReleaseSRWLockExclusive(v7);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
        return 0LL;
      }
    }
    v18 = (_QWORD *)*v8;
    v19 = (_QWORD *)(v12 + 32);
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v12 + 40) = v8;
    v18[1] = v19;
    *v8 = v19;
    *a1 = v12;
    RtlReleaseSRWLockExclusive(v7);
    return 0LL;
  }
  return 3221225495LL;
}
