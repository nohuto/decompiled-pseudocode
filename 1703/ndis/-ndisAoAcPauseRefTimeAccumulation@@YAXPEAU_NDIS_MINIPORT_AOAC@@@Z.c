/*
 * XREFs of ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C34
 * Callers:
 *     ndisRequestDeviceLowPower @ 0x1C00A7C80 (ndisRequestDeviceLowPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C90 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcPauseRefTimeAccumulation(struct _NDIS_MINIPORT_AOAC *a1)
{
  KIRQL v2; // r8

  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  if ( a1->CurrentCsResiliencyStartTime )
  {
    a1->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - a1->CurrentCsResiliencyStartTime;
    a1->CurrentCsResiliencyStartTime = 0LL;
  }
  ndisAoAcPauseRefTimeStats(a1);
  KeReleaseSpinLock(&a1->Lock, v2);
}
