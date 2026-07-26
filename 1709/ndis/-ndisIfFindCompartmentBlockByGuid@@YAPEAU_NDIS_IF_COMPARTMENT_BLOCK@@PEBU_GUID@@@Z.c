/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003DC64
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C00205F0 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003D288 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     NdisMSetInterfaceCompartment @ 0x1C0040660 (NdisMSetInterfaceCompartment.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0041AAC (ndisIfReferenceCompartmentForUser.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0004ED8 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisIfFindCompartmentBlockByGuid(const struct _GUID *a1)
{
  _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rdi

  Flink = ndisIfCompartmentList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, a1) )
      return (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink;
    Flink = Flink->Flink;
  }
  return (struct _NDIS_IF_COMPARTMENT_BLOCK *)v3;
}
