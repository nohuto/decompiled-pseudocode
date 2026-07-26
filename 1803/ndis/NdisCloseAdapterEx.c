/*
 * XREFs of NdisCloseAdapterEx @ 0x1C00B3360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C0102A80 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x42u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qD(0x43u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
