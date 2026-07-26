/*
 * XREFs of ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004C5C0 (ndisPMPDCTaskClient.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00A78D8 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00F4318 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ndisReferenceMiniport((__int64)a1, 0x13u) )
  {
    if ( KeSetCoalescableTimer(
           &a1->PdcTaskClientDisableTimer.Timer,
           (LARGE_INTEGER)-300000000LL,
           0,
           0,
           &a1->PdcTaskClientDisableTimer.Dpc) )
    {
      ndisDereferenceMiniport((__int64)a1, 0x13u);
    }
  }
  else
  {
    PdcTaskClientRequest(a1->PdcHandle, 0LL);
    ndisPowerSaveClearStop(a1, NdisSSMagicPacket);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
