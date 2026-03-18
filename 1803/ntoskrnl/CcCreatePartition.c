/*
 * XREFs of CcCreatePartition @ 0x1401709C8
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcInitializeCacheManager @ 0x1408A0410 (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x140170A1C (CcInitializePartition.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void *CcCreatePartition()
{
  PVOID PoolWithTag; // rax
  void *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72506343u);
  v1 = PoolWithTag;
  if ( PoolWithTag && !(unsigned __int8)CcInitializePartition(PoolWithTag) )
  {
    CcDeletePartition(v1);
    return 0LL;
  }
  return v1;
}
