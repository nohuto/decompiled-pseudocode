/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00E99A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00AD2A8 (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 259) )
  {
    *((_QWORD *)MiniportHandle + 259) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 258) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)MiniportHandle);
}
