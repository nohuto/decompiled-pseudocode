/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C000AE70
 * Callers:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0012634 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisPMAddProtocolOffload @ 0x1C0014590 (ndisPMAddProtocolOffload.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C001F144 (ndisQuerySetMiniportEx2.c)
 *     ndisAddWoLMagicPacket @ 0x1C0024054 (ndisAddWoLMagicPacket.c)
 *     ndisPMAddWOLPattern @ 0x1C00249E0 (ndisPMAddWOLPattern.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065C60 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0074E5C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisOidPMRemove @ 0x1C00B44D8 (ndisOidPMRemove.c)
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 *     ndisDoDirectOidRequest @ 0x1C0044A5C (ndisDoDirectOidRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C0045690 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0052830 (NdisMCoOidRequestComplete.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 *     ndisDereferenceVcPtr @ 0x1C0114684 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01148E4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        _QWORD *MiniportAdapterHandle,
        _QWORD *P,
        PNDIS_OID_REQUEST Request,
        char a4,
        __int64 a5,
        __int64 a6)
{
  char v8; // r13
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 Oid; // rdx
  int v13; // eax
  _DWORD *v14; // rax
  unsigned int v15; // ecx
  unsigned int i; // ebx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v22; // rdx
  NDIS_STATUS v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  ULONGLONG v26; // [rsp+60h] [rbp+8h]

  v8 = 0;
  UnbiasedInterruptTime = 0LL;
  v26 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(12LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, MiniportAdapterHandle, Request, a5);
  ndisReferencePackage(&ndisPkgs);
  if ( MiniportAdapterHandle[561]
    && Request->RequestType == NdisRequestSetInformation
    && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v26 = UnbiasedInterruptTime;
  }
  if ( (MiniportAdapterHandle[463] & 0x400) == 0 )
    Request->SupportedRevision = 1;
  if ( *(_QWORD *)&Request->NdisReserved[32] && a4 )
    v8 = 1;
  v13 = *((_DWORD *)MiniportAdapterHandle + 31);
  if ( (v13 & 0x100) != 0 )
  {
    v19 = -1073676280;
    goto LABEL_31;
  }
  if ( (v13 & 0x4000) != 0 )
  {
    v19 = -1073741823;
    goto LABEL_31;
  }
  if ( *((int *)MiniportAdapterHandle + 973) <= 1 || Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 8u;
    KeInitializeEvent((PRKEVENT)&Request->NdisReserved[40], NotificationEvent, 0);
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    v14 = &ndisDirectOidRequestPathOids;
    v15 = 0;
    while ( (_DWORD)Oid != *v14 )
    {
      ++v15;
      ++v14;
      if ( v15 >= 0x16 )
        goto LABEL_15;
    }
    *(_DWORD *)&Request->NdisReserved[16] |= 0x200000u;
LABEL_15:
    if ( KeGetCurrentIrql() < 2u )
    {
      for ( i = 0; i < 0x1388; ++i )
      {
        if ( (MiniportAdapterHandle[15] & 0x300000) == 0 )
          break;
        NdisMSleep(0x3E8u);
      }
    }
    v17 = *((_DWORD *)MiniportAdapterHandle + 30);
    if ( (v17 & 0x300000) != 0 )
    {
      v19 = -1073676275;
    }
    else
    {
      if ( (v17 & 0x20000) != 0 )
      {
        v22 = 0LL;
        if ( P )
        {
          if ( !(unsigned __int8)ndisReferenceVcPtr(P, 0LL) )
          {
            v19 = -1073676286;
            goto LABEL_42;
          }
          v22 = P[25];
        }
        if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
          v23 = ndisMCoOidRequestToRequest(MiniportAdapterHandle);
        else
          v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(MiniportAdapterHandle[473] + 552LL))(
                  MiniportAdapterHandle[3],
                  v22,
                  Request);
        if ( v23 == 259 )
          KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
        else
          NdisMCoOidRequestComplete(MiniportAdapterHandle, P, Request, v23);
        v19 = *(_DWORD *)&Request->NdisReserved[8];
        if ( P )
          ndisDereferenceVcPtr(P);
        goto LABEL_24;
      }
      if ( (*(_DWORD *)&Request->NdisReserved[16] & 0x200000) != 0 )
        v18 = ndisDoDirectOidRequest(Request, MiniportAdapterHandle, a6, a5);
      else
        v18 = ndisQueueOidRequest(Request, MiniportAdapterHandle, a6, a5);
      v19 = v18;
      if ( v18 == 259 )
      {
        KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
        v19 = *(_DWORD *)&Request->NdisReserved[8];
LABEL_24:
        UnbiasedInterruptTime = v26;
        goto LABEL_25;
      }
    }
LABEL_42:
    UnbiasedInterruptTime = v26;
    goto LABEL_31;
  }
  v19 = -1071448017;
LABEL_31:
  if ( v8 == 1 && a4 )
  {
    LOBYTE(Oid) = 6;
    ndisMDereferenceOpenUnlocked(*(_QWORD *)&Request->NdisReserved[32], Oid);
  }
LABEL_25:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(13LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, MiniportAdapterHandle, Request, a5, v19);
  v20 = MiniportAdapterHandle[561];
  if ( v20 && Request->RequestType == NdisRequestSetInformation && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*(_DWORD *)(v20 + 1136);
    *(_QWORD *)(MiniportAdapterHandle[561] + 1144LL) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000)
                                                     / 0x2710;
    v24 = MiniportAdapterHandle[561];
    v25 = *(_QWORD *)(v24 + 1152);
    if ( v25 <= *(_QWORD *)(v24 + 1144) )
      v25 = *(_QWORD *)(v24 + 1144);
    *(_QWORD *)(v24 + 1152) = v25;
    *(_QWORD *)(MiniportAdapterHandle[561] + 1160LL) += *(_QWORD *)(MiniportAdapterHandle[561] + 1144LL);
  }
  return v19;
}
