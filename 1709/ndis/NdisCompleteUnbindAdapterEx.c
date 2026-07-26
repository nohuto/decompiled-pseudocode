/*
 * XREFs of NdisCompleteUnbindAdapterEx @ 0x1C00FF7F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisCompleteUnbindAdapterEx(NDIS_HANDLE UnbindContext)
{
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x44u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)UnbindContext);
  *((_DWORD *)UnbindContext + 22) = 0;
  KeSetEvent((PRKEVENT)UnbindContext + 4, 0, 0);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x45u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)UnbindContext);
}
