/*
 * XREFs of ndisInitModeTimeoutWorkItem @ 0x1C00B8590
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8610 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xAu, &WPP_f3fd5fb2e5ac37818b120db3b0dd368d_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols((__int64)a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)a2, 0x17u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xBu, &WPP_f3fd5fb2e5ac37818b120db3b0dd368d_Traceguids, (__int64)a2);
}
