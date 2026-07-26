/*
 * XREFs of NdisFOidRequestComplete @ 0x1C000F660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005A894 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFOidRequestComplete(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest, NDIS_STATUS Status)
{
  __int64 v3; // rbx
  UCHAR *NdisReserved; // rbp
  KSPIN_LOCK *v5; // r13
  KSPIN_LOCK *v9; // r15
  KSPIN_LOCK v10; // rsi
  KIRQL v11; // al
  NDIS_HANDLE RequestHandle; // r15
  __int64 v13; // rbx
  KIRQL v14; // al
  KIRQL v15; // al
  KIRQL v16; // bl

  v3 = *((_QWORD *)NdisFilterHandle + 24);
  NdisReserved = OidRequest->NdisReserved;
  v5 = 0LL;
  if ( v3 != -1 )
  {
    if ( KeCancelTimer((PKTIMER)(v3 + 64)) )
    {
      KeSetEvent((PRKEVENT)(v3 + 168), 0, 0);
      *(_DWORD *)(v3 + 160) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v3 + 160), 0);
    }
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) == 0 )
    goto LABEL_22;
  v9 = (KSPIN_LOCK *)NdisFilterHandle;
  v10 = *((_QWORD *)NdisReserved + 3);
  if ( *(_BYTE *)NdisFilterHandle != 5 )
  {
    v5 = (KSPIN_LOCK *)NdisFilterHandle;
    v9 = 0LL;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(
      41LL,
      &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids,
      OidRequest,
      v10,
      OidRequest->DATA.QUERY_INFORMATION.Oid);
  if ( v10 )
  {
    *((_QWORD *)NdisReserved + 3) = 0LL;
    if ( OidRequest->RequestType == NdisRequestMethod )
    {
      *(_DWORD *)(v10 + 60) = OidRequest->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v10 + 64) = OidRequest->DATA.METHOD_INFORMATION.BytesRead;
      *(_DWORD *)(v10 + 68) = OidRequest->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_QWORD *)(v10 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v10 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
      *(_DWORD *)(v10 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
    }
    else
    {
      *(_DWORD *)(v10 + 52) = OidRequest->DATA.QUERY_INFORMATION.BytesWritten;
      *(_DWORD *)(v10 + 56) = OidRequest->DATA.QUERY_INFORMATION.BytesNeeded;
      *(_QWORD *)(v10 + 40) = OidRequest->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v10 + 48) = OidRequest->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( (*(_DWORD *)(v10 + 88) & 0x400) == 0 )
    {
      if ( v9 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(v9 + 18);
        v9[23] = v10;
        v9[19] = 0LL;
        *((_DWORD *)v9 + 40) = 0;
        KeReleaseSpinLock(v9 + 18, v11);
      }
      else
      {
        v14 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
        v5[65] = 0LL;
        *((_DWORD *)v5 + 464) = 0;
        v5[277] = v10;
        KeReleaseSpinLock(v5 + 12, v14);
      }
    }
    RequestHandle = OidRequest->RequestHandle;
    v13 = *((_QWORD *)NdisReserved + 3);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(180LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, OidRequest->RequestHandle, OidRequest);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = OidRequest->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *((_DWORD *)NdisReserved + 20);
    }
    ExFreePoolWithTag(OidRequest, 0);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(181LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, RequestHandle, 0LL);
    NdisReserved = (UCHAR *)(v10 + 72);
LABEL_22:
    *((_DWORD *)NdisReserved + 2) = Status;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFOidRequestCompleteInternal,
           NdisFilterHandle,
           0x4CCCuLL,
           0,
           0LL) < 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
      *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
      v16 = v15;
      *((_DWORD *)NdisFilterHandle + 40) = 2101301;
      *((_BYTE *)NdisFilterHandle + 241) = 1;
      ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
      *((_QWORD *)NdisFilterHandle + 19) = 0LL;
      *((_DWORD *)NdisFilterHandle + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v16);
    }
    return;
  }
  if ( (unsigned __int8)byte_1C0092612 >= 2u )
    WPP_SF_(42LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids);
}
