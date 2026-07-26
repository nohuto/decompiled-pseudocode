/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00EBEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00CAED4 (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 259) )
  {
    *((_QWORD *)MiniportHandle + 259) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 258) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)MiniportHandle);
}
