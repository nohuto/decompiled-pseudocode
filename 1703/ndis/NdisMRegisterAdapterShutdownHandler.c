/*
 * XREFs of NdisMRegisterAdapterShutdownHandler @ 0x1C00DFB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisMRegisterBugCheckHandler @ 0x1C00BE658 (ndisMRegisterBugCheckHandler.c)
 */

void __stdcall NdisMRegisterAdapterShutdownHandler(
        NDIS_HANDLE MiniportHandle,
        PVOID ShutdownContext,
        ADAPTER_SHUTDOWN_HANDLER ShutdownHandler)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x2Fu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
  if ( !*((_QWORD *)MiniportHandle + 259) )
  {
    *((_QWORD *)MiniportHandle + 259) = ShutdownHandler;
    *((_QWORD *)MiniportHandle + 258) = ShutdownContext;
    ndisMRegisterBugCheckHandler((char *)MiniportHandle);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x30u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
}
