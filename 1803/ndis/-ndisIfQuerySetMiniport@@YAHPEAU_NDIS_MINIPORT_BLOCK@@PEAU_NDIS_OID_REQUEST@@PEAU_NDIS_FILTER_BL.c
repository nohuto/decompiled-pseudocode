/*
 * XREFs of ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DCA24
 * Callers:
 *     ?ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z @ 0x1C00AE7F0 (-ndisIfQueryFilterObject@@YAHPEAU_NDIS_FILTER_BLOCK@@IPEAKPEAX@Z.c)
 *     ?ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z @ 0x1C00C5D00 (-ndisIfQueryMiniportObject@@YAHPEAU_NDIS_MINIPORT_BLOCK@@IPEAKPEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000ABF0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000C080 (ndisReferenceMiniportByHandleForNsi.c)
 */

__int64 __fastcall ndisIfQuerySetMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_FILTER_BLOCK *a3)
{
  unsigned int v6; // ebx
  unsigned int SetMiniport; // eax
  __int64 v8; // rdx

  v6 = -1073741823;
  if ( (unsigned __int8)ndisReferenceMiniportByHandleForNsi((__int64)a1) )
  {
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, a2, 0LL, (__int64)a3);
    LOBYTE(v8) = 4;
    v6 = SetMiniport;
    ndisDereferenceMiniportForNsi((__int64)a1, v8, 0x3Du);
  }
  return v6;
}
