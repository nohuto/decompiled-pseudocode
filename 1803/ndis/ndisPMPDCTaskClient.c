/*
 * XREFs of ndisPMPDCTaskClient @ 0x1C004AE10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004B6FC (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     PdcTaskClientRequest @ 0x1C00FFBE4 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x86u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)v2);
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( (unsigned __int8)byte_1C0099612 >= 2u )
        WPP_SF_q(0x87u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)v2);
    }
    else
    {
      ndisPowerSaveStop(v2);
      ndisSetPdcTaskClientExpiryTimer(v2);
    }
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v2, 0x12u, v4, v5);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x88u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)v2);
}
