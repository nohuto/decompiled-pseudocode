/*
 * XREFs of ndisIfFindInterfaceByNetLuid @ 0x1C001D438
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00252B8 (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C003F240 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROP.c)
 *     ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F9E0 (-ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FF00 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0040190 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040C70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     NdisIfGetInterfaceIndexFromNetLuid @ 0x1C0041620 (NdisIfGetInterfaceIndexFromNetLuid.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0042630 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0042C6C (ndisIfSetIfDescr.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0074684 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall ndisIfFindInterfaceByNetLuid(_LIST_ENTRY *a1)
{
  _LIST_ENTRY *Flink; // rax
  __int64 v2; // rdx
  _LIST_ENTRY *v3; // r9

  Flink = ndisIfList.Flink;
  v2 = 0LL;
  while ( Flink != &ndisIfList )
  {
    v3 = Flink[5].Flink;
    if ( v3 > a1 )
      break;
    if ( v3 == a1 )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (_LIST_ENTRY *)v2;
}
