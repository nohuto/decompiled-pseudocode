/*
 * XREFs of NdisMDeregisterIoPortRange @ 0x1C00E97A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterIoPortRange(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts,
        PVOID PortOffset)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x16u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x17u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportAdapterHandle);
  }
}
