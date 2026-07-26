/*
 * XREFs of ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000520C
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00110E4 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FE704 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiniportSupportsReceiveThrottle(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 MajorNdisVersion; // al

  MajorNdisVersion = a1->MajorNdisVersion;
  return (MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u)
      && (a1->PnPFlags & 0x400000) == 0;
}
