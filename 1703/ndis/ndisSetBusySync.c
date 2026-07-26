/*
 * XREFs of ndisSetBusySync @ 0x1C006FBE0
 * Callers:
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00A7D30 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00B87B0 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSetBusySync(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  if ( (a1->Flags & 0x80u) != 0 )
    ndisWdfSetBusySync(a1, a2, a3);
  else
    ndisWdmSetBusySync(a1, a2, a3);
}
