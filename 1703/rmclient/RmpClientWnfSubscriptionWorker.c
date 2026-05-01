/*
 * XREFs of RmpClientWnfSubscriptionWorker @ 0x1800047C0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180007FEE (memcpy_0.c)
 */

__int64 __fastcall RmpClientWnfSubscriptionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Src,
        size_t Size)
{
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 result; // rax

  if ( !Src )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesReceived);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(Size + 20));
  v8 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = Size;
    memcpy_0((char *)Heap + 20, Src, (unsigned int)Size);
    RtlAcquireSRWLockExclusive(a4 + 32, v9, v10);
    v11 = *(_QWORD **)(a4 + 24);
    if ( *v11 != a4 + 16 )
      __fastfail(3u);
    *v8 = a4 + 16;
    v8[1] = v11;
    *v11 = v8;
    *(_QWORD *)(a4 + 24) = v8;
    if ( !*(_BYTE *)(a4 + 64) )
    {
      TpPostWork(*(_QWORD *)(a4 + 56));
      *(_BYTE *)(a4 + 64) = 1;
    }
    RtlReleaseSRWLockExclusive(a4 + 32);
    return 0LL;
  }
  result = 3221225495LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesDropped);
  return result;
}
