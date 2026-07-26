/*
 * XREFs of ndisLogMiniportEvent @ 0x1C00111C8
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C001FE9C (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C00200B0 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00201E0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C006186C (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0064E9C (ndisMReenumerateFailedAdapterInternal.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C006F2F0 (NdisMIdleNotificationCompleteEx.c)
 *     ndisCancelIdleRequest @ 0x1C006FCD8 (ndisCancelIdleRequest.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C0070400 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C0071460 (ndisSetPowerResumeComplete.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00AC23C (ndisPnPIrpQueryRemove.c)
 *     ndisInitializeAdapter @ 0x1C00C0828 (ndisInitializeAdapter.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C12A4 (ndisPnPIrpStartDevice.c)
 *     ndisRequestDeviceLowPower @ 0x1C00C6A7C (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EB270 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00EB348 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00EB4D0 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisRecordEvent @ 0x1C0011228 (ndisRecordEvent.c)
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     McTemplateK0jqxzq @ 0x1C00653E8 (McTemplateK0jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_dq(148LL, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a2, a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (dword_1C0099FC4 & 0x800) == 0 )
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
  if ( (dword_1C0099FC4 & 0x400) != 0 )
  {
    v5 = &MiniportEvent;
    goto LABEL_9;
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
}
