/*
 * XREFs of NdisMDeregisterAdapterShutdownHandler @ 0x1C00DF8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00BF9A0 (ndisMDeregisterBugCheckHandler.c)
 */

void __stdcall NdisMDeregisterAdapterShutdownHandler(NDIS_HANDLE MiniportHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x31u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
  ndisMDeregisterBugCheckHandler((__int64)MiniportHandle);
  *((_QWORD *)MiniportHandle + 259) = 0LL;
  *((_QWORD *)MiniportHandle + 258) = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x32u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportHandle);
}
