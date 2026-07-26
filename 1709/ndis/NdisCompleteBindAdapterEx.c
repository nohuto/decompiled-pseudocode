/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C005BA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qD(0x40u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x41u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)BindAdapterContext);
}
