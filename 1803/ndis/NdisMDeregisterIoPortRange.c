/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C00EBCD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x16u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x17u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportAdapterHandle);
  }
}
