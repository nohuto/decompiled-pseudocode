/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00EBC60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00B2ED8 (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
}
