/*
 * XREFs of ndisStopNsiProvider @ 0x1C004201C
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00213FC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_(0x1Bu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_(0x1Cu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids);
}
