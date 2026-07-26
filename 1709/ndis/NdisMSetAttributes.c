/*
 * XREFs of NdisMSetAttributes @ 0x1C00E7A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C0103A40 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        char a3,
        NDIS_INTERFACE_TYPE a4)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Du, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportAdapterHandle);
  NdisMSetAttributesEx(MiniportAdapterHandle, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Eu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)MiniportAdapterHandle);
}
