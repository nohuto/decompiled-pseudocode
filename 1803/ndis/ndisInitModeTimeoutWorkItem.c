/*
 * XREFs of ndisInitModeTimeoutWorkItem @ 0x1C00C2280
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C2300 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 */

void __fastcall ndisInitModeTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xAu, &WPP_8a019c9f01e135ed6ca159ec8b9589af_Traceguids, (__int64)a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  ndisNotifyBindFailureOnUnboundProtocols(a2);
  ndisMExitInitMode(a2, RunSynchronous);
  KeSetEvent(&a2->InitModeTimeoutTimerQueuedEvent, 0, 0);
  ndisDereferenceMiniport((__int64)a2, 0x17u, v3, v4);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xBu, &WPP_8a019c9f01e135ed6ca159ec8b9589af_Traceguids, (__int64)a2);
}
