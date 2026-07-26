/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00E1E60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C00B0570 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00FFBE4 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
  {
    WPP_SF_q(0x83u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)a2);
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(0x84u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)a2);
  }
  PdcTaskClientRequest(a2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(a2, 12);
  _InterlockedExchange(&a2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)a2, 0x13u, v3, v4);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x85u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)a2);
}
