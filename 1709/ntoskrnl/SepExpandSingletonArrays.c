/*
 * XREFs of SepExpandSingletonArrays @ 0x140131D74
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  PVOID PoolWithTag; // rax
  void *v1; // rdi
  KIRQL v2; // si
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rbx
  PEX_SPIN_LOCK v6; // rcx
  void *v7; // rbx

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
    if ( v3 )
    {
      v5 = SepSingletonGlobal;
      memmove(v3, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
      v4[*((unsigned int *)v5 + 1)] = v1;
      v6 = SepSingletonGlobal;
      v7 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
      ++*((_DWORD *)SepSingletonGlobal + 1);
      *((_QWORD *)v6 + 1) = v4;
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      __writecr8(v2);
      ExFreePoolWithTag(v7, 0x74446553u);
      return 0LL;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SepSingletonGlobal);
    __writecr8(v2);
    ExFreePoolWithTag(v1, 0x74446553u);
  }
  return 3221225495LL;
}
