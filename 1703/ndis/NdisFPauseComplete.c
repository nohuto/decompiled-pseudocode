/*
 * XREFs of NdisFPauseComplete @ 0x1C0059940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisFPauseComplete(NDIS_HANDLE NdisFilterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Du, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)NdisFilterHandle);
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)NdisFilterHandle);
}
