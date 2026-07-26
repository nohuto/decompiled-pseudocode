/*
 * XREFs of ndisPowerSaveStop @ 0x1C00C61B0
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C0049E50 (ndisPMPDCTaskClient.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00AC23C (ndisPnPIrpQueryRemove.c)
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E76B4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EB4D0 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0072780 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 */

void __fastcall ndisPowerSaveStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  if ( a1->AoAc )
    ndisAoAcStop(a1, a2, RunSynchronous);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, a2);
}
