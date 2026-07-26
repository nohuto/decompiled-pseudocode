/*
 * XREFs of NdisFPauseComplete @ 0x1C0059410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Cu, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)NdisFilterHandle);
}
