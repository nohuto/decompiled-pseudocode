/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00CAF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x2Du, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_(0x2Eu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
}
