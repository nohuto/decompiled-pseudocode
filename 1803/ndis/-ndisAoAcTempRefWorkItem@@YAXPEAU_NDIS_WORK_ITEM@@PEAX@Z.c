/*
 * XREFs of ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0073210
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074268 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C0074D90 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 */

void __fastcall ndisAoAcTempRefWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v4; // al
  int v5; // r8d
  KIRQL v6; // si
  enum _NDIS_PM_WAKE_REASON_TYPE LastWakeReason; // edx
  __int64 v8; // r8
  __int64 v9; // r9

  AoAc = a2->AoAc;
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v5 = 1;
  v6 = v4;
  if ( (AoAc->WakeFlags.Value & 2) == 0 )
  {
    LastWakeReason = a2->LastWakeReason;
    if ( LastWakeReason == NdisWakeReasonPacket && AoAc->LastWakePatternId == 131073 )
      LastWakeReason = 65533;
    ++AoAc->CsSpuriousWakes;
    ndisUpdateCsSpuriousWakeStats(AoAc, LastWakeReason);
    AoAc->WakeFlags.Value &= ~1u;
  }
  if ( AoAc->ComponentRefCounts[0] > 0 )
  {
    AoAc->TempRefReason = NdisAoAcTempRefNone;
    ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, v5);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qD(0x2Du, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a2, AoAc->ActiveRef);
  }
  AoAc->TempDerefInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v6);
  ndisNicQuietCheckRef(a2);
  ndisDereferenceMiniport((__int64)a2, 2u, v8, v9);
}
