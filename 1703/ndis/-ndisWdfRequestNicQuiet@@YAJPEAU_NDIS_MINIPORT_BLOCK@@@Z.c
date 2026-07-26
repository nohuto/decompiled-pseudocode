/*
 * XREFs of ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00EAA34
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071ED0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9E30 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v3; // al

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->WdfAoAcTransition = 1;
  KeReleaseSpinLock(&AoAc->Lock, v3);
  ndisMSendOidPmParametersForAoAc(a1);
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  a1->DriverHandle->CxBlock->Chars.EvtCxPowerAoAcEngage(a1->MiniportAdapterContext);
  return 0LL;
}
