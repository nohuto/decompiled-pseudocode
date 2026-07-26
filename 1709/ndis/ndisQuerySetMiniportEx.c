/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C0009A50
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0001988 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisAddWoLMagicPacket @ 0x1C0002DD0 (ndisAddWoLMagicPacket.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C0003500 (ndisQuerySetMiniportEx2.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ndisPMAddWOLPattern @ 0x1C001E958 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C0049ABC (ndisPMAddProtocolOffload.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065140 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00745EC (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisOidPMRemove @ 0x1C00AC398 (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisDoDirectOidRequest @ 0x1C0043980 (ndisDoDirectOidRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00444C0 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0051EC0 (NdisMCoOidRequestComplete.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisDereferenceVcPtr @ 0x1C0112648 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C01128A4 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        _QWORD *MiniportAdapterHandle,
        _QWORD *P,
        PNDIS_OID_REQUEST Request,
        char a4,
        __int64 a5,
        __int64 a6)
{
  char v7; // r12
  ULONGLONG UnbiasedInterruptTime; // rbp
  int v12; // eax
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int i; // ebx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v21; // rdx
  NDIS_STATUS v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  ULONGLONG v25; // [rsp+60h] [rbp+8h]

  v7 = 0;
  UnbiasedInterruptTime = 0LL;
  v25 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(12LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportAdapterHandle, Request, a5);
  ndisReferencePackage(&ndisPkgs);
  if ( MiniportAdapterHandle[561]
    && Request->RequestType == NdisRequestSetInformation
    && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v25 = UnbiasedInterruptTime;
  }
  if ( (MiniportAdapterHandle[463] & 0x400) == 0 )
    Request->SupportedRevision = 1;
  if ( *(_QWORD *)&Request->NdisReserved[32] && a4 )
    v7 = 1;
  v12 = *((_DWORD *)MiniportAdapterHandle + 31);
  if ( (v12 & 0x100) != 0 )
  {
    v18 = -1073676280;
    goto LABEL_31;
  }
  if ( (v12 & 0x4000) != 0 )
  {
    v18 = -1073741823;
    goto LABEL_31;
  }
  if ( *((int *)MiniportAdapterHandle + 973) <= 1 || Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 8u;
    KeInitializeEvent((PRKEVENT)&Request->NdisReserved[40], NotificationEvent, 0);
    v13 = &ndisDirectOidRequestPathOids;
    v14 = 0;
    while ( Request->DATA.QUERY_INFORMATION.Oid != *v13 )
    {
      ++v14;
      ++v13;
      if ( v14 >= 0x16 )
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
    v16 = *((_DWORD *)MiniportAdapterHandle + 30);
    if ( (v16 & 0x300000) != 0 )
    {
      v18 = -1073676275;
    }
    else
    {
      if ( (v16 & 0x20000) != 0 )
      {
        v21 = 0LL;
        if ( P )
        {
          if ( !(unsigned __int8)ndisReferenceVcPtr(P, 0LL) )
          {
            v18 = -1073676286;
            goto LABEL_42;
          }
          v21 = P[25];
        }
        if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
          v22 = ndisMCoOidRequestToRequest(MiniportAdapterHandle);
        else
          v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(MiniportAdapterHandle[473] + 552LL))(
                  MiniportAdapterHandle[3],
                  v21,
                  Request);
        if ( v22 == 259 )
          KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
        else
          NdisMCoOidRequestComplete(MiniportAdapterHandle, P, Request, v22);
        v18 = *(_DWORD *)&Request->NdisReserved[8];
        if ( P )
          ndisDereferenceVcPtr(P);
        goto LABEL_24;
      }
      if ( (*(_DWORD *)&Request->NdisReserved[16] & 0x200000) != 0 )
        v17 = ndisDoDirectOidRequest(Request, MiniportAdapterHandle, a6, a5);
      else
        v17 = ndisQueueOidRequest(Request, MiniportAdapterHandle, a6, a5);
      v18 = v17;
      if ( v17 == 259 )
      {
        KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
        v18 = *(_DWORD *)&Request->NdisReserved[8];
LABEL_24:
        UnbiasedInterruptTime = v25;
        goto LABEL_25;
      }
    }
LABEL_42:
    UnbiasedInterruptTime = v25;
    goto LABEL_31;
  }
  v18 = -1071448017;
LABEL_31:
  if ( v7 == 1 && a4 )
    ndisMDereferenceOpenUnlocked(*(_QWORD *)&Request->NdisReserved[32]);
LABEL_25:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(13LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, MiniportAdapterHandle, Request, a5, v18);
  v19 = MiniportAdapterHandle[561];
  if ( v19 && Request->RequestType == NdisRequestSetInformation && Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    ++*(_DWORD *)(v19 + 1136);
    *(_QWORD *)(MiniportAdapterHandle[561] + 1144LL) = (KeQueryUnbiasedInterruptTime() - UnbiasedInterruptTime + 5000)
                                                     / 0x2710;
    v23 = MiniportAdapterHandle[561];
    v24 = *(_QWORD *)(v23 + 1144);
    if ( *(_QWORD *)(v23 + 1152) > v24 )
      v24 = *(_QWORD *)(v23 + 1152);
    *(_QWORD *)(v23 + 1152) = v24;
    *(_QWORD *)(MiniportAdapterHandle[561] + 1160LL) += *(_QWORD *)(MiniportAdapterHandle[561] + 1144LL);
  }
  return v18;
}
