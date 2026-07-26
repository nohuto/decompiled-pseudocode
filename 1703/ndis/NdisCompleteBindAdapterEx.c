/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C005BDE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qD(0x40u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x41u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)BindAdapterContext);
}
