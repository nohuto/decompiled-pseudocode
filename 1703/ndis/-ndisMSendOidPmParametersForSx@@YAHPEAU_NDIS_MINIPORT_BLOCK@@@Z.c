/*
 * XREFs of ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064AF8
 * Callers:
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 */

__int64 __fastcall ndisMSendOidPmParametersForSx(_DWORD *MiniportAdapterHandle)
{
  int v1; // eax
  int v3; // edi
  __m128i v4; // xmm1
  int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // esi
  struct _NDIS_OID_REQUEST Request; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v10; // [rsp+148h] [rbp+40h] BYREF
  int v11; // [rsp+158h] [rbp+50h]

  v1 = MiniportAdapterHandle[284];
  v3 = MiniportAdapterHandle[30];
  v10 = *((__m128i *)MiniportAdapterHandle + 70);
  v11 = v1;
  v4 = _mm_srli_si128(v10, 8);
  v10.m128i_i32[0] = 1311360;
  v5 = v3 & 0x80;
  v10.m128i_i32[3] = v4.m128i_i32[1] & 0xFFFFFFFE;
  memset(&Request, 0, 0xF8uLL);
  *(_DWORD *)&Request.NdisReserved[16] |= 8u;
  Request.PortNumber = 0;
  *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
  Request.Header = (NDIS_OBJECT_HEADER)15466902;
  Request.DATA.QUERY_INFORMATION.InformationBuffer = &v10;
  Request.DATA.QUERY_INFORMATION.Oid = -50265847;
  Request.RequestType = NdisRequestSetInformation;
  Request.DATA.QUERY_INFORMATION.InformationBufferLength = 20;
  v7 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL);
  if ( v7 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_qD(
        0x74u,
        &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids,
        (__int64)MiniportAdapterHandle,
        v10.m128i_i32[1]);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxq(
        v6,
        &PowerPolicyError,
        (const GUID *)MiniportAdapterHandle + 252,
        (unsigned __int64)(MiniportAdapterHandle + 1008),
        MiniportAdapterHandle[1020],
        *((_QWORD *)MiniportAdapterHandle + 506),
        118);
  }
  else if ( v10.m128i_i32[1] && !v5 )
  {
    MiniportAdapterHandle[31] |= 0x400u;
  }
  return v7;
}
