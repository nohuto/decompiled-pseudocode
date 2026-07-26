/*
 * XREFs of NdisFDirectOidRequest @ 0x1C0059030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     IsOidRequestDirectOid @ 0x1C00433FC (IsOidRequestDirectOid.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 */

NDIS_STATUS __stdcall NdisFDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v4; // edi

  v4 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x33u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, NdisFilterHandle, OidRequest);
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
    return -1073741811;
  if ( !OidRequest->Header.Revision )
    return -1071448020;
  if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3704LL) & 0x400) == 0 )
    OidRequest->SupportedRevision = 1;
  if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 304LL) )
  {
    if ( IsOidRequestDirectOid(OidRequest->DATA.QUERY_INFORMATION.Oid) )
    {
      *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x200040u;
      *(_QWORD *)&OidRequest->NdisReserved[32] = NdisFilterHandle;
      v4 = ndisDoDirectOidRequest(
             (__int64)OidRequest,
             *((_QWORD *)NdisFilterHandle + 4),
             (__int64)NdisFilterHandle,
             0LL);
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x34u, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, (__int64)OidRequest, v4);
  return v4;
}
