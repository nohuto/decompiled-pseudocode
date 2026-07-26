/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C0001988
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0001A2C (ndisIovFindSwitchBySwitchId.c)
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006BAC4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006BB6C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

__int64 __fastcall ndisIovDeleteDefaultNicSwitch(NDIS_HANDLE MiniportAdapterHandle)
{
  unsigned int v2; // edi
  __int64 result; // rax
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+138h] [rbp+30h] BYREF
  int v6; // [rsp+140h] [rbp+38h]

  v2 = 0;
  memset(&Request, 0, 0xF8uLL);
  v5 = 0LL;
  v6 = 0;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(83LL, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, MiniportAdapterHandle);
  result = ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL);
  if ( result )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(MiniportAdapterHandle, 0LL);
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 4) == 0 )
    {
      LODWORD(v5) = 786816;
      v6 = 0;
      memset(&Request, 0, 0xF8uLL);
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = &v5;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = 66105;
      *(_QWORD *)&Request.RequestType = 1LL;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0LL, 0LL);
    }
    result = ndisIovDeleteNicSwitch(MiniportAdapterHandle, 0LL);
  }
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    return WPP_SF_qD(84LL, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, MiniportAdapterHandle, v2);
  return result;
}
