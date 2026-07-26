/*
 * XREFs of NdisIMGetDeviceContext @ 0x1C010D920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisIMGetDeviceContext(NDIS_HANDLE MiniportAdapterHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x2Du, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, (__int64)MiniportAdapterHandle);
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qq(
        0x2Eu,
        &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids,
        MiniportAdapterHandle,
        *((_QWORD *)MiniportAdapterHandle + 247));
  }
  return (NDIS_HANDLE)*((_QWORD *)MiniportAdapterHandle + 247);
}
