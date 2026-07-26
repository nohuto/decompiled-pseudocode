/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C0014590
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C00248FC (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C0024B2C (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C0049B4C (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00E0EE0 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00E2A34 (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  __int64 v4; // r12
  _DWORD *v6; // rbx
  char v7; // r13
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  KIRQL v12; // al
  KIRQL v13; // bl
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int *InformationBuffer; // rdi
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT PMProtocolOffloadSize; // r13d
  _DWORD *v23; // rdi
  void *v24; // rcx
  _QWORD *v26; // [rsp+38h] [rbp-C8h]
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a2;
  memset(&Requesta, 0, 0xF8uLL);
  v6 = 0LL;
  P[0] = 0LL;
  v7 = 0;
  v26 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(99LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, MiniportAdapterHandle, v4, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 497, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
      MiniportAdapterHandle[65] = KeGetCurrentThread();
      v13 = v12;
      v14 = (void *)MiniportAdapterHandle[122];
      *((_DWORD *)MiniportAdapterHandle + 464) = 2760078;
      v15 = ndisClonePMPatternList(v14);
      MiniportAdapterHandle[65] = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 464) = 0;
      v16 = v15;
      KeReleaseSpinLock(MiniportAdapterHandle + 12, v13);
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C0099615 >= 2u )
          WPP_SF_d(101LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v16);
        v6 = v26;
        goto LABEL_28;
      }
      v6 = v26;
      v7 = 1;
    }
    InformationBuffer = (unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer;
    v18 = (_QWORD *)ndisRemovePMLowestPriorityEntry(P, InformationBuffer[2]);
    if ( !v18 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_d(102LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, InformationBuffer[2]);
LABEL_28:
      v4 = a2;
      goto LABEL_7;
    }
    *v18 = v6;
    v26 = v18;
    v6 = v18;
    memset(&Requesta, 0, 0xF8uLL);
    v4 = a2;
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265841;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v6[11];
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v19 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C0099615 < 2u )
        goto LABEL_7;
      v20 = 103LL;
      v21 = v19;
      goto LABEL_22;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C0099615 >= 2u )
  {
    v20 = 100LL;
    v21 = SetMiniport;
LABEL_22:
    WPP_SF_d(v20, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v21);
  }
LABEL_7:
  if ( v6 )
  {
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v23 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Requesta, 0, 0xF8uLL);
      *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
      *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
      Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
      Requesta.DATA.QUERY_INFORMATION.Oid = -50265843;
      Requesta.RequestType = NdisRequestSetInformation;
      Requesta.PortNumber = v23[11];
      *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
      Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v23 + 12;
      Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, v4) )
        break;
      ExFreePoolWithTag(v23, 0);
      if ( !v6 )
        goto LABEL_8;
    }
    *(_QWORD *)v23 = v6;
    v6 = v23;
  }
LABEL_8:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 497), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938514LL);
  v10 = P[0];
  while ( v10 )
  {
    v24 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v24, 0);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(104LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, MiniportAdapterHandle, v4, Request, v9);
  return v9;
}
