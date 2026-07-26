/*
 * XREFs of ??A?$KArray@PEAUNDIS_BIND_FILTER_LINK@@$00@Rtl@@QEAAAEAPEAUNDIS_BIND_FILTER_LINK@@_K@Z @ 0x1C00AA054
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Rtl::KArray<NDIS_BIND_FILTER_LINK *,1>::operator[](__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= *(unsigned int *)(a1 + 4) )
    __fastfail(5u);
  return *(_QWORD *)(a1 + 8) + 8 * a2;
}
