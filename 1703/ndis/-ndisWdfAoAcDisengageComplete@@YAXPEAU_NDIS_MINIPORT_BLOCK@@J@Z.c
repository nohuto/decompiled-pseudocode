/*
 * XREFs of ?ndisWdfAoAcDisengageComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0072D70
 * Callers:
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0072E58 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C00E9400 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00709B8 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007269C (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisWdfAoAcDisengageComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v5; // al
  int v6; // r8d

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->WdfAoAcTransition = 0;
  v6 = 4;
  if ( a2 >= 0 )
    v6 = 0;
  AoAc->ActiveState = v6;
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, 7);
  ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  ndisAoAcCompleteQueuedIrps(a1, a2);
  KeSetEvent(&AoAc->WdfAoAcDisengagedEvent, 0, 0);
}
