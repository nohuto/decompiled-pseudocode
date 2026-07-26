/*
 * XREFs of ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00056C8
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C0004FD4 (ndisUpdateOperationalStatus.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0005230 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     NdisMIndicateStatus @ 0x1C005DF60 (NdisMIndicateStatus.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0065AB8 (ndisSendSystemPowerStateIndication.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMReleaseStInLockAndSpinLock(struct _NDIS_MINIPORT_BLOCK *a1, KIRQL a2)
{
  a1->SyncFlags &= ~1u;
  a1->StatusProcessingDbgX = 0;
  a1->StatusProcessingThread = 0LL;
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  KeLowerIrql(a2);
}
