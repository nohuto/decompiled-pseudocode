/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C0114060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0114234 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  int v3; // esi

  v3 = (int)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_(0x35u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids);
  ndisCoIndicateStatusInternal(v3);
  if ( (unsigned __int8)byte_1C009961A >= 4u )
    WPP_SF_(0x36u, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids);
}
