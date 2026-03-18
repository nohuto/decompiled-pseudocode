/*
 * XREFs of CmpInitializeNameCache @ 0x1405BF73C
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 CmpInitializeNameCache()
{
  PVOID PoolWithTag; // rax
  _QWORD *v1; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x61434D43u);
  CmpNameCacheTable = PoolWithTag;
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x67u, 3uLL, 2uLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x8000uLL);
  result = 2048LL;
  do
  {
    *v1 = 0LL;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
