/*
 * XREFs of ndisPMPDCTaskClient @ 0x1C004C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisSetPdcTaskClientExpiryTimer @ 0x1C004CE70 (ndisSetPdcTaskClientExpiryTimer.c)
 *     ndisPowerSaveStop @ 0x1C00BE7BC (ndisPowerSaveStop.c)
 *     PdcTaskClientRequest @ 0x1C00F4318 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPMPDCTaskClient(_QWORD *P, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)P[4];
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(0x86u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)v2);
  if ( !_InterlockedCompareExchange(&v2->PdcTaskClientMode, 1, 0) )
  {
    LOBYTE(a2) = 1;
    if ( (int)PdcTaskClientRequest(v2->PdcHandle, a2) < 0 )
    {
      _InterlockedExchange(&v2->PdcTaskClientMode, 0);
      if ( (unsigned __int8)byte_1C0092612 >= 2u )
        WPP_SF_q(0x87u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)v2);
    }
    else
    {
      ndisPowerSaveStop(v2, NdisSSMagicPacket);
      ndisSetPdcTaskClientExpiryTimer(v2);
    }
    ExFreePoolWithTag(P, 0);
    ndisDereferenceMiniport((__int64)v2, 0x12u);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_q(0x88u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)v2);
  }
}
