/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0
 * Callers:
 *     ndisMOidRequest @ 0x1C000A070 (ndisMOidRequest.c)
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003B1A0 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B378 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0045480 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C00457D0 (ndisMDirectOidRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0052830 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0057060 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C0058190 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005C000 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C010E070 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C010F3E0 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C01140D0 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0114234 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1, char a2)
{
  __int64 v2; // rbp
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // bl

  v2 = *(_QWORD *)(a1 + 16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  LOBYTE(v6) = a2;
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v7 = v5;
  *(_DWORD *)(v2 + 1856) = 1442229;
  ndisMDereferenceOpenLocked(a1, v6);
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
}
