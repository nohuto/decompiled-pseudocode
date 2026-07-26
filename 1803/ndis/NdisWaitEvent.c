/*
 * XREFs of NdisWaitEvent @ 0x1C00AD6C0
 * Callers:
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C005CAF0 (ndisLegacyProtocolPauseRestartHandler.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall NdisWaitEvent(PNDIS_EVENT Event, UINT MsToWait)
{
  unsigned __int8 CurrentIrql; // al
  LARGE_INTEGER *Timeout; // rax
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout = 0LL;
  if ( MsToWait )
  {
    Timeout = (LARGE_INTEGER *)&v5;
    v5 = -10000LL * (int)MsToWait;
  }
  return KeWaitForSingleObject(Event, Executive, 0, 0, Timeout) == 0;
}
