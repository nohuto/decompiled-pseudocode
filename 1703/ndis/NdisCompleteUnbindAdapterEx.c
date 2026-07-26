/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C00FBF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x44u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x45u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)UnbindContext);
}
