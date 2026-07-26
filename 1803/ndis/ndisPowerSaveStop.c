/*
 * XREFs of ndisPowerSaveStop @ 0x1C00B11E8
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004AE10 (ndisPMPDCTaskClient.c)
 *     ndisSetSystemPower @ 0x1C00B09DC (ndisSetSystemPower.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00B4060 (ndisPnPIrpQueryRemove.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E490C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E90F0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EE078 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EE3E8 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 * Callees:
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072FFC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisPowerSaveStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  if ( a1->AoAc )
    ndisAoAcStop(a1, a2, RunSynchronous);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, a2);
}
