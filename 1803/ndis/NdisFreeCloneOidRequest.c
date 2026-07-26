/*
 * XREFs of NdisFreeCloneOidRequest @ 0x1C0007F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __stdcall NdisFreeCloneOidRequest(NDIS_HANDLE SourceHandle, PNDIS_OID_REQUEST Request)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)&Request->NdisReserved[24];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(195LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, SourceHandle, Request);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 232) = Request->SupportedRevision;
    *(_DWORD *)(v2 + 152) = *(_DWORD *)&Request->NdisReserved[80];
  }
  ExFreePoolWithTag(Request, 0);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(196LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, SourceHandle, 0LL);
}
