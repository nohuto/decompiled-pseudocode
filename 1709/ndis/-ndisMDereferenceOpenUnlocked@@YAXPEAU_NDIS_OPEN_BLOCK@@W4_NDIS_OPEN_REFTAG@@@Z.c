/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910
 * Callers:
 *     ndisMOidRequest @ 0x1C00094B0 (ndisMOidRequest.c)
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     ndisAllocateReceiveQueue @ 0x1C00396F4 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0039E14 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C0039FEC (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003B5FC (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C00442B0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0044600 (ndisMDirectOidRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0051EC0 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C00566C0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C00577D0 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005B8B0 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010B350 (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C010C0E0 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C010D450 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C01120A0 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0112204 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // r15
  int v5; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  v4 = v3;
  *(_DWORD *)(v1 + 1856) = 1442229;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 688));
  v5 = --*(_DWORD *)(a1 + 228);
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 696));
  if ( !v5 )
    ndisMFinishClose(a1);
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
}
