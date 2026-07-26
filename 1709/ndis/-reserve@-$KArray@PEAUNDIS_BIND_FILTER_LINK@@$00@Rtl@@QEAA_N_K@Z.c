/*
 * XREFs of ?reserve@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00AA720
 * Callers:
 *     ?grow@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00AA6DC (-grow@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

char __fastcall Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx

  v2 = a2;
  if ( *a1 < a2 )
  {
    if ( a2 >= 0xFFFFFFFF )
      return 0;
    if ( !is_mul_ok(8uLL, a2) )
      return 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
    v7 = (void *)*((_QWORD *)a1 + 1);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x7272414Bu);
    *a1 = v2;
    *((_QWORD *)a1 + 1) = v6;
  }
  return 1;
}
