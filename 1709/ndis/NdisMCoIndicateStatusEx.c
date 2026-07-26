/*
 * XREFs of NdisMCoIndicateStatusEx @ 0x1C0112030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0112204 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatusEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        PNDIS_STATUS_INDICATION StatusIndication)
{
  int v3; // esi

  v3 = (int)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_(0x35u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
  ndisCoIndicateStatusInternal(v3);
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_(0x36u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
}
