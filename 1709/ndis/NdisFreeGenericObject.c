/*
 * XREFs of NdisFreeGenericObject @ 0x1C005DB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(0x8Bu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(0x8Cu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, 0LL);
}
