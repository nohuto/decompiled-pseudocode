/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x180014360
 * Callers:
 *     <none>
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180013550 (TpPoolReferenceExistingGlobalPool.c)
 *     TpSetPoolStackInformation @ 0x180014490 (TpSetPoolStackInformation.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(SIZE_T *a1)
{
  bool v2; // bl
  PTP_POOL_STACK_INFORMATION Heap; // rax
  SIZE_T StackCommit; // r8
  SIZE_T v5; // rcx
  _TP_POOL *v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v8 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || TppPoolpGlobalPoolStackSize->StackCommit < a1[1]
    || TppPoolpGlobalPoolStackSize->StackReserve < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (PTP_POOL_STACK_INFORMATION)RtlAllocateHeap(
                                               NtCurrentPeb()->ProcessHeap,
                                               (TppHeapTag + 786432) | 8,
                                               0x10uLL),
          (TppPoolpGlobalPoolStackSize = Heap) != 0LL) )
    {
      StackCommit = Heap->StackCommit;
      v5 = a1[1];
      if ( StackCommit < v5 )
        Heap->StackCommit = v5;
      v2 = StackCommit < v5;
      if ( Heap->StackReserve < *a1 )
      {
        Heap->StackReserve = *a1;
        v2 = 1;
      }
    }
    else
    {
      v8 = -1073741801;
      v2 = 0;
    }
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( v8 >= 0 && v2 )
  {
    v6 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool();
    if ( v6 )
    {
      v8 = TpSetPoolStackInformation(v6, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v8;
}
