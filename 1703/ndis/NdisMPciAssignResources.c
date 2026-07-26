/*
 * XREFs of NdisMPciAssignResources @ 0x1C00DF9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

NDIS_STATUS __stdcall NdisMPciAssignResources(
        NDIS_HANDLE MiniportHandle,
        ULONG SlotNumber,
        PNDIS_RESOURCE_LIST *AssignedResources)
{
  unsigned __int8 v5; // cl
  __int64 v6; // rax

  v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x33u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
    v5 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  if ( *((_DWORD *)MiniportHandle + 934) == 5 && (v6 = *((_QWORD *)MiniportHandle + 118)) != 0 )
  {
    *AssignedResources = (PNDIS_RESOURCE_LIST)(v6 + 12);
    if ( v5 >= 4u )
      WPP_SF_q(0x35u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
    return 0;
  }
  else
  {
    *AssignedResources = 0LL;
    if ( v5 >= 4u )
      WPP_SF_q(0x34u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
    return -1073741823;
  }
}
