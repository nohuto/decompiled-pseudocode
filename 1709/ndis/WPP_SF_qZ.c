/*
 * XREFs of WPP_SF_qZ @ 0x1C00485F8
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0048FE8 (ndisMUpdateNameOnPMWakePacket.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0070150 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070400 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071590 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072630 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C00738A4 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0073C80 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00AC23C (ndisPnPIrpQueryRemove.c)
 *     ndisQueryGuidDataSize @ 0x1C00B6A0C (ndisQueryGuidDataSize.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C12A4 (ndisPnPIrpStartDevice.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00E3CE0 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E40C8 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00E6000 (NdisDeregisterProtocolDriver.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EB270 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00EB348 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EB4D0 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWmiFindInstanceName @ 0x1C00EC8E4 (ndisWmiFindInstanceName.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 *     NdisDeregisterProtocol @ 0x1C010C1C0 (NdisDeregisterProtocol.c)
 *     ndisMShutdownMiniport @ 0x1C010DCDC (ndisMShutdownMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZ(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  if ( a4 )
    v6 = *a4;
  else
    v6 = 8LL;
  if ( a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v8, 8LL, a4, 2LL, v7, v6, 0LL);
}
