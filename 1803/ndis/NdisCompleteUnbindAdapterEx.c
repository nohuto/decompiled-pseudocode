/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C0103390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x44u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x45u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)UnbindContext);
}
