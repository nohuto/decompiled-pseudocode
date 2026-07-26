/*
 * XREFs of NdisDeregisterProtocolDriver @ 0x1C00DBFC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     NdisDeregisterProtocol @ 0x1C0103230 (NdisDeregisterProtocol.c)
 */

void __stdcall NdisDeregisterProtocolDriver(NDIS_HANDLE NdisProtocolHandle)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qZ(
      0xCu,
      &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids,
      (__int64)NdisProtocolHandle,
      (const wchar_t *)NdisProtocolHandle + 36);
  NdisDeregisterProtocol(&v2, NdisProtocolHandle);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0xDu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisProtocolHandle);
}
