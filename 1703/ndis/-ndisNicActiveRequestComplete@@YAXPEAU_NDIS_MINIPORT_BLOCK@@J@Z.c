/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0071DC8
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C0011EF8 (ndisSignalD0RequestComplete.c)
 * Callees:
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C007269C (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0077A48 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicActiveRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v5; // al
  _NDIS_MINIPORT_AOAC *v6; // rbx

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->ActiveState = a2 != 0 ? NdisNicError : NdisNicActive;
  KeReleaseSpinLock(&AoAc->Lock, v5);
  if ( a2 )
  {
    v6 = a1->AoAc;
    NdisTraceLoggingUnexpectedAoAcError(a1, 0x4D0u, a2);
    v6->LastUnexpectedFailureLine[1] = v6->LastUnexpectedFailureLine[0];
    v6->LastUnexpectedFailureLine[0] = 1232;
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_dq(0x14u, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, a2, a1);
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092610 >= 4u )
      WPP_SF_qZ(0x13u, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)a1, &a1->pAdapterInstanceName->Length);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)a1, 7);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
