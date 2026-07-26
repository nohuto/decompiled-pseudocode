/*
 * XREFs of ndisStopNsiProvider @ 0x1C0045340
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 */

void ndisStopNsiProvider()
{
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(0x1Bu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
  NmrDeregisterProvider(ndisNsiInterfaceProviderHandle);
  NmrWaitForProviderDeregisterComplete(ndisNsiInterfaceProviderHandle);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(0x1Cu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
}
