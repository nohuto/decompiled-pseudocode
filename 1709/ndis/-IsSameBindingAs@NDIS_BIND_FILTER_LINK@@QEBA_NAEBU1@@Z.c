/*
 * XREFs of ?IsSameBindingAs@NDIS_BIND_FILTER_LINK@@QEBA_NAEBU1@@Z @ 0x1C00F9E50
 * Callers:
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     <none>
 */

bool __fastcall NDIS_BIND_FILTER_LINK::IsSameBindingAs(
        NDIS_BIND_FILTER_LINK *this,
        const struct NDIS_BIND_FILTER_LINK *a2)
{
  return this->BindDriver._p == a2->BindDriver._p && this->FilterIndex == a2->FilterIndex;
}
