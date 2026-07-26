/*
 * XREFs of ndisMSetGeneralAttributes @ 0x1C00115A0
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00BFE50 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C00119F8 (ndisMSetPowerManagementCapabilities.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisMSetRssCapabilities @ 0x1C00C01E0 (ndisMSetRssCapabilities.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00E7634 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  _NDIS_MEDIUM v6; // r9d
  KIRQL v7; // r14
  unsigned __int8 LinkStateIndicationFlags; // cl
  _NET_IF_MEDIA_CONNECT_STATE v9; // eax
  unsigned __int8 v10; // al
  __int64 result; // rax
  bool v12; // zf
  unsigned int v13; // ecx
  __int64 MediaType; // rcx
  unsigned int v15; // eax
  bool v16; // cf
  unsigned int v17; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v19; // xmm0
  int v20; // eax
  unsigned int *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  struct _NDIS_PNP_CAPABILITIES *v25; // rcx
  unsigned int SupportedStatistics; // eax

  v2 = a2;
  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(119LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    LOBYTE(a2) = 22;
    v22 = ndisMReferenceIfBlock(a1, a2);
    if ( !v22 )
      return 3221291025LL;
    LOBYTE(v23) = 22;
    *(_WORD *)(v2 + 180) = *(_WORD *)(v22 + 524);
    *(_DWORD *)(v2 + 8) = *(_DWORD *)(v22 + 564);
    *(_DWORD *)(v2 + 12) = *(_DWORD *)(v22 + 568);
    *(_BYTE *)(v2 + 182) = *(_BYTE *)(v22 + 556);
    *(_DWORD *)(v2 + 168) = *(_DWORD *)(v22 + 528);
    *(_DWORD *)(v2 + 176) = *(_DWORD *)(v22 + 536);
    v24 = *(_DWORD *)(v22 + 532);
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_DWORD *)(v2 + 172) = v24;
    *(_QWORD *)(v2 + 200) = &ndisHandledWdfOids;
    *(_DWORD *)(v2 + 64) = 1500;
    *(_DWORD *)(v2 + 80) = 581;
    *(_DWORD *)(v2 + 208) = 108;
    ndisMDereferenceIfBlock(a1, v23);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  v6 = *(_DWORD *)(v2 + 8);
  do
  {
    if ( v6 == *((_DWORD *)ndisMediumArray + v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v5 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  a1->MediaType = v6;
  a1->MiniportMediaType = v6;
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 729031;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = *(_DWORD *)(v2 + 56);
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = *(_QWORD *)(v2 + 48);
    a1->MiniportXmitLinkSpeed = *(_QWORD *)(v2 + 32);
    a1->MiniportMediaDuplexState = *(_DWORD *)(v2 + 60);
    a1->MiniportAutoNegotiationFlags = *(_DWORD *)(v2 + 212);
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    v9 = *(_DWORD *)(v2 + 56);
    a1->MediaConnectState = v9;
    if ( v9 == MediaConnectStateConnected )
      a1->Flags |= 0x20000000u;
    else
      a1->Flags &= ~0x20000000u;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = *(_QWORD *)(v2 + 48);
    a1->XmitLinkSpeed = *(_QWORD *)(v2 + 32);
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = *(_DWORD *)(v2 + 60);
  ndisIfSetInterfaceState(a1, 0, v7);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v7);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.Header.Type = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledProtocolOffloads = 0LL;
  a1->PMCurrentParameters.MediaSpecificWakeUpEvents = 0;
  v10 = *(_BYTE *)(v2 + 1);
  if ( v10 == 1 )
  {
    v25 = *(struct _NDIS_PNP_CAPABILITIES **)(v2 + 72);
    if ( v25 )
    {
      ndisConvertPnpCapabilitiesToPM(v25, &a1->PMHardwareCapabilities);
      goto LABEL_23;
    }
    goto LABEL_66;
  }
  if ( v10 < 2u || !*(_QWORD *)(v2 + 216) )
  {
LABEL_66:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_23;
  }
  result = ndisMSetPowerManagementCapabilities(a1);
  v4 = result;
  if ( (_DWORD)result )
    return result;
LABEL_23:
  if ( *(_QWORD *)(v2 + 160) )
  {
    result = ndisMSetRssCapabilities(a1);
    v4 = result;
    if ( (_DWORD)result )
      return result;
  }
  v12 = (a1->DeviceFlags & 1) == 0;
  v13 = *(_DWORD *)(v2 + 84);
  a1->SupportedPacketFilters = v13;
  if ( !v12 )
    a1->SupportedPacketFilters = v13 | 0x20;
  MediaType = a1->MediaType;
  a1->MaxXmitLinkSpeed = *(_QWORD *)(v2 + 24);
  a1->MaxRcvLinkSpeed = *(_QWORD *)(v2 + 40);
  a1->MacOptions |= *(_DWORD *)(v2 + 80);
  if ( !(_DWORD)MediaType )
  {
    v15 = *(_DWORD *)(v2 + 64);
    if ( v15 > 0x200 )
      v15 = 512;
LABEL_30:
    a1->MiniportMaximumLookahead = v15;
    goto LABEL_31;
  }
  if ( (_DWORD)MediaType != 3 )
  {
    if ( (_DWORD)MediaType == 4
      || (int)MediaType > 8
      && ((int)MediaType <= 10 || (int)MediaType > 14 && ((int)MediaType <= 16 || (unsigned int)(MediaType - 18) <= 1)) )
    {
      a1->MiniportMaximumLookahead = *(_DWORD *)(v2 + 64);
    }
    if ( (int)MediaType < 20 )
      goto LABEL_31;
    v15 = *(_DWORD *)(v2 + 64);
    goto LABEL_30;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_31:
  if ( ((unsigned int)MediaType <= 0x13 && ndisMediaTypeCl[MediaType] || (_DWORD)MediaType == 3)
    && (a1->MacOptions & 0x80000001) == 0x80000001 )
  {
    a1->MiniportMaximumLookahead = 512;
  }
  if ( (int)MediaType >= 2
    && ((int)MediaType <= 8 || (int)MediaType > 9 && ((int)MediaType <= 15 || (_DWORD)MediaType == 17))
    || (int)MediaType >= 20 )
  {
    a1->PhysicalMediumType = NdisPhysicalMediumUnspecified;
  }
  else
  {
    a1->PhysicalMediumType = *(_DWORD *)(v2 + 12);
  }
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  if ( (_DWORD)MediaType )
  {
    if ( (_DWORD)MediaType == 16 )
      a1->MaximumLongAddresses = *(_DWORD *)(v2 + 88);
  }
  else
  {
    v16 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = *(_DWORD *)(v2 + 88);
    if ( !v16 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return 3221225659LL;
  }
  if ( a1->PhysicalMediumType == NdisPhysicalMediumUnspecified && a1->PhysicalMediumInInf == 14 )
    a1->PhysicalMediumType = NdisPhysicalMedium802_3;
  v16 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = a1->PhysicalMediumType;
  if ( v16 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    *(_DWORD *)(v2 + 184) = SupportedStatistics;
  else
    a1->SupportedStatistics = *(_DWORD *)(v2 + 184);
  a1->DataBackFillSize = *(_DWORD *)(v2 + 192);
  a1->ContextBackFillSize = *(_DWORD *)(v2 + 196);
  v17 = *(_DWORD *)(v2 + 208);
  if ( v17 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      a1->SupportedOidListLength = *(_DWORD *)(v2 + 208);
    }
  }
  v19 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = *(_DWORD *)(v2 + 168);
  a1->TopFilterRestartAttributes.ConnectionType = *(_DWORD *)(v2 + 176);
  a1->TopFilterRestartAttributes.ContextBackFillSize = *(_DWORD *)(v2 + 196);
  a1->TopFilterRestartAttributes.DataBackFillSize = *(_DWORD *)(v2 + 192);
  a1->TopFilterRestartAttributes.Header = *(_NDIS_OBJECT_HEADER *)v2;
  a1->TopFilterRestartAttributes.LookaheadSize = *(_DWORD *)(v2 + 64);
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = *(_DWORD *)(v2 + 88);
  a1->TopFilterRestartAttributes.MtuSize = *(_DWORD *)(v2 + 16);
  v20 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v19;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v20;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = *(_DWORD *)(v2 + 84);
  a1->TopFilterRestartAttributes.SupportedStatistics = *(_DWORD *)(v2 + 184);
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(v2 + 24);
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)(v2 + 208) || a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      *(_DWORD *)(v2 + 208) = a1->SupportedOidListLength;
      *(_QWORD *)(v2 + 200) = a1->SupportedOidList;
    }
    v21 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v2 + 208), 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v21;
    if ( v21 )
    {
      memmove(v21, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      a1->TopFilterRestartAttributes.SupportedOidListLength = *(_DWORD *)(v2 + 208);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(120LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v4);
  return 0LL;
}
