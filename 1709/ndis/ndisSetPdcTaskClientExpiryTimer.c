/*
 * XREFs of ndisSetPdcTaskClientExpiryTimer @ 0x1C004A724
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C0049E50 (ndisPMPDCTaskClient.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00C62E0 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00FD808 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( ndisReferenceMiniport((__int64)a1) )
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
