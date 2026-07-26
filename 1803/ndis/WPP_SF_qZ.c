/*
 * XREFs of WPP_SF_qZ @ 0x1C00499F4
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0022864 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A42C (ndisMUpdateNameOnPMWakePacket.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00709A0 (ndisIdleWaitWakeCallback.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070C50 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0071E10 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072EAC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0074118 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C00744F0 (-ndisNicQuietRequestComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@.c)
 *     ndisWmiExecuteMethod @ 0x1C00AC874 (ndisWmiExecuteMethod.c)
 *     ndisQueryGuidDataSize @ 0x1C00ACEE0 (ndisQueryGuidDataSize.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00AD358 (ndisWmiQuerySingleInstance.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00B4060 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C6D5C (ndisPnPIrpStartDevice.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C00E5540 (NdisIMCancelInitializeDeviceInstance.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E5928 (ndisIMCheckDeviceInstance.c)
 *     NdisDeregisterProtocolDriver @ 0x1C00E7850 (NdisDeregisterProtocolDriver.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EDE10 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00EDEE8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EE078 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EE2C8 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWmiFindInstanceName @ 0x1C00EF618 (ndisWmiFindInstanceName.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     NdisDeregisterProtocol @ 0x1C010E150 (NdisDeregisterProtocol.c)
 *     ndisMShutdownMiniport @ 0x1C010FC5C (ndisMShutdownMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
  if ( a4 && *a4 )
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v7 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  ndisWppFastTraceMessage(a2, a1, &v8, 8LL, a4, 2LL, v7, v6, 0LL);
}
