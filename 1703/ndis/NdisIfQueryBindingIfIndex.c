/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00BDF90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00B5BD0 (ndisIfQueryBindingMiniportIfIndex.c)
 */

NDIS_STATUS __stdcall NdisIfQueryBindingIfIndex(
        NDIS_HANDLE NdisBindingHandle,
        PNET_IFINDEX pBoundIfIndex,
        PNET_LUID pBoundIfNetLuid,
        PNET_IFINDEX pLowestIfIndex,
        PNET_LUID pLowestIfNetLuid)
{
  __int64 v5; // r14
  NDIS_STATUS BindingMiniportIfIndex; // edi

  v5 = *((_QWORD *)NdisBindingHandle + 2);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x30u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x31u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
