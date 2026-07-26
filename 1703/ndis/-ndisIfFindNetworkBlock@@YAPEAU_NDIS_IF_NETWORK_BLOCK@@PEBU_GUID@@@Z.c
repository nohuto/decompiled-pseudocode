/*
 * XREFs of ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B9F4
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0012ED4 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C00165F8 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B330 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001CCC8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0040768 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00427D0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0043260 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00108F0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

struct _NDIS_IF_NETWORK_BLOCK *__fastcall ndisIfFindNetworkBlock(const struct _GUID *a1)
{
  _LIST_ENTRY *Flink; // rbx
  __int64 v3; // rdi
  int v4; // eax

  Flink = ndisIfNetworkList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfNetworkList )
  {
    v4 = ndisCompareGuid((const struct _GUID *)&Flink[2], a1);
    if ( !v4 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)Flink;
    if ( v4 > 0 )
      return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
    Flink = Flink->Flink;
  }
  return (struct _NDIS_IF_NETWORK_BLOCK *)v3;
}
