/*
 * XREFs of ndisQuerySetMiniportEx @ 0x1C0009F70
 * Callers:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisQuerySetMiniportEx2 @ 0x1C001D418 (ndisQuerySetMiniportEx2.c)
 *     ndisAddWoLMagicPacket @ 0x1C0022788 (ndisAddWoLMagicPacket.c)
 *     ndisPMAddWOLPattern @ 0x1C002319C (ndisPMAddWOLPattern.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C00259F8 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisPMAddProtocolOffload @ 0x1C004C21C (ndisPMAddProtocolOffload.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064AF8 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisOidPMRemove @ 0x1C00D4F7C (ndisOidPMRemove.c)
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 *     ndisDoDirectOidRequest @ 0x1C0046784 (ndisDoDirectOidRequest.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00472C0 (ndisMCoOidRequestToRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0053080 (NdisMCoOidRequestComplete.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 *     ndisDereferenceVcPtr @ 0x1C0109638 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0109894 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx(
        _DWORD *MiniportAdapterHandle,
        _QWORD *P,
        PNDIS_OID_REQUEST Request,
        char a4,
        __int64 a5,
        __int64 a6)
{
  bool v10; // r14
  __int64 Oid; // rdx
  int v12; // eax
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int i; // edi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v20; // rdx
  NDIS_STATUS v21; // eax

  v10 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(12LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, MiniportAdapterHandle, Request, a5);
  ndisReferencePackage(&ndisPkgs);
  if ( (MiniportAdapterHandle[926] & 0x400) == 0 )
    Request->SupportedRevision = 1;
  if ( *(_QWORD *)&Request->NdisReserved[32] )
    v10 = a4 != 0;
  v12 = MiniportAdapterHandle[31];
  if ( (v12 & 0x100) != 0 )
  {
    v18 = -1073676280;
  }
  else if ( (v12 & 0x4000) != 0 )
  {
    v18 = -1073741823;
  }
  else if ( (int)MiniportAdapterHandle[973] <= 1 || Request->DATA.QUERY_INFORMATION.Oid == -50265855 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 8u;
    KeInitializeEvent((PRKEVENT)&Request->NdisReserved[40], NotificationEvent, 0);
    Oid = Request->DATA.QUERY_INFORMATION.Oid;
    v13 = &ndisDirectOidRequestPathOids;
    v14 = 0;
    while ( (_DWORD)Oid != *v13 )
    {
      ++v14;
      ++v13;
      if ( v14 >= 0x15 )
        goto LABEL_13;
    }
    *(_DWORD *)&Request->NdisReserved[16] |= 0x200000u;
LABEL_13:
    if ( KeGetCurrentIrql() < 2u )
    {
      for ( i = 0; i < 0x1388; ++i )
      {
        if ( (MiniportAdapterHandle[30] & 0x300000) == 0 )
          break;
        NdisMSleep(0x3E8u);
      }
    }
    v16 = MiniportAdapterHandle[30];
    if ( (v16 & 0x300000) != 0 )
    {
      v18 = -1073676275;
    }
    else
    {
      if ( (v16 & 0x20000) == 0 )
      {
        if ( (*(_DWORD *)&Request->NdisReserved[16] & 0x200000) != 0 )
          v17 = ndisDoDirectOidRequest(Request, MiniportAdapterHandle, a6, a5);
        else
          v17 = ndisQueueOidRequest(Request, MiniportAdapterHandle, a6, a5);
        v18 = v17;
        if ( v17 == 259 )
        {
          v10 = 0;
          KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
          v18 = *(_DWORD *)&Request->NdisReserved[8];
        }
        goto LABEL_22;
      }
      v20 = 0LL;
      if ( P )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(P, 0LL) )
        {
          v18 = -1073676286;
          goto LABEL_22;
        }
        v20 = P[25];
      }
      v10 = 0;
      if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
        v21 = ndisMCoOidRequestToRequest(MiniportAdapterHandle);
      else
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)MiniportAdapterHandle + 473)
                                                                            + 552LL))(
                *((_QWORD *)MiniportAdapterHandle + 3),
                v20,
                Request);
      if ( v21 == 259 )
        KeWaitForSingleObject(&Request->NdisReserved[40], Executive, 0, 0, 0LL);
      else
        NdisMCoOidRequestComplete(MiniportAdapterHandle, P, Request, v21);
      v18 = *(_DWORD *)&Request->NdisReserved[8];
      if ( !P )
        goto LABEL_23;
      ndisDereferenceVcPtr(P);
    }
  }
  else
  {
    v18 = -1071448017;
  }
LABEL_22:
  if ( v10 && a4 )
  {
    LOBYTE(Oid) = 6;
    ndisMDereferenceOpenUnlocked(*(_QWORD *)&Request->NdisReserved[32], Oid);
  }
LABEL_23:
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqL(13LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, MiniportAdapterHandle, Request, a5, v18);
  return v18;
}
