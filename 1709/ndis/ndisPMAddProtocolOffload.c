/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C0049ABC
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001E894 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C001EA98 (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C0048748 (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00DF3E4 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00E125C (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(_QWORD *MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  char v7; // si
  int SetMiniport; // eax
  unsigned int v9; // r15d
  KIRQL v10; // al
  KIRQL v11; // di
  unsigned int *v12; // rcx
  int v13; // eax
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // r11
  int v17; // edx
  unsigned __int16 v18; // cx
  int v19; // r8d
  UINT PMProtocolOffloadSize; // esi
  _DWORD *v21; // rdi
  int v22; // edx
  _QWORD *v23; // rbx
  void *v24; // rcx
  __int64 v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_OID_REQUEST Request; // [rsp+40h] [rbp-C0h] BYREF

  memset(&Request, 0, 0xF8uLL);
  P = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0x63u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, a3);
  KeWaitForSingleObject(MiniportAdapterHandle + 497, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)(a3 + 88) |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, (PNDIS_OID_REQUEST)a3, 0, 0LL, a2);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
      MiniportAdapterHandle[65] = KeGetCurrentThread();
      v11 = v10;
      v12 = (unsigned int *)MiniportAdapterHandle[122];
      *((_DWORD *)MiniportAdapterHandle + 464) = 2760078;
      v13 = ndisClonePMPatternList(v12, (_QWORD **)&P);
      MiniportAdapterHandle[65] = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      v27 = v13;
      KeReleaseSpinLock(MiniportAdapterHandle + 12, v11);
      v14 = v27;
      if ( v27 )
      {
        if ( (unsigned __int8)byte_1C0098755 < 2u )
          goto LABEL_22;
        v18 = 101;
LABEL_18:
        v19 = v14;
LABEL_21:
        WPP_SF_d(v18, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v19);
        goto LABEL_22;
      }
      v7 = 1;
    }
    v15 = (_QWORD *)ndisRemovePMLowestPriorityEntry(&P, *(unsigned int *)(*(_QWORD *)(a3 + 40) + 8LL));
    if ( !v15 )
    {
      if ( (unsigned __int8)byte_1C0098755 < 4u )
        goto LABEL_22;
      v19 = *(_DWORD *)(v16 + 8);
      v18 = 102;
      goto LABEL_21;
    }
    *v15 = v6;
    v6 = v15;
    memset(&Request, 0, 0xF8uLL);
    v17 = *(_DWORD *)&Request.NdisReserved[16];
    *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
    Request.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Request.NdisReserved[16] |= 8u;
    Request.DATA.QUERY_INFORMATION.Oid = -50265841;
    Request.RequestType = NdisRequestSetInformation;
    Request.PortNumber = v6[11];
    *(_DWORD *)&Request.NdisReserved[16] = v17 | 0x1800008;
    Request.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Request.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v14 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, a2);
    if ( v14 )
    {
      if ( (unsigned __int8)byte_1C0098755 < 2u )
        goto LABEL_22;
      v18 = 103;
      goto LABEL_18;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0098755 >= 2u )
  {
    v18 = 100;
    v19 = SetMiniport;
    goto LABEL_21;
  }
LABEL_22:
  if ( v6 )
  {
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v21 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Request, 0, 0xF8uLL);
      Request.Header = (NDIS_OBJECT_HEADER)15466902;
      *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
      v22 = *(_DWORD *)&Request.NdisReserved[16];
      Request.DATA.QUERY_INFORMATION.Oid = -50265843;
      Request.RequestType = NdisRequestSetInformation;
      *(_DWORD *)&Request.NdisReserved[16] |= 8u;
      Request.PortNumber = v21[11];
      *(_DWORD *)&Request.NdisReserved[16] = v22 | 0x1800008;
      Request.DATA.QUERY_INFORMATION.InformationBuffer = v21 + 12;
      Request.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, a2) )
        break;
      ExFreePoolWithTag(v21, 0);
      if ( !v6 )
        goto LABEL_28;
    }
    *(_QWORD *)v21 = v6;
    v6 = v21;
  }
LABEL_28:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 497), 0, 1, 0);
  ndisCreatePMRejectWorkItem((__int64)MiniportAdapterHandle, (_LIST_ENTRY *)v6, 1073938514);
  v23 = P;
  while ( v23 )
  {
    v24 = v23;
    v23 = (_QWORD *)*v23;
    ExFreePoolWithTag(v24, 0);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v26) = v9;
    WPP_SF_qqqL(0x68u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, MiniportAdapterHandle, a2, a3, v26);
  }
  return v9;
}
