/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072390 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00739F4 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C001F088 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0071E54 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C00745EC (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     WPP_SF_qlll @ 0x1C007541C (WPP_SF_qlll_ea_1C007541C.c)
 *     ndisRequestWaitWake @ 0x1C00AE030 (ndisRequestWaitWake.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00C6600 (ndisMInvokeDevicePowerNotify.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C00F334C (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F33DC (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbp
  _DEVICE_POWER_STATE DeviceWake; // esi
  __int64 v6; // rdx
  bool v7; // di
  bool v8; // al
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // edi

  AoAc = a1->AoAc;
  DeviceWake = PowerDeviceD3;
  ndisCancelWaitWake((__int64)a1);
  v7 = (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2;
  v8 = a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
    && *((_WORD *)&a1->NetLuid.Info + 3) != 281
    && ndisDisconnectInStandby();
  if ( v7 && AoAc->RemoteWakeEnabled && !v8 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x1Fu, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, (__int64)a1);
    DeviceWake = a1->DeviceCaps.DeviceWake;
    ndisMInvokeDevicePowerNotify((__int64)a1, DeviceWake);
    ndisMSendOidPmParametersForAoAc(a1);
    v9 = ndisRequestWaitWake((char *)a1, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
    v10 = v9;
    if ( v9 != 259 )
    {
      NdisUnexpectedAoAcError(a1, 0x78Eu, v9);
      if ( (unsigned __int8)byte_1C0098755 >= 2u )
        WPP_SF_dq(0x20u, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v10, a1);
    }
  }
  else if ( (unsigned __int8)byte_1C0098755 >= 4u )
  {
    WPP_SF_qlll(AoAc->RemoteWakeEnabled, v6, (__int64)a1, v7, AoAc->RemoteWakeEnabled, v8);
  }
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  v11 = ndisRequestDeviceLowPower(
          (__int64)a1,
          (POWER_STATE)DeviceWake,
          (REQUEST_POWER_COMPLETE *)ndisNicQuietRequestComplete,
          a1,
          2u);
  v12 = v11;
  if ( v11 == 259 )
  {
    v12 = 0;
    if ( a2 )
      KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  }
  else
  {
    NdisUnexpectedAoAcError(a1, 0x7B6u, v11);
    if ( (unsigned __int8)byte_1C0098755 >= 2u )
      WPP_SF_dq(0x22u, &WPP_46d537eb543d3d50e210eba5a2082b22_Traceguids, v12, a1);
  }
  return v12;
}
