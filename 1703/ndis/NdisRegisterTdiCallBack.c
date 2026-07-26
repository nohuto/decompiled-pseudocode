/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00BE760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  char v4; // al

  v4 = byte_1C0092614;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    WPP_SF_(0x31u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
    v4 = byte_1C0092614;
  }
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_(0x32u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
}
