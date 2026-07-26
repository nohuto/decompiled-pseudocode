/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0010048
 * Callers:
 *     ndisMRestoreFilterSettings @ 0x1C004502C (ndisMRestoreFilterSettings.c)
 *     ndisMapOpenByName @ 0x1C004F5CC (ndisMapOpenByName.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051340 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00519D0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMSendPackets @ 0x1C00567A0 (ndisMSendPackets.c)
 *     ndisSendPacketsWithPause @ 0x1C00578F0 (ndisSendPacketsWithPause.c)
 *     NdisUnbindAdapter @ 0x1C005BCA0 (NdisUnbindAdapter.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMDoProtocolRequest @ 0x1C00ABBF8 (ndisMDoProtocolRequest.c)
 *     NdisOpenAdapterEx @ 0x1C0103020 (NdisOpenAdapterEx.c)
 *     ndisMOpenAdapter @ 0x1C01033B8 (ndisMOpenAdapter.c)
 *     ndisCreateNotifyQueue @ 0x1C010BE58 (ndisCreateNotifyQueue.c)
 *     NdisCoOidRequest @ 0x1C0110F20 (NdisCoOidRequest.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0112204 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
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
