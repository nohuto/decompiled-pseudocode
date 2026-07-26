/*
 * XREFs of NdisFreeGenericObject @ 0x1C005E540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisFreeGenericObject(PNDIS_GENERIC_OBJECT NdisObject)
{
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_q(0x8Eu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)NdisObject);
  ExFreePoolWithTag(NdisObject, 0);
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_q(0x8Fu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, 0LL);
}
