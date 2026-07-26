/*
 * XREFs of ndisMPowerPolicy @ 0x1C0105D94
 * Callers:
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     ndisQueryPower @ 0x1C0105B58 (ndisQueryPower.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     ndisGetTimeInterval @ 0x1C001FCC4 (ndisGetTimeInterval.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqq @ 0x1C003BE48 (McTemplateK0jqxqq.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065140 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00C6600 (ndisMInvokeDevicePowerNotify.c)
 */

__int64 __fastcall ndisMPowerPolicy(__int64 MiniportAdapterHandle, int a2, int a3, signed int *a4, char a5)
{
  _DEVICE_POWER_STATE MinMagicPacketWakeUp; // edi
  __int64 v6; // rsi
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  signed int v10; // r13d
  int v11; // r14d
  unsigned __int16 v13; // cx
  signed int v14; // edx
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // eax
  __int32 v16; // edi
  int v17; // edi
  int v18; // edi
  unsigned __int16 v19; // cx
  unsigned int PnPFlags; // eax
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+40h] [rbp-C0h]
  _BYTE v24[248]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+150h] [rbp+50h] BYREF
  __int64 v26; // [rsp+158h] [rbp+58h]
  int v27; // [rsp+160h] [rbp+60h]

  MinMagicPacketWakeUp = PowerDeviceUnspecified;
  v6 = a2;
  v23 = 0;
  v25 = 0LL;
  v9 = (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  v26 = 0LL;
  v10 = 4;
  v27 = 0;
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_qD(0x75u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, MiniportAdapterHandle, a2);
  v11 = v9->Flags & 0x80;
  if ( (_DWORD)v6 == 6 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x76u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerShutdownMiniport,
        &v9->InterfaceGuid,
        (__int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        189);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0098755 < 4u )
      return 0LL;
    v13 = 119;
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x78u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerWakeUpDevice,
        &v9->InterfaceGuid,
        (__int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        213);
    if ( !a5 )
    {
      v9->PnPFlags &= ~0x800u;
      v9->TotalSystemSleepTimeMs += ndisGetTimeInterval((_LARGE_INTEGER *)&v9->LastSystemSleepTime.QuadPart);
    }
    *a4 = 1;
    if ( (unsigned __int8)byte_1C0098755 < 4u )
      return 0LL;
    v13 = 121;
    goto LABEL_134;
  }
  if ( !a5 )
  {
    v9->PnPFlags |= 0x800u;
    v9->LastSystemSleepTime.QuadPart = MEMORY[0xFFFFF78000000014];
  }
  if ( (v9->PnPFlags & 0x20) == 0 || !ndisIsMiniportStarted(v9) || v9->PnPDeviceState != NdisPnPDeviceStarted )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x7Au, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerPolicySetD3,
        &v9->InterfaceGuid,
        (__int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        1);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0098755 < 4u )
      return 0LL;
    v13 = 123;
    goto LABEL_134;
  }
  if ( (unsigned int)(v9->CurrentDevicePowerState - 2) > 2 )
  {
    if ( a3 == 6 )
    {
      if ( (_DWORD)v6 == 5 )
      {
        if ( !a5 )
        {
          v9->PnPFlags &= ~0x400u;
          ndisCancelWaitWake((__int64)v9);
        }
        *a4 = 4;
        if ( (unsigned __int8)byte_1C0098755 < 4u )
          return 0LL;
        v13 = 125;
LABEL_134:
        WPP_SF_q(v13, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
        return 0LL;
      }
    }
    else if ( (_DWORD)v6 == 5 && (ndisAoAcCapable || ndisAoAcTest) && !v11 )
    {
      if ( !a5 )
      {
        v9->PnPFlags &= ~0x400u;
        ndisCancelWaitWake((__int64)v9);
      }
      *a4 = 4;
      if ( (unsigned __int8)byte_1C0098755 < 4u )
        return 0LL;
      v13 = 126;
      goto LABEL_134;
    }
    if ( (v9->PnPFlags & 0x40) == 0 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_qD(0x7Fu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9, 0);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          MiniportAdapterHandle,
          &PowerWakeNotEnabled,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          96);
      goto LABEL_109;
    }
    if ( v11 )
    {
      if ( (unsigned int)ndisMSendOidPmParametersForSx(v9) )
        goto LABEL_109;
LABEL_96:
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
      {
        LODWORD(v22) = *a4;
        WPP_SF_qdD(0x85u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9, v6, v22);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxqq(
          MiniportAdapterHandle,
          &PowerPolicyStates,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          v6,
          *a4);
      if ( (unsigned __int8)byte_1C0098755 < 4u )
        return v23;
      v19 = 134;
      goto LABEL_102;
    }
    v14 = v9->DeviceCaps.DeviceState[v6];
    if ( (int)v6 >= 5 && ((int)v6 > v9->DeviceCaps.SystemWake || v14 > v9->DeviceCaps.DeviceWake) )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(0x80u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          MiniportAdapterHandle,
          &PowerHibernateOrShutdown,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          139);
      goto LABEL_109;
    }
    MiniportAdapterHandle = v9->PMCurrentParameters.EnabledWoLPacketPatterns;
    if ( (MiniportAdapterHandle & 2) != 0 && v9->PMAdvertisedCapabilities.MinMagicPacketWakeUp )
      MinMagicPacketWakeUp = v9->PMAdvertisedCapabilities.MinMagicPacketWakeUp;
    if ( (MiniportAdapterHandle & 0xFFFFFFFD) != 0 )
    {
      MinPatternWakeUp = v9->PMAdvertisedCapabilities.MinPatternWakeUp;
      if ( MinPatternWakeUp )
      {
        if ( MinMagicPacketWakeUp == PowerDeviceUnspecified || MinMagicPacketWakeUp > MinPatternWakeUp )
          MinMagicPacketWakeUp = v9->PMAdvertisedCapabilities.MinPatternWakeUp;
      }
    }
    if ( MinMagicPacketWakeUp == PowerDeviceUnspecified )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 4u )
        WPP_SF_q(0x81u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        McTemplateK0jqxq(
          MiniportAdapterHandle,
          &PowerPolicyPatternNotEnabled,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          180);
      goto LABEL_109;
    }
    if ( MinMagicPacketWakeUp > v9->DeviceCaps.DeviceWake )
      MinMagicPacketWakeUp = v9->DeviceCaps.DeviceWake;
    if ( (int)v6 > v9->DeviceCaps.SystemWake || v14 > MinMagicPacketWakeUp || !v14 )
    {
      if ( (unsigned __int8)byte_1C0098755 >= 2u )
        WPP_SF_q(0x82u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        McTemplateK0jqxq(
          MiniportAdapterHandle,
          &PowerPolicyError,
          &v9->InterfaceGuid,
          (__int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          221);
      v23 = -1073741823;
LABEL_109:
      if ( a5 )
      {
LABEL_117:
        *a4 = 4;
        if ( (unsigned __int8)byte_1C0098755 >= 4u )
        {
          LODWORD(v22) = 4;
          WPP_SF_qdD(0x88u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9, v6, v22);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          McTemplateK0jqxqq(
            MiniportAdapterHandle,
            &PowerPolicyStates,
            &v9->InterfaceGuid,
            (__int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            v6,
            *a4);
        if ( (unsigned __int8)byte_1C0098755 < 4u )
          return v23;
        v19 = 137;
LABEL_102:
        WPP_SF_q(v19, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
        return v23;
      }
LABEL_110:
      PnPFlags = v9->PnPFlags;
      if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_1C0098755 >= 4u )
          WPP_SF_q(0x87u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          McTemplateK0jqxq(
            v21,
            &PowerDisableWakeup,
            &v9->InterfaceGuid,
            (__int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            113);
        v26 = 0LL;
        v27 = 0;
        v25 = 1311360LL;
        memset(v24, 0, sizeof(v24));
        *(_DWORD *)&v24[88] |= 8u;
        *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
        *(_DWORD *)v24 = 15466902;
        *(_QWORD *)&v24[40] = &v25;
        *(_DWORD *)&v24[32] = -50265847;
        *(_QWORD *)&v24[4] = 1LL;
        *(_DWORD *)&v24[48] = 20;
        ndisQuerySetMiniport(v9, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
      }
      goto LABEL_117;
    }
    v16 = MinMagicPacketWakeUp - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_89;
          if ( (*((_DWORD *)&v9->DeviceCaps + 1) & 0x2000) != 0 )
            goto LABEL_84;
        }
        MiniportAdapterHandle = 4098LL;
        if ( (*((_DWORD *)&v9->DeviceCaps + 1) & 0x1002) == 0x1002 )
        {
          v10 = 3;
          goto LABEL_84;
        }
      }
      MiniportAdapterHandle = 2049LL;
      if ( (*((_DWORD *)&v9->DeviceCaps + 1) & 0x801) == 0x801 )
      {
        v10 = 2;
        goto LABEL_84;
      }
    }
    if ( (*((_DWORD *)&v9->DeviceCaps + 1) & 0x400) != 0 )
    {
      v10 = 1;
LABEL_84:
      if ( v14 > v10 )
      {
        v23 = -1073741823;
        if ( (unsigned __int8)byte_1C0098755 >= 2u )
          WPP_SF_qD(0x84u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9, v6);
        if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
          McTemplateK0jqxq(
            MiniportAdapterHandle,
            &PowerPolicyError,
            &v9->InterfaceGuid,
            (__int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            37);
      }
LABEL_93:
      if ( !a5 )
      {
        ndisMInvokeDevicePowerNotify((__int64)v9, v10);
        if ( (unsigned int)ndisMSendOidPmParametersForSx(v9) )
          goto LABEL_110;
      }
      *a4 = v10;
      goto LABEL_96;
    }
LABEL_89:
    v23 = -1073741823;
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_qD(0x83u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9, v6);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      McTemplateK0jqxq(
        MiniportAdapterHandle,
        &PowerPolicyError,
        &v9->InterfaceGuid,
        (__int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        13);
    goto LABEL_93;
  }
  if ( !a5 )
  {
    v9->PnPFlags &= ~0x400u;
    ndisCancelWaitWake((__int64)v9);
  }
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, (__int64)v9);
  return 2147483663LL;
}
