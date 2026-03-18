/*
 * XREFs of MmFreeBootRegistry @ 0x1405BD3CC
 * Callers:
 *     CmpFreeBootRegistry @ 0x1401E1C54 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_14036CFC8, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
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
    qword_14036CFC8 = 0LL;
  }
}
