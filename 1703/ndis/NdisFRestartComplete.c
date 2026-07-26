/*
 * XREFs of NdisFRestartComplete @ 0x1C00DB090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Fu, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)NdisFilterHandle, Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x20u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, (__int64)NdisFilterHandle, Status);
}
