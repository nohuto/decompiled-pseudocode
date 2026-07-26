/*
 * XREFs of ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072928
 * Callers:
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F32B0 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0071E94 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

void __fastcall ndisAoAcTakeInternalRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v2; // al
  KIRQL v3; // bl

  AoAc = a1->AoAc;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x1Du, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, (__int64)a1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->TempRefReason = NdisAoAcTempRefInternal;
  v3 = v2;
  ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentInternal);
  KeReleaseSpinLock(&AoAc->Lock, v3);
}
