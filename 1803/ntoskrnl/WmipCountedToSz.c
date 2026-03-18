/*
 * XREFs of WmipCountedToSz @ 0x14051B818
 * Callers:
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
