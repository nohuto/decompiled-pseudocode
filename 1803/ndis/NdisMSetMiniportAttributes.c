/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C00C2BB0
 * Callers:
 *     ndisLWMInitializeHandler @ 0x1C00EA17C (ndisLWMInitializeHandler.c)
 * Callees:
 *     ndisMSetGeneralAttributes @ 0x1C001690C (ndisMSetGeneralAttributes.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C001E3F0 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C001EF1C (TraceLoggingProviderEnabled.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0078DD8 (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C007993C (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0079A38 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisMSetReceiveFilterAttributes @ 0x1C00B3528 (ndisMSetReceiveFilterAttributes.c)
 *     ndisMSetNicSwitchAttributes @ 0x1C00B37FC (ndisMSetNicSwitchAttributes.c)
 *     ndisMSetSriovAttributes @ 0x1C00B3A00 (ndisMSetSriovAttributes.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BE8CC (ndisUpdateNoPauseOnSuspend.c)
 *     ndisMSetOffloadAttributes @ 0x1C00C3014 (ndisMSetOffloadAttributes.c)
 *     ndisMSetHDSplitAttributes @ 0x1C00C33B4 (ndisMSetHDSplitAttributes.c)
 *     ndisMSetNative802_11Attributes @ 0x1C00EA29C (ndisMSetNative802_11Attributes.c)
 *     ndisMSetQosAttributes @ 0x1C00EA34C (ndisMSetQosAttributes.c)
 *     ndisMSetNDKAttributes @ 0x1C00F0A64 (ndisMSetNDKAttributes.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FA018 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C0104F50 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int Type; // ebp
  NDIS_STATUS v5; // edi
  int v6; // r15d
  UCHAR Revision; // al
  USHORT Size; // cx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int64 MaxXmitLinkSpeed; // r9
  unsigned __int64 XmitLinkSpeed; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14
  UCHAR v18; // dl
  ULONGLONG v19; // r8
  PVOID PoolWithTag; // rax
  NDIS_STATUS v21; // eax
  unsigned int Flags; // r9d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  ULONG v28; // edi
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned int v31; // ecx
  UCHAR v32; // dl
  ULONGLONG v33; // r8
  NDIS_INTERFACE_TYPE AdapterType[2]; // [rsp+20h] [rbp-28h]

  Type = MiniportAttributes->Header.Type;
  v5 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x73u,
      &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
      (__int64)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = Type;
  switch ( Type )
  {
    case 158:
      Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      v23 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 473) + 26LL) & 1) + 34);
      if ( (Flags & 1) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 2) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      v24 = v23 | 0x80;
      if ( (Flags & 4) == 0 )
        v24 = v23;
      v25 = v24 | 0x100;
      if ( (Flags & 8) == 0 )
        v25 = v24;
      v26 = v25 | 0x400;
      if ( (Flags & 0x10) == 0 )
        v26 = v25;
      v27 = v26 | 0x40;
      if ( (Flags & 0x20) == 0 )
        v27 = v26;
      v28 = v27 | 8;
      if ( (Flags & 0x40) == 0 )
        v28 = v27;
      if ( (Flags & 0x100) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
        ndisUpdateNoPauseOnSuspend((__int64)NdisMiniportHandle);
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x200) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
        Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
      }
      if ( (Flags & 0x400) != 0
        || (v29 = *((_BYTE *)NdisMiniportHandle + 32), v29 <= 6u)
        && (v29 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
      {
        *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
      }
      NdisMSetAttributesEx(
        NdisMiniportHandle,
        MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
        MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
        v28,
        MiniportAttributes->RegistrationAttributes.InterfaceType);
      v30 = *((_DWORD *)NdisMiniportHandle + 30);
      if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
      {
        *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
        v31 = v30 & 0xFFFEFFFF;
      }
      else
      {
        v31 = v30 | 0x10000;
      }
      *((_DWORD *)NdisMiniportHandle + 30) = v31;
      v5 = 0;
      break;
    case 159:
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MiniportAttributes->Header.Size, 0x2020444Eu);
      *((_QWORD *)NdisMiniportHandle + 340) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        break;
      }
      memmove(PoolWithTag, MiniportAttributes, MiniportAttributes->Header.Size);
      v21 = ndisMSetGeneralAttributes((__int64)NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 340));
      goto LABEL_51;
    case 160:
      MaxXmitLinkSpeed = 0LL;
      XmitLinkSpeed = 0LL;
      DefaultOffloadConfiguration = 0LL;
      HardwareOffloadCapabilities = 0LL;
      if ( MiniportAttributes->Header.Size >= 0x28u )
      {
        DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
        HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
        MaxXmitLinkSpeed = MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed;
        XmitLinkSpeed = MiniportAttributes->GeneralAttributes.XmitLinkSpeed;
      }
      v5 = ndisMSetOffloadAttributes(
             NdisMiniportHandle,
             DefaultOffloadConfiguration,
             HardwareOffloadCapabilities,
             MaxXmitLinkSpeed,
             XmitLinkSpeed);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v18, v19) )
        NdisTraceLoggingOffloads(
          (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
          HardwareOffloadCapabilities,
          DefaultOffloadConfiguration);
      break;
    case 161:
      v21 = ndisMSetNative802_11Attributes(NdisMiniportHandle, MiniportAttributes);
      goto LABEL_51;
    case 164:
      *((_QWORD *)NdisMiniportHandle + 517) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
      break;
    case 175:
      Revision = MiniportAttributes->Header.Revision;
      if ( !Revision )
        goto LABEL_87;
      Size = MiniportAttributes->Header.Size;
      if ( Size < 0x10u )
        goto LABEL_87;
      if ( Revision != 2 )
      {
        if ( Size < 0x50u && Revision >= 3u )
          goto LABEL_87;
        goto LABEL_17;
      }
      if ( Size >= 0x30u )
      {
LABEL_17:
        v10 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v10 <= 6u && (v10 != 6 || !*((_BYTE *)NdisMiniportHandle + 33)) )
          goto LABEL_88;
        v5 = ndisMSetHDSplitAttributes(
               NdisMiniportHandle,
               MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext);
        if ( v5 < 0 )
          break;
        if ( MiniportAttributes->Header.Revision >= 2u )
        {
          v11 = *((_BYTE *)NdisMiniportHandle + 32);
          if ( v11 <= 6u && (v11 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
            goto LABEL_88;
          if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
          {
            if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
            {
              v5 = ndisMSetReceiveFilterAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes);
              if ( v5 < 0 )
                break;
            }
          }
          if ( MiniportAttributes->Header.Revision >= 2u )
          {
            v12 = *((_BYTE *)NdisMiniportHandle + 32);
            if ( v12 <= 6u && (v12 != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
              goto LABEL_88;
            if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
            {
              if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
              {
                v5 = ndisMSetNicSwitchAttributes((void **)NdisMiniportHandle, (__int64)MiniportAttributes);
                if ( v5 < 0 )
                  break;
              }
            }
          }
        }
        if ( MiniportAttributes->Header.Revision < 3u )
          break;
        v13 = *((_BYTE *)NdisMiniportHandle + 32);
        if ( v13 > 6u || v13 == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
        {
          if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
            || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
            || (v5 = ndisMSetSriovAttributes((__int64)NdisMiniportHandle, (__int64)MiniportAttributes), v5 >= 0) )
          {
            if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
            {
              if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
              {
                v5 = ndisMSetQosAttributes(NdisMiniportHandle, MiniportAttributes);
                if ( v5 >= 0 )
                {
                  NdisTraceLoggingQosHardwareOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes);
                  NdisTraceLoggingQosConfigOffloads(
                    (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                    MiniportAttributes);
                }
              }
            }
          }
          break;
        }
LABEL_88:
        v5 = -1073741637;
        break;
      }
LABEL_87:
      v5 = -1073741811;
      break;
    case 179:
      v5 = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
      if ( !v5 && TraceLoggingProviderEnabled(&hProvider, v32, v33) )
        NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
      break;
    case 197:
      v21 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
LABEL_51:
      v5 = v21;
      break;
    default:
      goto LABEL_87;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    AdapterType[0] = v5;
    WPP_SF_qdD(
      0x74u,
      &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids,
      (__int64)NdisMiniportHandle,
      v6,
      *(_QWORD *)AdapterType);
  }
  return v5;
}
