/*
 * XREFs of ndisLogMiniportEvent @ 0x1C001A1D4
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C000FCCC (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0010020 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0010150 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00621EC (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C00659FC (ndisMReenumerateFailedAdapterInternal.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006FB80 (NdisMIdleNotificationCompleteEx.c)
 *     ndisCancelIdleRequest @ 0x1C007052C (ndisCancelIdleRequest.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070C50 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0071CE0 (ndisSetPowerResumeComplete.c)
 *     ndisRequestDeviceLowPower @ 0x1C00B0C28 (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00B4060 (ndisPnPIrpQueryRemove.c)
 *     ndisInitializeAdapter @ 0x1C00C6B08 (ndisInitializeAdapter.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C6D5C (ndisPnPIrpStartDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EDE10 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00EDEE8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EE078 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EE2C8 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EE6D8 (ndisWdfPreReleaseHardware.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0102D7C (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisRecordEvent @ 0x1C001A234 (ndisRecordEvent.c)
 *     WPP_SF_dq @ 0x1C0041AB4 (WPP_SF_dq.c)
 *     McTemplateK0jqxzq @ 0x1C0065F08 (McTemplateK0jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_dq(151LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a2, a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (dword_1C009AF04 & 0x800) == 0 )
      return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
    v5 = &MiniportFatalError;
LABEL_9:
    McTemplateK0jqxzq(
      *(_QWORD *)(a1 + 3880),
      (_DWORD)v5,
      a1 + 4032,
      a1 + 4032,
      *(_DWORD *)(a1 + 4080),
      *(_QWORD *)(a1 + 4048),
      *(_QWORD *)(*(_QWORD *)(a1 + 3880) + 8LL),
      a2);
    return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
  }
  if ( (dword_1C009AF04 & 0x400) != 0 )
  {
    v5 = &MiniportEvent;
    goto LABEL_9;
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
}
