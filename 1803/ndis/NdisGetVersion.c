/*
 * XREFs of NdisGetVersion @ 0x1C0025310
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

UINT NdisGetVersion(void)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(71LL, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, 393297LL);
  return 393297;
}
