/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E0680
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C00C62E0 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00FD808 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
  {
    WPP_SF_q(0x83u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)a2);
    if ( (unsigned __int8)byte_1C0098754 >= 4u )
      WPP_SF_q(0x84u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)a2);
  }
  PdcTaskClientRequest(a2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(a2, 12);
  _InterlockedExchange(&a2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)a2, 0x13u);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x85u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)a2);
}
