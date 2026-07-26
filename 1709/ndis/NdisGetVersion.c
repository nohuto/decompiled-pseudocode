/*
 * XREFs of NdisGetVersion @ 0x1C001F4E0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

UINT NdisGetVersion(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(71LL, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, 393296LL);
  return 393296;
}
