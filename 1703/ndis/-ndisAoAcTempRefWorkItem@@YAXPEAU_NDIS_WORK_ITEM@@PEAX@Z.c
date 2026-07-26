/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0070770 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071ED0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C00729D0 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  _NDIS_TMP_REF_REASON TempRefReason; // ecx
  KIRQL v6; // si
  int v7; // r8d

  AoAc = a2->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  TempRefReason = AoAc->TempRefReason;
  v6 = v4;
  if ( TempRefReason )
  {
    v7 = 1;
    if ( TempRefReason == NdisAoAcTempRefWake )
    {
      ++AoAc->CsSpuriousWakes;
      ndisUpdateCsSpuriousWakeStats(AoAc, a2->LastWakeReason);
    }
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, v7);
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qD(0x2Au, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)a2, AoAc->ActiveRef);
  }
  AoAc->TempDerefInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport((__int64)a2, 2u);
}
