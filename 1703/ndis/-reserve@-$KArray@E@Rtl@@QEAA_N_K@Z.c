/*
 * XREFs of ?reserve@?$KArray@E@Rtl@@QEAA_N_K@Z @ 0x1C00B655C
 * Callers:
 *     ndisEnumerateFilterInstances @ 0x1C00B5CAC (ndisEnumerateFilterInstances.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

char __fastcall Rtl::KArray<unsigned char>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  PVOID PoolWithTag; // rax
  PVOID v5; // rbp
  void *v6; // rcx
  char result; // al

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 >= 0xFFFFFFFF )
    return 0;
  if ( !is_mul_ok(1uLL, a2) )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x7272414Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *((const void **)a1 + 1), a1[1]);
  v6 = (void *)*((_QWORD *)a1 + 1);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7272414Bu);
  *a1 = v2;
  result = 1;
  *((_QWORD *)a1 + 1) = v5;
  return result;
}
