/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F69DC
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072C0C (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074268 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0010580 (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C00726D8 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0074E5C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisMInvokeDevicePowerNotify @ 0x1C00B07CC (ndisMInvokeDevicePowerNotify.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B0C28 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00CA3B0 (ndisRequestWaitWake.c)
 *     ?ndisDisconnectInStandby@@YA_NXZ @ 0x1C00F5F04 (-ndisDisconnectInStandby@@YA_NXZ.c)
 *     ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F5F94 (-ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbp
  _DEVICE_POWER_STATE DeviceWake; // r14d
  bool v6; // di
  bool v7; // si
  int v8; // eax
  int v9; // edi
  int v10; // eax
  unsigned int v11; // edi

  AoAc = a1->AoAc;
  DeviceWake = PowerDeviceD3;
  ndisCancelWaitWake((__int64)a1);
  v6 = (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2;
  v7 = a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
    && *((_WORD *)&a1->NetLuid.Info + 3) != 281
    && ndisDisconnectInStandby();
  if ( v6 && AoAc->RemoteWakeEnabled )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(0x1Fu, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1);
    DeviceWake = a1->DeviceCaps.DeviceWake;
    ndisMInvokeDevicePowerNotify((__int64)a1, DeviceWake);
    if ( v7 )
    {
      if ( (unsigned __int8)byte_1C0099615 >= 4u )
        WPP_SF_q(0x21u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1);
    }
    else
    {
      ndisMSendOidPmParametersForAoAc(a1);
      v8 = ndisRequestWaitWake((char *)a1, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
      v9 = v8;
      if ( v8 != 259 )
      {
        NdisUnexpectedAoAcError(a1, 0x78Fu, v8);
        if ( (unsigned __int8)byte_1C0099615 >= 2u )
          WPP_SF_dq(0x20u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v9, a1);
      }
    }
  }
  else if ( (unsigned __int8)byte_1C0099615 >= 4u )
  {
    WPP_SF_qdD(0x22u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, (__int64)a1, v6, AoAc->RemoteWakeEnabled);
  }
  ndisUpdateMiniportCsTrafficStatistics(a1, 1);
  v10 = ndisRequestDeviceLowPower(
          (__int64)a1,
          (POWER_STATE)DeviceWake,
          (REQUEST_POWER_COMPLETE *)ndisNicQuietRequestComplete,
          a1,
          2u);
  v11 = v10;
  if ( v10 == 259 )
  {
    v11 = 0;
    if ( a2 )
      KeWaitForSingleObject(&AoAc->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
  }
  else
  {
    NdisUnexpectedAoAcError(a1, 0x7BDu, v10);
    if ( (unsigned __int8)byte_1C0099615 >= 2u )
      WPP_SF_dq(0x23u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v11, a1);
  }
  return v11;
}
