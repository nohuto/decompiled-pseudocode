/*
 * XREFs of NdisMPciAssignResources @ 0x1C00EBD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  __int64 v5; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x33u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
  if ( *((_DWORD *)MiniportHandle + 934) == 5 && (v5 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v5 + 12);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x35u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x34u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
    return -1073741823;
  }
}
