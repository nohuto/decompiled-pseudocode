/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C004C21C
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C00230F8 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00232DC (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C004ACC4 (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00D4BE0 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00D6E0C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(_DWORD *MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  _DWORD *v6; // rbx
  char v7; // si
  int SetMiniport; // eax
  unsigned int v9; // r15d
  KIRQL v10; // al
  KIRQL v11; // di
  unsigned int *v12; // rcx
  int v13; // eax
  int v14; // r12d
  _QWORD *v15; // rax
  __int64 v16; // r11
  int v17; // eax
  unsigned __int16 v18; // cx
  int v19; // r8d
  __int64 v20; // rsi
  UINT PMProtocolOffloadSize; // r12d
  _DWORD *v22; // rdi
  _QWORD *v23; // rbx
  void *v24; // rcx
  __int64 v26; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Request; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  memset(&Request, 0, 0xF8uLL);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(0x63u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, v4, a3);
  KeWaitForSingleObject(MiniportAdapterHandle + 994, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)(a3 + 88) |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, (PNDIS_OID_REQUEST)a3, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
      *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
      v11 = v10;
      v12 = (unsigned int *)*((_QWORD *)MiniportAdapterHandle + 122);
      MiniportAdapterHandle[464] = 2760075;
      v13 = ndisClonePMPatternList(v12, (_QWORD **)&P);
      *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
      MiniportAdapterHandle[464] = 0;
      v14 = v13;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v11);
      if ( v14 )
      {
        if ( (unsigned __int8)byte_1C0092615 < 2u )
          goto LABEL_21;
        v18 = 101;
        v19 = v14;
        goto LABEL_20;
      }
      v4 = a2;
      v7 = 1;
    }
    v15 = (_QWORD *)ndisRemovePMLowestPriorityEntry(&P, *(unsigned int *)(*(_QWORD *)(a3 + 40) + 8LL));
    if ( !v15 )
    {
      if ( (unsigned __int8)byte_1C0092615 < 4u )
        goto LABEL_21;
      v19 = *(_DWORD *)(v16 + 8);
      v18 = 102;
      goto LABEL_20;
    }
    *v15 = v6;
    v6 = v15;
    memset(&Request, 0, 0xF8uLL);
    *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Request.NdisReserved[16] |= 8u;
    Request.Header = (NDIS_OBJECT_HEADER)15466902;
    Request.DATA.QUERY_INFORMATION.Oid = -50265841;
    Request.RequestType = NdisRequestSetInformation;
    Request.PortNumber = v6[11];
    *(_DWORD *)&Request.NdisReserved[16] |= 0x1800000u;
    Request.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Request.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v17 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, v4);
    if ( v17 )
    {
      if ( (unsigned __int8)byte_1C0092615 < 2u )
        goto LABEL_21;
      v18 = 103;
      v19 = v17;
      goto LABEL_20;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0092615 >= 2u )
  {
    v18 = 100;
    v19 = SetMiniport;
LABEL_20:
    WPP_SF_d(v18, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, v19);
  }
LABEL_21:
  if ( v6 )
  {
    v20 = a2;
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v22 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Request, 0, 0xF8uLL);
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      Request.DATA.QUERY_INFORMATION.Oid = -50265843;
      Request.RequestType = NdisRequestSetInformation;
      Request.PortNumber = v22[11];
      *(_DWORD *)&Request.NdisReserved[16] |= 0x1800000u;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = v22 + 12;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, a2) )
        break;
      ExFreePoolWithTag(v22, 0);
      if ( !v6 )
        goto LABEL_28;
    }
    *(_QWORD *)v22 = v6;
    v6 = v22;
  }
  else
  {
    v20 = a2;
  }
LABEL_28:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 994), 0, 1, 0);
  ndisCreatePMRejectWorkItem((__int64)MiniportAdapterHandle, (_LIST_ENTRY *)v6, 1073938514);
  v23 = P;
  while ( v23 )
  {
    v24 = v23;
    v23 = (_QWORD *)*v23;
    ExFreePoolWithTag(v24, 0);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    LODWORD(v26) = v9;
    WPP_SF_qqqL(0x68u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, MiniportAdapterHandle, v20, a3, v26);
  }
  return v9;
}
