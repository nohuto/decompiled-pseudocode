/*
 * XREFs of ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070CC8
 * Callers:
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00706DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 */

void __fastcall ndisAoAcPmInitTempRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v2; // r11

  AoAc = a1->AoAc;
  KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->TempRefReason = NdisAoAcTempRefPmInit;
  ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
  KeReleaseSpinLock(&AoAc->Lock, v2);
}
