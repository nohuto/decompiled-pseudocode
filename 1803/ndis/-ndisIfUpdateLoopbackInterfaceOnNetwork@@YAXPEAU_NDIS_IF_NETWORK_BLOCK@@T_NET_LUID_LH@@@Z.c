/*
 * XREFs of ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00252B8
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C0118 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001D438 (ndisIfFindInterfaceByNetLuid.c)
 */

void __fastcall ndisIfUpdateLoopbackInterfaceOnNetwork(struct _NDIS_IF_NETWORK_BLOCK *a1, union _NET_LUID_LH a2)
{
  KIRQL v4; // r8

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  a1->Compartment->LoopbackIf = (_NDIS_IF_BLOCK *)ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a2.Value);
  KeReleaseSpinLock(&ndisIfListLock, v4);
}
