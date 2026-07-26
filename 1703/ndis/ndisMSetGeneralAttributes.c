/*
 * XREFs of ndisMSetGeneralAttributes @ 0x1C0014630
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00AA760 (NdisMSetMiniportAttributes.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisMSetRssCapabilities @ 0x1C00AAB48 (ndisMSetRssCapabilities.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C00DD70C (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisMSetGeneralAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  _NDIS_MEDIUM v5; // r8d
  KIRQL v6; // bp
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE v8; // eax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // ecx
  __int64 MediaType; // rcx
  unsigned int v14; // eax
  bool v15; // cf
  unsigned int v16; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v18; // xmm0
  int v19; // eax
  unsigned int *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  struct _NDIS_PNP_CAPABILITIES *v25; // rcx
  __int64 v26; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  unsigned int SupportedStatistics; // eax

  v2 = a2;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(114LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
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
    *(_DWORD *)(v2 + 208) = 112;
    ndisMDereferenceIfBlock(a1, v23);
  }
  v4 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return 3221291033LL;
  v5 = *(_DWORD *)(v2 + 8);
  do
  {
    if ( v5 == *((_DWORD *)ndisMediumArray + v4) )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( (unsigned int)v4 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v4 >= (unsigned int)ndisMediumArraySize )
    return 3221291033LL;
  a1->MediaType = v5;
  a1->MiniportMediaType = v5;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 728882;
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
    v8 = *(_DWORD *)(v2 + 56);
    a1->MediaConnectState = v8;
    if ( v8 == MediaConnectStateConnected )
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
  ndisIfSetInterfaceState(a1);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v6);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.Header.Type = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledProtocolOffloads = 0LL;
  a1->PMCurrentParameters.MediaSpecificWakeUpEvents = 0;
  v9 = *(_BYTE *)(v2 + 1);
  if ( v9 == 1 && (v25 = *(struct _NDIS_PNP_CAPABILITIES **)(v2 + 72)) != 0LL )
  {
    ndisConvertPnpCapabilitiesToPM(v25, &a1->PMHardwareCapabilities);
  }
  else if ( v9 >= 2u && (v10 = *(_QWORD *)(v2 + 216)) != 0 )
  {
    if ( *(_BYTE *)(v10 + 1) < 2u )
    {
      memset(&a1->PMHardwareCapabilities, 0, sizeof(a1->PMHardwareCapabilities));
      v26 = *(_QWORD *)(v2 + 216);
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)v26;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *(_OWORD *)(v26 + 16);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *(_OWORD *)(v26 + 32);
      a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *(_DWORD *)(v26 + 48);
    }
    else
    {
      *(_OWORD *)&a1->PMHardwareCapabilities.Header.Type = *(_OWORD *)v10;
      *(_OWORD *)&a1->PMHardwareCapabilities.MaxWoLPatternSize = *(_OWORD *)(v10 + 16);
      *(_OWORD *)&a1->PMHardwareCapabilities.NumArpOffloadIPv4Addresses = *(_OWORD *)(v10 + 32);
      *(_QWORD *)&a1->PMHardwareCapabilities.MinLinkChangeWakeUp = *(_QWORD *)(v10 + 48);
      a1->PMHardwareCapabilities.MediaSpecificWakeUpEvents = *(_DWORD *)(v10 + 56);
    }
  }
  else if ( a1->MajorNdisVersion >= 6u )
  {
    a1->MP6SupportPM = 0;
  }
  if ( *(_QWORD *)(v2 + 160) )
    ndisMSetRssCapabilities(a1);
  v11 = (a1->DeviceFlags & 1) == 0;
  v12 = *(_DWORD *)(v2 + 84);
  a1->SupportedPacketFilters = v12;
  if ( !v11 )
    a1->SupportedPacketFilters = v12 | 0x20;
  MediaType = a1->MediaType;
  a1->MaxXmitLinkSpeed = *(_QWORD *)(v2 + 24);
  a1->MaxRcvLinkSpeed = *(_QWORD *)(v2 + 40);
  a1->MacOptions |= *(_DWORD *)(v2 + 80);
  if ( !(_DWORD)MediaType )
  {
    v14 = *(_DWORD *)(v2 + 64);
    if ( v14 > 0x200 )
      v14 = 512;
LABEL_31:
    a1->MiniportMaximumLookahead = v14;
    goto LABEL_32;
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
      goto LABEL_32;
    v14 = *(_DWORD *)(v2 + 64);
    goto LABEL_31;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_32:
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
    v15 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = *(_DWORD *)(v2 + 88);
    if ( !v15 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return 3221225659LL;
  }
  if ( a1->PhysicalMediumType == NdisPhysicalMediumUnspecified )
  {
    PhysicalMediumType = a1->PhysicalMediumType;
    if ( a1->PhysicalMediumInInf == 14 )
      PhysicalMediumType = NdisPhysicalMedium802_3;
    a1->PhysicalMediumType = PhysicalMediumType;
  }
  v15 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = a1->PhysicalMediumType;
  if ( v15 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    *(_DWORD *)(v2 + 184) = SupportedStatistics;
  else
    a1->SupportedStatistics = *(_DWORD *)(v2 + 184);
  a1->DataBackFillSize = *(_DWORD *)(v2 + 192);
  a1->ContextBackFillSize = *(_DWORD *)(v2 + 196);
  v16 = *(_DWORD *)(v2 + 208);
  if ( v16 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      a1->SupportedOidListLength = *(_DWORD *)(v2 + 208);
    }
  }
  v18 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = *(_DWORD *)(v2 + 168);
  a1->TopFilterRestartAttributes.ConnectionType = *(_DWORD *)(v2 + 176);
  a1->TopFilterRestartAttributes.ContextBackFillSize = *(_DWORD *)(v2 + 196);
  a1->TopFilterRestartAttributes.DataBackFillSize = *(_DWORD *)(v2 + 192);
  a1->TopFilterRestartAttributes.Header = *(_NDIS_OBJECT_HEADER *)v2;
  a1->TopFilterRestartAttributes.LookaheadSize = *(_DWORD *)(v2 + 64);
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = *(_DWORD *)(v2 + 88);
  a1->TopFilterRestartAttributes.MtuSize = *(_DWORD *)(v2 + 16);
  v19 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v18;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v19;
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
    v20 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v2 + 208), 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v20;
    if ( v20 )
    {
      memmove(v20, *(const void **)(v2 + 200), *(unsigned int *)(v2 + 208));
      a1->TopFilterRestartAttributes.SupportedOidListLength = *(_DWORD *)(v2 + 208);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(115LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, 0LL);
  return 0LL;
}
