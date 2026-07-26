/*
 * XREFs of ndisIfFindCompartmentBlock @ 0x1C000CFB0
 * Callers:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000CFF0 (-ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0012ED4 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00165F8 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001688C (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0040768 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040B10 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C00415F4 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00449D0 (ndisIfCreatePersistedInterface.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C0044EA0 (ndisIfGetCompartmentNamespaceGuid.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0044F04 (ndisIfReferenceCompartmentForUser.c)
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C00674C0 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindCompartmentBlock(unsigned int a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx
  unsigned int v3; // r8d

  Flink = ndisIfCompartmentList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfCompartmentList )
  {
    v3 = (unsigned int)Flink[1].Flink;
    if ( v3 == a1 )
      return Flink;
    if ( v3 > a1 )
      return (_LIST_ENTRY *)v2;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
