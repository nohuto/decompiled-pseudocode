/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AE78
 * Callers:
 *     ndisReferenceOpenByHandle @ 0x1C001ADA0 (ndisReferenceOpenByHandle.c)
 *     ndisMRestoreFilterSettings @ 0x1C0047C1C (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C00509FC (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052500 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052B90 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0057650 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C00585D0 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C005C180 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00DC648 (ndisMDoProtocolRequest.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C00F7CE4 (ndisMOpenAdapter.c)
 *     ndisCreateNotifyQueue @ 0x1C0102EC8 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C0107F10 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C01091F4 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // bl

  v1 = (KSPIN_LOCK *)(a1 + 696);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688));
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock(v1, v3);
}
