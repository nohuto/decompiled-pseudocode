/*
 * XREFs of NdisCloseAdapterEx @ 0x1C00BFB60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C00FB7F0 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_q(0x42u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_qD(0x43u, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
