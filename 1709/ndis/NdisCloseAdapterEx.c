/*
 * XREFs of NdisCloseAdapterEx @ 0x1C00ABA40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     NdisCloseAdapter @ 0x1C00FF0F0 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x42u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v3, NdisBindingHandle);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qD(0x43u, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, (__int64)NdisBindingHandle, v3);
  return v3;
}
