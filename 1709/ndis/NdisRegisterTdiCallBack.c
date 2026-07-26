/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00C9830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x2Du, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_(0x2Eu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
}
