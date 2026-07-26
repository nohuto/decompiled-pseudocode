/*
 * XREFs of ndisPnPCancelStopDevice @ 0x1C00E03B4
 * Callers:
 *     ndisPnPIrpCancelStop @ 0x1C00E14A8 (ndisPnPIrpCancelStop.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C00E031C (ndisPnPCancelRemoveDevice.c)
 */

void __fastcall ndisPnPCancelStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_(0x4Du, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids);
  ndisPnPCancelRemoveDevice(a1);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_(0x4Eu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids);
}
