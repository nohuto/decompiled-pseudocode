/*
 * XREFs of ??1?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA@XZ @ 0x1C00AA01C
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::~KArray<NDIS_BIND_FILTER_LINK *,1>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
}
