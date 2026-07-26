/*
 * XREFs of ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003EFB4
 * Callers:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0013BC8 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001A680 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E5D8 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     NdisMSetInterfaceCompartment @ 0x1C0041740 (NdisMSetInterfaceCompartment.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
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
