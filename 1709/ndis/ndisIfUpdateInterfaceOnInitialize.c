/*
 * XREFs of ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C0003A80 (ndisIfGetRcvAddressFromMiniport.c)
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D998 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00AEFC8 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00AF01C (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00DAEF8 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00DAFA0 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        __int64 a3)
{
  unsigned int IntegerData; // edi
  bool v7; // r13
  unsigned int v8; // ebx
  KIRQL v9; // al
  unsigned int SlotNumber; // ecx
  unsigned int v11; // ebx
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rcx
  unsigned __int16 v13; // di
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int16 v16; // ax
  unsigned __int16 v17; // ax
  unsigned int v18; // ecx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  _NDIS_MEDIUM MediaType; // edx
  _NDIS_MEDIUM v22; // ecx
  _NDIS_PHYSICAL_MEDIUM v23; // eax
  bool v24; // bl
  KIRQL v25; // al
  KIRQL v26; // bl
  int Status; // [rsp+30h] [rbp-30h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+40h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+48h] [rbp-18h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+40h]
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+B8h] [rbp+58h]

  ConfigurationHandle = 0LL;
  LOBYTE(IntegerData) = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqq(184LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  v7 = 1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v8 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
    if ( !Status )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    Status = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    a2->PhysicalLocation.BusNumber = a1->BusNumber;
    SlotNumber = a1->SlotNumber;
    a2->PhysicalLocation.FunctionNumber = -1;
    a2->PhysicalLocation.SlotNumber = SlotNumber;
    a2->AccessType = *(_DWORD *)(a3 + 168);
    a2->DirectionType = *(_DWORD *)(a3 + 172);
    a2->ifConnectorPresent = *(_BYTE *)(a3 + 182);
    a2->ConnectionType = *(_DWORD *)(a3 + 176);
    a2->ifMtu = *(_DWORD *)(a3 + 16);
    a2->Flags = 0;
    NewIrql = v9;
    if ( (a1->PnPFlags & 0x200000) != 0 )
      a2->Flags = 1;
    if ( (a1->PnPFlags & 0x8000000) != 0 )
      a2->Flags |= 2u;
    v11 = 32;
    if ( (a1->PnPFlags & 0x400000) != 0 )
      a2->Flags |= 0x20u;
    if ( (IntegerData & 1) != 0 )
      a2->Flags |= 0x40u;
    if ( (a1->PnPFlags & 0x200000) != 0 && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
      a2->Flags |= 0x100u;
    p_ifPhysAddress = &a2->ifPhysAddress;
    a2->ifFlags = a2->Flags;
    v13 = *(_WORD *)(a3 + 92);
    if ( a2->ifPhysAddress.Length == v13 )
    {
      v14 = v13;
      if ( v13 >= 0x20u )
        v14 = 32;
      if ( !memcmp(a2->ifPhysAddress.Address, (const void *)(a3 + 126), v14) )
      {
        v15 = v13;
        if ( v13 >= 0x20u )
          v15 = 32;
        v7 = memcmp(a2->PermanentPhysAddress.Address, (const void *)(a3 + 94), v15) != 0;
      }
      p_ifPhysAddress = &a2->ifPhysAddress;
    }
    if ( v13 >= 0x20u )
      v16 = 32;
    else
      v16 = v13;
    p_ifPhysAddress->Length = v16;
    v17 = *(_WORD *)(a3 + 92);
    v18 = v17;
    if ( v17 >= 0x20u )
      v18 = 32;
    memmove(a2->ifPhysAddress.Address, (const void *)(a3 + 126), v18);
    v19 = *(_WORD *)(a3 + 92);
    if ( v19 >= 0x20u )
      v19 = 32;
    a2->PermanentPhysAddress.Length = v19;
    v20 = *(_WORD *)(a3 + 92);
    if ( v20 < 0x20u )
      v11 = v20;
    memmove(a2->PermanentPhysAddress.Address, (const void *)(a3 + 94), v11);
    MediaType = a2->MediaType;
    a2->XmitLinkSpeed = *(_QWORD *)(a3 + 32);
    a2->RcvLinkSpeed = *(_QWORD *)(a3 + 48);
    a2->MediaConnectState = *(_DWORD *)(a3 + 56);
    a2->MediaDuplexState = *(_DWORD *)(a3 + 60);
    a2->SupportedStatistics = *(_DWORD *)(a3 + 184);
    v22 = *(_DWORD *)(a3 + 8);
    if ( MediaType != v22 )
      a2->MediaType = v22;
    v23 = *(_DWORD *)(a3 + 12);
    v24 = MediaType != v22;
    if ( a2->PhysicalMediumType != v23 )
    {
      a2->PhysicalMediumType = v23;
      v24 = 1;
    }
    ifDeviceWakeUpEnable = a2->ifDeviceWakeUpEnable;
    a2->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
    KeReleaseSpinLock(&ndisIfListLock, NewIrql);
    if ( a2->Source == NdisIfBlockSourcePersistedNetSetup )
    {
      if ( (v24 || v7) && (int)ndisIfWriteBackPersistedInterface(a2) < 0 )
      {
        v8 = -1073741823;
        goto LABEL_43;
      }
    }
    else
    {
      if ( v24 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&a2->NetLuid,
                   8u,
                   0x434u,
                   (unsigned __int8 *)&a2->MediaType);
        v8 = Status;
        if ( Status )
          goto LABEL_43;
      }
      if ( v7 )
      {
        Status = ndisIfUpdatePersistedInterfaceInfo(
                   (unsigned __int8 *)&a2->NetLuid,
                   0x44u,
                   0x440u,
                   (unsigned __int8 *)&a2->ifPhysAddress);
        v8 = Status;
        if ( Status )
          goto LABEL_43;
      }
    }
    v25 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2245640;
    v26 = v25;
    ndisIfSetInterfaceState(a1);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v26);
    ndisNsiSyncMiniportOperStatusNotification(a1);
    ndisNsiSyncMiniportMediaConnectStateNotification(a1);
    ndisIfGetRcvAddressFromMiniport((__int64)a1);
    if ( ifDeviceWakeUpEnable != a2->ifDeviceWakeUpEnable )
      ndisNsiScheduleIfBlockRodChangeNotification(a2, &a2->ifDeviceWakeUpEnable, 1LL, 641LL);
    v8 = Status;
  }
LABEL_43:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(185LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, a3, v8);
  return v8;
}
