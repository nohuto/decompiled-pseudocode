/*
 * XREFs of ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00725E0
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072728 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcResumeRefTimeAccumulation(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int64 v2; // rcx
  PKSPIN_LOCK v3; // rcx
  KIRQL v4; // r10

  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  v2 = 0LL;
  if ( a1->IsInCsResiliency )
    v2 = MEMORY[0xFFFFF78000000008];
  a1->CurrentCsResiliencyStartTime = v2;
  ndisAoAcStartRefTimeStats(a1);
  KeReleaseSpinLock(v3, v4);
}
