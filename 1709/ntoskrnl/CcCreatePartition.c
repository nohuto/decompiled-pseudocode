/*
 * XREFs of CcCreatePartition @ 0x140148170
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcInitializeCacheManager @ 0x140842C3C (CcInitializeCacheManager.c)
 * Callees:
 *     CcInitializePartition @ 0x140147624 (CcInitializePartition.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

HANDLE *__fastcall CcCreatePartition(_QWORD *a1)
{
  HANDLE *PoolWithTag; // rax
  HANDLE *v3; // rbx

  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x72506343u);
  v3 = PoolWithTag;
  if ( PoolWithTag && !CcInitializePartition(PoolWithTag, a1) )
  {
    CcDeletePartition(v3);
    return 0LL;
  }
  return v3;
}
