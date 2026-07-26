/*
 * XREFs of NdisIfQueryBindingIfIndex @ 0x1C00CA490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BFA90 (ndisIfQueryBindingMiniportIfIndex.c)
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
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x30u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)NdisBindingHandle);
  BindingMiniportIfIndex = ndisIfQueryBindingMiniportIfIndex(
                             v5,
                             pBoundIfIndex,
                             pBoundIfNetLuid,
                             pLowestIfIndex,
                             pLowestIfNetLuid);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x31u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)NdisBindingHandle);
  return BindingMiniportIfIndex;
}
