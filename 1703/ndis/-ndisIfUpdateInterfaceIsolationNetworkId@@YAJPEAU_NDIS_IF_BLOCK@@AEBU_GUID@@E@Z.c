/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0041468
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00411E8 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     NdisMSetInterfaceCompartment @ 0x1C00438A0 (NdisMSetInterfaceCompartment.c)
 * Callees:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001CCC8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkId(struct _NDIS_IF_BLOCK *a1, const struct _GUID *a2, char a3)
{
  KIRQL v6; // bl
  int updated; // edi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, a2, a3);
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( updated < 0 )
    return (unsigned int)updated;
  v9[0] = 0LL;
  v9[1] = &a1->NetworkGuid;
  v9[2] = 16LL;
  ndisNsiNotifyClientInterfaceChange(a1, 0LL, v9);
  return 0LL;
}
