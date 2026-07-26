/*
 * XREFs of ndisReturnQueuedLowPowerNbls @ 0x1C001F938
 * Callers:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C01053F0 (ndisDevicePowerOn.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 3896);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3896));
  if ( a2 )
    *(_BYTE *)(a1 + 3924) = 1;
  v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3912);
  if ( v6 )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(v6, 0LL, *(_QWORD *)(a1 + 4104), 0x8Du, 1u);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 3784) + 192LL))(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 3912),
      1LL);
    *(_QWORD *)(a1 + 3912) = 0LL;
  }
  KeReleaseSpinLock(v2, v5);
}
