/*
 * XREFs of NdisFreeGenericObject @ 0x1C0027190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(132LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C009261C >= 4u )
    WPP_SF_q(133LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, 0LL);
}
