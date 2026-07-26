/*
 * XREFs of NdisAllocateCloneOidRequest @ 0x1C000CEC0
 * Callers:
 *     ndisOidCloneForCompatibility @ 0x1C000CCD8 (ndisOidCloneForCompatibility.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqDq @ 0x1C0042E60 (WPP_SF_qqDq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

NDIS_STATUS __stdcall NdisAllocateCloneOidRequest(
        NDIS_HANDLE SourceHandle,
        PNDIS_OID_REQUEST OidRequest,
        UINT PoolTag,
        PNDIS_OID_REQUEST *ClonedOidRequest)
{
  NDIS_STATUS v4; // ebp
  struct _NDIS_OID_REQUEST *v6; // rbx
  char v7; // r14
  PNDIS_OID_REQUEST v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  struct _NDIS_OID_REQUEST *PoolWithTag; // rax
  NDIS_REQUEST_TYPE RequestType; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  UCHAR Revision; // al
  USHORT Size; // ax
  __int64 v22; // rcx
  unsigned __int8 v23; // al

  v4 = 0;
  v6 = 0LL;
  v7 = 0;
  v9 = OidRequest;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(196LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, SourceHandle, OidRequest, PoolTag);
  if ( ((*(_DWORD *)&v9->NdisReserved[16] >> 5) & 1) == 0 )
  {
    v11 = *(unsigned __int8 *)SourceHandle;
    if ( (_BYTE)v11 == 18 )
      goto LABEL_29;
    LOBYTE(v11) = v11 - 5;
    if ( (v11 & 0xEF) != 0 )
    {
      v4 = -1073741811;
      goto LABEL_21;
    }
  }
  if ( *(_BYTE *)SourceHandle != 18 && ((*(_DWORD *)&v9->NdisReserved[16] >> 5) & 1) == 0 )
  {
    if ( *(_BYTE *)SourceHandle == 5 )
    {
      v12 = *((_QWORD *)SourceHandle + 2);
      v13 = *(_BYTE *)(v12 + 100);
      if ( v13 <= 6u && (v13 != 6 || *(_BYTE *)(v12 + 101) < 0x32u) )
        goto LABEL_12;
    }
LABEL_24:
    v7 = 1;
    goto LABEL_12;
  }
LABEL_29:
  v22 = *((_QWORD *)SourceHandle + 3);
  v23 = *(_BYTE *)(v22 + 56);
  if ( v23 > 6u || v23 == 6 && *(_BYTE *)(v22 + 57) >= 0x32u )
    goto LABEL_24;
LABEL_12:
  PoolWithTag = (struct _NDIS_OID_REQUEST *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, PoolTag);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0xF8uLL);
  v6->Header.Type = -106;
  if ( !v7 )
  {
    v6->Header.Revision = 1;
    v6->Header.Size = 236;
    goto LABEL_15;
  }
  Revision = v9->Header.Revision;
  if ( Revision != 1 )
  {
    if ( Revision == 2 )
    {
      Size = v9->Header.Size;
      if ( Size >= 0xF8u )
        goto LABEL_28;
    }
LABEL_38:
    KeBugCheckEx(0x7Cu, 0x21uLL, (ULONG_PTR)SourceHandle, (ULONG_PTR)v9, 0LL);
  }
  Size = v9->Header.Size;
  if ( Size < 0xECu )
    goto LABEL_38;
LABEL_28:
  v6->Header.Size = Size;
  v6->Header.Revision = v9->Header.Revision;
LABEL_15:
  v6->RequestType = v9->RequestType;
  v6->Timeout = v9->Timeout;
  v6->PortNumber = v9->PortNumber;
  v6->RequestId = v9->RequestId;
  v6->Timeout = v9->Timeout;
  v6->RequestHandle = v9->RequestHandle;
  v6->SupportedRevision = v9->SupportedRevision;
  if ( v9->Header.Revision >= 2u || (*(_DWORD *)&v9->NdisReserved[16] & 0x4000) != 0 )
  {
    v6[1].Header = v9[1].Header;
    v6[1].RequestType = v9[1].RequestType;
  }
  RequestType = v9->RequestType;
  v6->DATA.QUERY_INFORMATION.Oid = v9->DATA.QUERY_INFORMATION.Oid;
  if ( RequestType == NdisRequestMethod )
  {
    v6->DATA.QUERY_INFORMATION.BytesNeeded = v9->DATA.QUERY_INFORMATION.BytesNeeded;
    v6->DATA.QUERY_INFORMATION.InformationBuffer = v9->DATA.QUERY_INFORMATION.InformationBuffer;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = v9->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = v9->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.BytesWritten = v9->DATA.QUERY_INFORMATION.BytesWritten;
    v6->DATA.METHOD_INFORMATION.BytesRead = v9->DATA.METHOD_INFORMATION.BytesRead;
    v6->DATA.METHOD_INFORMATION.BytesNeeded = v9->DATA.METHOD_INFORMATION.BytesNeeded;
    v6->DATA.METHOD_INFORMATION.BytesWritten = v9->DATA.METHOD_INFORMATION.BytesWritten;
  }
  else
  {
    v6->DATA.QUERY_INFORMATION.InformationBuffer = v9->DATA.QUERY_INFORMATION.InformationBuffer;
    v6->DATA.QUERY_INFORMATION.InformationBufferLength = v9->DATA.QUERY_INFORMATION.InformationBufferLength;
    v6->DATA.QUERY_INFORMATION.BytesWritten = v9->DATA.QUERY_INFORMATION.BytesWritten;
    v6->DATA.QUERY_INFORMATION.BytesNeeded = v9->DATA.QUERY_INFORMATION.BytesNeeded;
  }
  *(_DWORD *)&v6->NdisReserved[16] ^= (*(_DWORD *)&v9->NdisReserved[16] ^ *(_DWORD *)&v6->NdisReserved[16]) & 0x8000;
  v16 = *(_DWORD *)&v6->NdisReserved[16] ^ (*(_DWORD *)&v9->NdisReserved[16] ^ *(_DWORD *)&v6->NdisReserved[16]) & 0x80;
  *(_DWORD *)&v6->NdisReserved[16] = v16;
  v17 = v16 ^ (*(_DWORD *)&v9->NdisReserved[16] ^ v16) & 4;
  *(_DWORD *)&v6->NdisReserved[16] = v17;
  v11 = v17 ^ (*(_DWORD *)&v9->NdisReserved[16] ^ v17) & 0x80000u;
  *(_DWORD *)&v6->NdisReserved[16] = v11;
  OidRequest = (PNDIS_OID_REQUEST)((unsigned int)v11 ^ (*(_DWORD *)&v9->NdisReserved[16] ^ (unsigned int)v11) & 0x800000);
  *(_DWORD *)&v6->NdisReserved[16] = (_DWORD)OidRequest;
  *(_DWORD *)&v6->NdisReserved[16] = (unsigned int)OidRequest ^ (*(_DWORD *)&v9->NdisReserved[16] ^ (unsigned int)OidRequest) & 0x1000000;
  *(_DWORD *)&v6->NdisReserved[80] = *(_DWORD *)&v9->NdisReserved[80];
  v18 = *(_DWORD *)&v9->NdisReserved[80];
  *(_DWORD *)&v6->NdisReserved[16] |= 0x4000u;
  *(_DWORD *)&v6->NdisReserved[80] = v18;
  *(_QWORD *)&v6->NdisReserved[24] = v9;
LABEL_21:
  *ClonedOidRequest = v6;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqDq(v11, OidRequest, SourceHandle, v9, v4, v6);
  return v4;
}
