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

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1)
{
  bool v2; // bl
  _QWORD *Heap; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v8 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !TppPoolpGlobalPoolStackSize
    || *(_QWORD *)(TppPoolpGlobalPoolStackSize + 8) < a1[1]
    || *(_QWORD *)TppPoolpGlobalPoolStackSize < *a1 )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    Heap = (_QWORD *)TppPoolpGlobalPoolStackSize;
    if ( TppPoolpGlobalPoolStackSize
      || (Heap = (_QWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 16LL),
          (TppPoolpGlobalPoolStackSize = (__int64)Heap) != 0) )
    {
      v4 = Heap[1];
      v5 = a1[1];
      if ( v4 < v5 )
        Heap[1] = v5;
      v2 = v4 < v5;
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
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
    v6 = TpPoolReferenceExistingGlobalPool();
    if ( v6 )
    {
      v8 = TpSetPoolStackInformation(v6, TppPoolpGlobalPoolStackSize);
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return (unsigned int)v8;
}
