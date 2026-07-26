/*
 * XREFs of ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9D38
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007083C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisAoAcStart(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // r9
  unsigned __int64 v2; // r8
  bool v3; // cf

  AoAc = a1->AoAc;
  v2 = MEMORY[0xFFFFF78000000008];
  v3 = AoAc->IsInCsResiliency != 0;
  AoAc->StartTime = MEMORY[0xFFFFF78000000008];
  AoAc->CurrentActiveStartTime = v2;
  AoAc->TakeStartToRefTime = 1;
  AoAc->CurrentCsResiliencyStartTime = v2 & -(__int64)v3;
  if ( a1->AoAc )
    ndisAoAcClearStop(a1, NdisSSNotStarted);
}
