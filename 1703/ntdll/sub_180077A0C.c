/*
 * XREFs of sub_180077A0C @ 0x180077A0C
 * Callers:
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

volatile signed __int32 *__fastcall sub_180077A0C(PRTL_SRWLOCK SRWLock, unsigned int a2)
{
  __int64 v3; // r14
  volatile signed __int32 *Ptr; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  _RTL_SRWLOCK *Heap; // rax
  _RTL_SRWLOCK *v9; // rbx
  PRTL_SRWLOCK *v10; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    Ptr = (volatile signed __int32 *)SRWLock[v3 + 410].Ptr;
    if ( Ptr )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd(Ptr + 4, 1u);
      if ( (unsigned int)v5 < 0xF )
        return &Ptr[16 * v5 + 8];
    }
    Heap = (_RTL_SRWLOCK *)RtlAllocateHeap(SRWLock[3].Ptr, 0x800000u, 0x3F0uLL);
    v9 = Heap;
    if ( !Heap )
      return 0LL;
    LODWORD(Heap[2].Ptr) = 1;
    v6 = ((unsigned __int64)&Heap[4].Ptr + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( Ptr == SRWLock[v3 + 410].Ptr )
      break;
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlFreeHeap(SRWLock[3].Ptr, 0x800000u, v9);
  }
  v10 = (PRTL_SRWLOCK *)SRWLock[2].Ptr;
  if ( *v10 != &SRWLock[1] )
    __fastfail(3u);
  v9[1].Ptr = v10;
  v9->Ptr = &SRWLock[1];
  *v10 = v9;
  SRWLock[2].Ptr = v9;
  SRWLock[v3 + 410].Ptr = v9;
  RtlReleaseSRWLockExclusive(SRWLock);
  return (volatile signed __int32 *)v6;
}
