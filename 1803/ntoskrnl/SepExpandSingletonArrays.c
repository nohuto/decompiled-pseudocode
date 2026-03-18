/*
 * XREFs of SepExpandSingletonArrays @ 0x1400D2998
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1404F0CC4 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  PVOID PoolWithTag; // rax
  void *v1; // rdi
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  unsigned __int64 v5; // rsi
  PEX_SPIN_LOCK v6; // rbx
  PEX_SPIN_LOCK v7; // rcx
  void *v8; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x600uLL);
    v2 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
    v3 = ExAllocatePoolWithTag(
           NonPagedPoolNx,
           8LL * (unsigned int)(*((_DWORD *)SepSingletonGlobal + 1) + 1),
           0x74446553u);
    v4 = v3;
    v5 = v2;
    if ( v3 )
    {
      v6 = SepSingletonGlobal;
      memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
      v4[*((unsigned int *)v6 + 1)] = v1;
      v7 = SepSingletonGlobal;
      v8 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
      ++*((_DWORD *)SepSingletonGlobal + 1);
      *((_QWORD *)v7 + 1) = v4;
      ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      __writecr8(v5);
      ExFreePoolWithTag(v8, 0x74446553u);
      return 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SepSingletonGlobal);
    __writecr8(v2);
    ExFreePoolWithTag(v1, 0x74446553u);
  }
  return 3221225495LL;
}
