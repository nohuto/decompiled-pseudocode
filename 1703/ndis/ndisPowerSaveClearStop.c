/*
 * XREFs of ndisPowerSaveClearStop @ 0x1C00A78D8
 * Callers:
 *     ndisSignalD0RequestComplete @ 0x1C0011EF8 (ndisSignalD0RequestComplete.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00D61F0 (ndisPdcTaskClientDisableTimeoutWorkItem.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00DD78C (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00E13D0 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00E14A8 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007083C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisPowerSaveClearStop(struct _NDIS_MINIPORT_BLOCK *a1, __int32 a2)
{
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, a2);
  if ( a1->AoAc )
    ndisAoAcClearStop(a1, (enum _NDIS_SS_STOP_REASON)a2);
}
