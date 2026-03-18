/*
 * XREFs of MmFreeBootRegistry @ 0x1405BF31C
 * Callers:
 *     CmpFreeBootRegistry @ 0x1401E5D58 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rsi
  unsigned __int64 *v3; // rbx
  size_t i; // rdi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  ULONG_PTR v8; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140389288, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    for ( i = 0LL; i < v2; ++i )
    {
      PteAddress = MiGetPteAddress(*v3);
      if ( i == v2 - 1 || v7 + 4096 != v3[1] )
      {
        if ( v6 == 1 )
        {
          v6 = 1LL;
          v8 = PteAddress;
        }
        else
        {
          v8 = PteAddress - 8 * v6 + 8;
        }
        MiDeleteBootRange(v8, v6);
      }
      ++v3;
    }
    ExFreePoolWithTag(v1, 0);
    qword_140389288 = 0LL;
  }
}
