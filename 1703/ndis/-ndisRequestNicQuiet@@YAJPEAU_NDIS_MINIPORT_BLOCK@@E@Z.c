/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0070B24 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0071ED0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C002375C (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007069C (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     WPP_SF_qlll @ 0x1C00738BC (WPP_SF_qlll_ea_1C00738BC.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00A7C40 (ndisMInvokeDevicePowerNotify.c)
 *     ndisRequestDeviceLowPower @ 0x1C00A7C80 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00BDE48 (ndisRequestWaitWake.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C00E9D9C (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00E9E30 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x1Du, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, (__int64)a1);
    DeviceWake = a1->DeviceCaps.DeviceWake;
    ndisMInvokeDevicePowerNotify((__int64)a1, DeviceWake);
    ndisMSendOidPmParametersForAoAc(a1);
    v9 = ndisRequestWaitWake((char *)a1, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
    v10 = v9;
    if ( v9 != 259 )
    {
      NdisUnexpectedAoAcError(a1, 0x746u, v9);
      if ( (unsigned __int8)byte_1C0092615 >= 2u )
        WPP_SF_dq(0x1Eu, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, v10, a1);
    }
  }
  else if ( (unsigned __int8)byte_1C0092615 >= 4u )
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
    NdisUnexpectedAoAcError(a1, 0x76Eu, v11);
    if ( (unsigned __int8)byte_1C0092615 >= 2u )
      WPP_SF_dq(0x20u, &WPP_d5f9bd1644a2353086e1469436a05243_Traceguids, v12, a1);
  }
  return v12;
}
