/*
 * XREFs of ?append@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAA_N$$QEAPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA690
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     ?grow@?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00AA6DC (-grow@-$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::append(__int64 a1, _QWORD *a2)
{
  char result; // al
  _QWORD *v5; // r8

  result = Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::grow(a1, (unsigned int)(*(_DWORD *)(a1 + 4) + 1));
  if ( result )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 4));
    if ( v5 )
      *v5 = *a2;
    ++*(_DWORD *)(a1 + 4);
    return 1;
  }
  return result;
}
