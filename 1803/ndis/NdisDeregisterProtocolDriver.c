/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00E7850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C010E150 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids,
      (__int64)NdisProtocolHandle,
      (const wchar_t *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0xDu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisProtocolHandle);
}
