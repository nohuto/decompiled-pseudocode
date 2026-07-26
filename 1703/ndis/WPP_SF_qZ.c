/*
 * XREFs of WPP_SF_qZ @ 0x1C004AB78
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004B58C (ndisMUpdateNameOnPMWakePacket.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006E9E0 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006EC90 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C006FDD0 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0070D5C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0071DC8 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0072130 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisQueryGuidDataSize @ 0x1C00A6788 (ndisQueryGuidDataSize.c)
 *     ndisWmiFindInstanceName @ 0x1C00A7120 (ndisWmiFindInstanceName.c)
 *     ndisPnPIrpStartDevice @ 0x1C00AA5E4 (ndisPnPIrpStartDevice.c)
 *     ndisPnPStartDevice @ 0x1C00AB254 (ndisPnPStartDevice.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00C0398 (ndisPnPIrpQueryRemove.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00D9CD0 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00DA0A8 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00DBFC0 (NdisDeregisterProtocolDriver.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00E13D0 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00E14A8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00E1630 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00E1888 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     NdisDeregisterProtocol @ 0x1C0103230 (NdisDeregisterProtocol.c)
 *     ndisMShutdownMiniport @ 0x1C0104D5C (ndisMShutdownMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZ(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // r8
  const wchar_t *v5; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8LL;
  if ( a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v6, 8LL, a4, 2LL, v5, v4, 0LL);
}
