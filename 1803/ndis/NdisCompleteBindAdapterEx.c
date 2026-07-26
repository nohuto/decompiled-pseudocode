/*
 * XREFs of NdisCompleteBindAdapterEx @ 0x1C005C160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __stdcall NdisCompleteBindAdapterEx(NDIS_HANDLE BindAdapterContext, NDIS_STATUS Status)
{
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qD(0x40u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)BindAdapterContext, Status);
  *((_DWORD *)BindAdapterContext + 22) = Status;
  KeSetEvent((PRKEVENT)BindAdapterContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x41u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)BindAdapterContext);
}
