/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0074118
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C000F564 (ndisSignalD0RequestComplete.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00715E4 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0072A98 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007A080 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicActiveRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v5; // al
  _NDIS_MINIPORT_AOAC *v6; // rbx
  KIRQL v7; // bl

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->ActiveState = a2 != 0 ? NdisNicError : NdisNicActive;
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a2 )
  {
    v6 = a1->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(a1, 0x4C5u, a2);
    v6->LastUnexpectedFailureLine[1] = v6->LastUnexpectedFailureLine[0];
    v6->LastUnexpectedFailureLine[0] = 1221;
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_dq(0x14u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, a2, a1);
    v7 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    if ( (unsigned int)(AoAc->TempRefReason - 2) <= 1 )
    {
      AoAc->TempRefReason = NdisAoAcTempRefNone;
      ndisAoAcActiveRefSubtract(AoAc, NdisPMComponentUnspecified, 1);
    }
    KeReleaseSpinLock(&AoAc->Lock, v7);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099610 >= 4u )
      WPP_SF_qZ(0x13u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1, &a1->pAdapterInstanceName->Length);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)a1, 7);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
