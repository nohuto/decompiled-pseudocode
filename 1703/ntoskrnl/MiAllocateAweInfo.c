/*
 * XREFs of MiAllocateAweInfo @ 0x1406B84C0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtAllocateUserPhysicalPages @ 0x1406B8F84 (NtAllocateUserPhysicalPages.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
