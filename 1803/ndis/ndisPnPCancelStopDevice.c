/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00ECBC4
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00EDEE8 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00ECB2C (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x51u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x52u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
}
