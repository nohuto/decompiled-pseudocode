/*
 * XREFs of NdisFRestartComplete @ 0x1C00E68F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __stdcall NdisFRestartComplete(NDIS_HANDLE NdisFilterHandle, NDIS_STATUS Status)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Du, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)NdisFilterHandle, Status);
  *(_DWORD *)(*((_QWORD *)NdisFilterHandle + 16) + 8LL) = Status;
  KeSetEvent((PRKEVENT)(*((_QWORD *)NdisFilterHandle + 16) + 16LL), 0, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x1Eu, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)NdisFilterHandle, Status);
}
