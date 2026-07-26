/*
 * XREFs of ndisPowerSaveStop @ 0x1C00BE7BC
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004C5C0 (ndisPMPDCTaskClient.c)
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00C0398 (ndisPnPIrpQueryRemove.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00DD78C (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpQueryStop @ 0x1C00E1630 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00E199C (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00E1C80 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0070E94 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisPowerSaveStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, a2);
  if ( a1->AoAc )
    ndisAoAcStop(a1, a2, RunSynchronous);
}
