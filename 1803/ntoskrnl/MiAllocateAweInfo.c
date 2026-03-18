/*
 * XREFs of MiAllocateAweInfo @ 0x14074F6C8
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x14074FE5C (NtAllocateUserPhysicalPages.c)
 *     MiCreateEnclave @ 0x140751C18 (MiCreateEnclave.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiResizeAweBitMap @ 0x14074FBC0 (MiResizeAweBitMap.c)
 */

__int64 MiAllocateAweInfo()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x77416D4Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x28uLL);
  return MiResizeAweBitMap(v1);
}
