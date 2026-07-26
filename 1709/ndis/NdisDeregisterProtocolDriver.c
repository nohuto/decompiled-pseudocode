/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00E6000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C00485F8 (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C010C1C0 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_4a5d38b576c633146a968e2982301690_Traceguids,
      (__int64)NdisProtocolHandle,
      (const wchar_t *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0xDu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)NdisProtocolHandle);
}
