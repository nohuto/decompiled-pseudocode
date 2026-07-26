/*
 * XREFs of ndisPdcTaskClientDisableTimeoutWorkItem @ 0x1C00D61F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisPowerSaveClearStop @ 0x1C00A78D8 (ndisPowerSaveClearStop.c)
 *     PdcTaskClientRequest @ 0x1C00F4318 (PdcTaskClientRequest.c)
 */

void __fastcall ndisPdcTaskClientDisableTimeoutWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
  {
    WPP_SF_q(0x83u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)a2);
    if ( (unsigned __int8)byte_1C0092614 >= 4u )
      WPP_SF_q(0x84u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)a2);
  }
  PdcTaskClientRequest(a2->PdcHandle, 0LL);
  ndisPowerSaveClearStop(a2, 12);
  _InterlockedExchange(&a2->PdcTaskClientMode, 0);
  ndisDereferenceMiniport((__int64)a2, 0x13u);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x85u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)a2);
}
