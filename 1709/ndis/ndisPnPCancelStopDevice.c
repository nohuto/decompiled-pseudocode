/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00EA254
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00EB348 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00EA1BC (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x4Du, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x4Eu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
}
