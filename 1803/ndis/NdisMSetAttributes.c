/*
 * XREFs of NdisMSetAttributes @ 0x1C00E94D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     NdisMSetAttributesEx @ 0x1C0104F50 (NdisMSetAttributesEx.c)
 */

void __fastcall NdisMSetAttributes(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        char a3,
        NDIS_INTERFACE_TYPE a4)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x60u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportAdapterHandle);
  NdisMSetAttributesEx(MiniportAdapterHandle, MiniportAdapterContext, 0, a3 != 0 ? 8 : 0, a4);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x61u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)MiniportAdapterHandle);
}
