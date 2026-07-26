/*
 * XREFs of NdisCoOidRequest @ 0x1C0112F30
 * Callers:
 *     NdisCoRequest @ 0x1C01133F0 (NdisCoRequest.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001B848 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     NdisMCoOidRequestComplete @ 0x1C0052830 (NdisMCoOidRequestComplete.c)
 *     NdisCoOidRequestComplete @ 0x1C0113330 (NdisCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x1C01144BC (ndisCoOidRequestToRequest.c)
 *     ndisDereferenceAf @ 0x1C01145D8 (ndisDereferenceAf.c)
 *     ndisReferenceAf @ 0x1C0114890 (ndisReferenceAf.c)
 */

NDIS_STATUS __stdcall NdisCoOidRequest(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST OidRequest)
{
  char v10; // r12
  NDIS_STATUS v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64, __int64, PNDIS_OID_REQUEST); // r15
  NDIS_STATUS Status; // eax
  __int64 v18; // rbp
  KIRQL v19; // al
  __int64 v20; // rax
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+18h]
  PNDIS_OID_REQUEST OidRequesta; // [rsp+A0h] [rbp+28h]
  KIRQL OidRequestb; // [rsp+A0h] [rbp+28h]

  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x3Bu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, NdisBindingHandle, NdisAfHandle, OidRequest);
  *(_QWORD *)&OidRequest->NdisReserved[32] = NdisBindingHandle;
  if ( OidRequest->Header.Type != 0x96 || OidRequest->Header.Size < 0xECu )
    goto LABEL_57;
  v10 = 1;
  if ( !OidRequest->Header.Revision )
  {
    v11 = -1071448020;
    goto LABEL_58;
  }
  v12 = 0LL;
  if ( NdisAfHandle )
  {
    v13 = 0LL;
    OidRequesta = 0LL;
    v22 = 0LL;
    if ( (unsigned __int8)ndisReferenceAf(NdisAfHandle) )
    {
      *(_DWORD *)&OidRequest->NdisReserved[16] |= 8u;
      v25 = 0LL;
      v24 = 0LL;
      KeInitializeEvent((PRKEVENT)&OidRequest->NdisReserved[40], NotificationEvent, 0);
      if ( *((NDIS_HANDLE *)NdisAfHandle + 46) == NdisBindingHandle )
      {
        if ( *((_DWORD *)NdisAfHandle + 98) < 6u )
        {
          v13 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 120LL);
          v22 = v13;
        }
        else
        {
          v10 = 0;
          OidRequesta = *(PNDIS_OID_REQUEST *)(*((_QWORD *)NdisAfHandle + 4) + 120LL);
        }
        v14 = *((_QWORD *)NdisAfHandle + 47);
        v23 = *((_QWORD *)NdisAfHandle + 6);
        *(_QWORD *)&OidRequest->NdisReserved[64] = v14;
        if ( NdisVcHandle )
        {
          *(_QWORD *)&OidRequest->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 3);
          v25 = *((_QWORD *)NdisVcHandle + 18);
        }
        if ( NdisPartyHandle )
        {
          *(_QWORD *)&OidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 2);
          v15 = *((_QWORD *)NdisPartyHandle + 1);
LABEL_24:
          v24 = v15;
        }
      }
      else
      {
        if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
        {
          v13 = *((_QWORD *)NdisAfHandle + 10);
          v22 = v13;
        }
        else
        {
          v10 = 0;
          OidRequesta = (PNDIS_OID_REQUEST)*((_QWORD *)NdisAfHandle + 29);
        }
        v23 = *((_QWORD *)NdisAfHandle + 47);
        *(_QWORD *)&OidRequest->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
        if ( NdisVcHandle )
        {
          *(_QWORD *)&OidRequest->NdisReserved[56] = *((_QWORD *)NdisVcHandle + 18);
          v25 = *((_QWORD *)NdisVcHandle + 3);
        }
        if ( NdisPartyHandle )
        {
          *(_QWORD *)&OidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
          v15 = *((_QWORD *)NdisPartyHandle + 2);
          goto LABEL_24;
        }
      }
      if ( v10 )
      {
        if ( !v13 )
        {
LABEL_27:
          v11 = -1073741637;
          ndisDereferenceAf(NdisAfHandle);
          goto LABEL_58;
        }
        v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, PNDIS_OID_REQUEST))OidRequesta;
      }
      else
      {
        v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, PNDIS_OID_REQUEST))OidRequesta;
        if ( !OidRequesta )
          goto LABEL_27;
      }
      if ( (unsigned __int8)byte_1C0099612 >= 4u )
        WPP_SF_qq(0x3Cu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v13, OidRequest);
      if ( v10 )
        Status = ndisCoOidRequestToRequest((unsigned int)&v22, v23, v25, v24, (__int64)OidRequest);
      else
        Status = v16(v23, v25, v24, OidRequest);
      v11 = Status;
      if ( Status != 259 )
      {
        NdisCoOidRequestComplete(NdisAfHandle, NdisVcHandle, NdisPartyHandle, OidRequest, Status);
LABEL_56:
        v11 = 259;
        goto LABEL_58;
      }
      goto LABEL_58;
    }
LABEL_57:
    v11 = -1073741823;
    goto LABEL_58;
  }
  *(_QWORD *)&OidRequest->NdisReserved[32] = NdisBindingHandle;
  v18 = *((_QWORD *)NdisBindingHandle + 2);
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 96));
  *(_QWORD *)(v18 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v18 + 1856) = 1577820;
  OidRequestb = v19;
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x8000) != 0 )
  {
    v11 = -1073676286;
  }
  else if ( (*(_DWORD *)(v18 + 120) & 0x300000) != 0 )
  {
    v11 = -1073676275;
  }
  else
  {
    v11 = 0;
    ndisMReferenceOpen((__int64)NdisBindingHandle, 6u);
  }
  *(_QWORD *)(v18 + 520) = 0LL;
  *(_DWORD *)(v18 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 96), OidRequestb);
  if ( !v11 )
  {
    *(_DWORD *)&OidRequest->NdisReserved[16] |= 0x20u;
    *(_QWORD *)&OidRequest->NdisReserved[32] = NdisBindingHandle;
    *(_QWORD *)&OidRequest->NdisReserved[56] = 0LL;
    if ( NdisVcHandle )
    {
      if ( *((NDIS_HANDLE *)NdisVcHandle + 10) == NdisBindingHandle )
        v20 = *((_QWORD *)NdisVcHandle + 3);
      else
        v20 = *((_QWORD *)NdisVcHandle + 18);
      *(_QWORD *)&OidRequest->NdisReserved[56] = v20;
    }
    if ( (*(_DWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 124LL) & 0x100) != 0 )
    {
      v11 = OidRequest->RequestType != NdisRequestSetInformation ? 0xC0000001 : 0;
    }
    else
    {
      if ( NdisVcHandle )
        v12 = *((_QWORD *)NdisVcHandle + 25);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*(_QWORD *)(v18 + 3784) + 552LL))(
              *(_QWORD *)(v18 + 2240),
              v12,
              OidRequest);
    }
    if ( v11 != 259 )
    {
      NdisMCoOidRequestComplete(*((NDIS_HANDLE *)NdisBindingHandle + 2), NdisVcHandle, OidRequest, v11);
      goto LABEL_56;
    }
  }
LABEL_58:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0x3Du, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, (__int64)OidRequest, v11);
  return v11;
}
