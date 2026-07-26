/*
 * XREFs of ndisInitModeTimeoutWorkItem @ 0x1C00C8F00
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80 (ndisNotifyBindFailureOnUnboundProtocols.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xAu, &WPP_e044db9d6106386206f6354444736d9b_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)a2, 0x17u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xBu, &WPP_e044db9d6106386206f6354444736d9b_Traceguids, (__int64)a2);
}
