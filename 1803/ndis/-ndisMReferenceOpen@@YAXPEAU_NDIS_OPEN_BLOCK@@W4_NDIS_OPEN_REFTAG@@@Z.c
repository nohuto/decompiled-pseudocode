/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C00461E8 (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C004FF0C (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052330 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C0057140 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C00582B0 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C005C510 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00E7EDC (ndisMDoProtocolRequest.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 *     ndisCreateNotifyQueue @ 0x1C010DDE8 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C0112F30 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0114234 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // bl

  v2 = (KSPIN_LOCK *)(a1 + 696);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688), a2);
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock(v2, v5);
}
