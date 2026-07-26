/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C0012634
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C00126D8 (ndisIovFindSwitchBySwitchId.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006C324 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006C3CC (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

__int64 __fastcall ndisIovDeleteDefaultNicSwitch(_DWORD *MiniportAdapterHandle)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 result; // rax
  struct _NDIS_OID_REQUEST Request; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v6; // [rsp+138h] [rbp+30h] BYREF
  int v7; // [rsp+140h] [rbp+38h]

  v2 = 0;
  memset(&Request, 0, 0xF8uLL);
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(83LL, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, MiniportAdapterHandle, v3);
  result = ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL);
  if ( result )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(MiniportAdapterHandle, 0LL);
    if ( (MiniportAdapterHandle[30] & 4) == 0 )
    {
      LODWORD(v6) = 786816;
      v7 = 0;
      memset(&Request, 0, 0xF8uLL);
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = &v6;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = 66105;
      *(_QWORD *)&Request.RequestType = 1LL;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = 12;
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    }
    result = ndisIovDeleteNicSwitch(MiniportAdapterHandle, 0LL);
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    return WPP_SF_qD(84LL, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, MiniportAdapterHandle, v2);
  return result;
}
