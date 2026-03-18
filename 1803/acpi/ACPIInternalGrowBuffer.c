/*
 * XREFs of ACPIInternalGrowBuffer @ 0x1C007D86C
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1C0085A98 (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0085B80 (PnpiGrowResourceList.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIInternalGrowBuffer(const void **a1, unsigned int a2, unsigned int a3)
{
  size_t v3; // rsi
  size_t v5; // rbp
  PVOID PoolWithTag; // rax
  void *v7; // rdi

  v3 = a3;
  v5 = a2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3, 0x52706341u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    if ( *a1 )
    {
      memmove(v7, *a1, v5);
      ExFreePoolWithTag((PVOID)*a1, 0);
    }
    *a1 = v7;
    return 0LL;
  }
  else
  {
    if ( *a1 )
    {
      ExFreePoolWithTag((PVOID)*a1, 0);
      *a1 = 0LL;
    }
    return 3221225626LL;
  }
}
