/*
 * XREFs of ?reserve@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5A1C
 * Callers:
 *     ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00B5AB4 (-grow@-$KArray@PEAX@Rtl@@AEAA_N_K@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00B5AEC (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

char __fastcall Rtl::KArray<void *>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v5; // rsi
  void *v6; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
      v6 = (void *)*((_QWORD *)a1 + 1);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x7272414Bu);
      *a1 = v2;
      *((_QWORD *)a1 + 1) = v5;
      return 1;
    }
  }
  return 0;
}
