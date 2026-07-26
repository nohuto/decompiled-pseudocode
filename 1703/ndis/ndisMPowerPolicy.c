/*
 * XREFs of ndisMPowerPolicy @ 0x1C00F5B54
 * Callers:
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 *     ndisQueryPower @ 0x1C00F51BC (ndisQueryPower.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisGetTimeInterval @ 0x1C0012370 (ndisGetTimeInterval.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisCancelWaitWake @ 0x1C002375C (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003F7B0 (Template_jqxqq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ?ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0064AF8 (-ndisMSendOidPmParametersForSx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00A7C40 (ndisMInvokeDevicePowerNotify.c)
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
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_qD(0x75u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, MiniportAdapterHandle, a2);
  v11 = v9->Flags & 0x80;
  if ( (_DWORD)v6 == 6 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x76u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
    if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
      Template_jqxq(
        MiniportAdapterHandle,
        &PowerShutdownMiniport,
        &v9->InterfaceGuid,
        (unsigned __int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        190);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0092615 < 4u )
      return 0LL;
    v13 = 119;
    goto LABEL_134;
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x78u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
    if ( (int)Microsoft_Windows_NDISEnableBits < 0 )
      Template_jqxq(
        MiniportAdapterHandle,
        &PowerWakeUpDevice,
        &v9->InterfaceGuid,
        (unsigned __int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        214);
    if ( !a5 )
    {
      v9->PnPFlags &= ~0x800u;
      v9->TotalSystemSleepTimeMs += ndisGetTimeInterval((_LARGE_INTEGER *)&v9->LastSystemSleepTime.QuadPart);
    }
    *a4 = 1;
    if ( (unsigned __int8)byte_1C0092615 < 4u )
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
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x7Au, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_jqxq(
        MiniportAdapterHandle,
        &PowerPolicySetD3,
        &v9->InterfaceGuid,
        (unsigned __int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        2);
    *a4 = 4;
    if ( (unsigned __int8)byte_1C0092615 < 4u )
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
        if ( (unsigned __int8)byte_1C0092615 < 4u )
          return 0LL;
        v13 = 125;
LABEL_134:
        WPP_SF_q(v13, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
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
      if ( (unsigned __int8)byte_1C0092615 < 4u )
        return 0LL;
      v13 = 126;
      goto LABEL_134;
    }
    if ( (v9->PnPFlags & 0x40) == 0 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_qD(0x7Fu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9, 0);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &PowerWakeNotEnabled,
          &v9->InterfaceGuid,
          (unsigned __int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          97);
      goto LABEL_109;
    }
    if ( v11 )
    {
      if ( (unsigned int)ndisMSendOidPmParametersForSx(v9) )
        goto LABEL_109;
LABEL_96:
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
      {
        LODWORD(v22) = *a4;
        WPP_SF_qdD(0x85u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9, v6, v22);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxqq(
          MiniportAdapterHandle,
          &PowerPolicyStates,
          &v9->InterfaceGuid,
          (unsigned __int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          v6,
          *a4);
      if ( (unsigned __int8)byte_1C0092615 < 4u )
        return v23;
      v19 = 134;
      goto LABEL_102;
    }
    v14 = v9->DeviceCaps.DeviceState[v6];
    if ( (int)v6 >= 5 && ((int)v6 > v9->DeviceCaps.SystemWake || v14 > v9->DeviceCaps.DeviceWake) )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(0x80u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &PowerHibernateOrShutdown,
          &v9->InterfaceGuid,
          (unsigned __int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          140);
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
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_q(0x81u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &PowerPolicyPatternNotEnabled,
          &v9->InterfaceGuid,
          (unsigned __int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          181);
      goto LABEL_109;
    }
    if ( MinMagicPacketWakeUp > v9->DeviceCaps.DeviceWake )
      MinMagicPacketWakeUp = v9->DeviceCaps.DeviceWake;
    if ( (int)v6 > v9->DeviceCaps.SystemWake || v14 > MinMagicPacketWakeUp || !v14 )
    {
      if ( (unsigned __int8)byte_1C0092615 >= 2u )
        WPP_SF_q(0x82u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
      if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
        Template_jqxq(
          MiniportAdapterHandle,
          &PowerPolicyError,
          &v9->InterfaceGuid,
          (unsigned __int64)&v9->InterfaceGuid,
          v9->IfIndex,
          v9->NetLuid.Value,
          222);
      v23 = -1073741823;
LABEL_109:
      if ( a5 )
      {
LABEL_117:
        *a4 = 4;
        if ( (unsigned __int8)byte_1C0092615 >= 4u )
        {
          LODWORD(v22) = 4;
          WPP_SF_qdD(0x88u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9, v6, v22);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxqq(
            MiniportAdapterHandle,
            &PowerPolicyStates,
            &v9->InterfaceGuid,
            (unsigned __int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            v6,
            *a4);
        if ( (unsigned __int8)byte_1C0092615 < 4u )
          return v23;
        v19 = 137;
LABEL_102:
        WPP_SF_q(v19, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
        return v23;
      }
LABEL_110:
      PnPFlags = v9->PnPFlags;
      if ( (PnPFlags & 1) != 0 && (PnPFlags & 0x40) == 0 )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_1C0092615 >= 4u )
          WPP_SF_q(0x87u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
        if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
          Template_jqxq(
            v21,
            &PowerDisableWakeup,
            &v9->InterfaceGuid,
            (unsigned __int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            114);
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
        if ( (unsigned __int8)byte_1C0092615 >= 2u )
          WPP_SF_qD(0x84u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9, v6);
        if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
          Template_jqxq(
            MiniportAdapterHandle,
            &PowerPolicyError,
            &v9->InterfaceGuid,
            (unsigned __int64)&v9->InterfaceGuid,
            v9->IfIndex,
            v9->NetLuid.Value,
            38);
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
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_qD(0x83u, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9, v6);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_jqxq(
        MiniportAdapterHandle,
        &PowerPolicyError,
        &v9->InterfaceGuid,
        (unsigned __int64)&v9->InterfaceGuid,
        v9->IfIndex,
        v9->NetLuid.Value,
        14);
    goto LABEL_93;
  }
  if ( !a5 )
  {
    v9->PnPFlags &= ~0x400u;
    ndisCancelWaitWake((__int64)v9);
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, (__int64)v9);
  return 2147483663LL;
}
