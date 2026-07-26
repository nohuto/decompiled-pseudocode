/*
 * XREFs of ndisIovDeleteDefaultNicSwitch @ 0x1C00259F8
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C0025A9C (ndisIovFindSwitchBySwitchId.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisIovDeleteNicSwitch @ 0x1C006A6B4 (ndisIovDeleteNicSwitch.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006A75C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 */

__int64 __fastcall ndisIovDeleteDefaultNicSwitch(_DWORD *MiniportAdapterHandle)
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
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    WPP_SF_q(83LL, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, MiniportAdapterHandle);
  result = ndisIovFindSwitchBySwitchId(MiniportAdapterHandle, 0LL);
  if ( result )
  {
    ndisIovDeleteNicSwitchDefaultVPortAndPFBlock(MiniportAdapterHandle, 0LL);
    if ( (MiniportAdapterHandle[30] & 4) == 0 )
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
      v2 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
    }
    result = ndisIovDeleteNicSwitch(MiniportAdapterHandle, 0LL);
  }
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
    return WPP_SF_qD(84LL, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, MiniportAdapterHandle, v2);
  return result;
}
