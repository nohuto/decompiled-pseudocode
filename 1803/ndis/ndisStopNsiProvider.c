/*
 * XREFs of ndisStopNsiProvider @ 0x1C0042FB0
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(0x1Bu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(0x1Cu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
}
