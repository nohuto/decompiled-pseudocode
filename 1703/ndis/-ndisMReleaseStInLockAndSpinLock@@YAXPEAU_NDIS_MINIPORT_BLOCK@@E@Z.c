/*
 * XREFs of ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019AF4
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C0016FF0 (ndisIndicateInitialStateToFilter.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0018100 (ndisIndicateInitialStateToBinding.c)
 *     ndisUpdateOperationalStatus @ 0x1C0019E64 (ndisUpdateOperationalStatus.c)
 *     NdisMIndicateStatus @ 0x1C005E1A0 (NdisMIndicateStatus.c)
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
