/*
 * XREFs of ndisSetPdcTaskClientExpiryTimer @ 0x1C004B6FC
 * Callers:
 *     ndisPMPDCTaskClient @ 0x1C004AE10 (ndisPMPDCTaskClient.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00FFBE4 (PdcTaskClientRequest.c)
 */

void __fastcall ndisSetPdcTaskClientExpiryTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9

  if ( ndisReferenceMiniport((__int64)a1) )
  {
    if ( KeSetCoalescableTimer(
           &a1->PdcTaskClientDisableTimer.Timer,
           (LARGE_INTEGER)-300000000LL,
           0,
           0,
           &a1->PdcTaskClientDisableTimer.Dpc) )
    {
      ndisDereferenceMiniport((__int64)a1, 0x13u, v2, v3);
    }
  }
  else
  {
    PdcTaskClientRequest(a1->PdcHandle, 0LL);
    ndisPowerSaveClearStop(a1, NdisSSMagicPacket);
    _InterlockedExchange(&a1->PdcTaskClientMode, 0);
  }
}
