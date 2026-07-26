/*
 * XREFs of NdisMSetAttributes @ 0x1C00DDB40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C00F5ED0 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        char a3,
        NDIS_INTERFACE_TYPE a4)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Cu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
  NdisMSetAttributesEx(MiniportAdapterHandle, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x5Du, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)MiniportAdapterHandle);
}
