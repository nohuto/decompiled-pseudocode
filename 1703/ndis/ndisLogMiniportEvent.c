/*
 * XREFs of ndisLogMiniportEvent @ 0x1C0015BF0
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C001267C (ndisRequestDevicePowerD0.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012890 (ndisSetDevicePowerOnComplete.c)
 *     ?ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00129C0 (-ndisSetDevicePowerDownComplete@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00614AC (NdisMRemoveMiniportInternal.c)
 *     ndisMReenumerateFailedAdapterInternal @ 0x1C0064854 (ndisMReenumerateFailedAdapterInternal.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C006EC90 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeComplete @ 0x1C006FCA0 (ndisSetPowerResumeComplete.c)
 *     ndisRequestDeviceLowPower @ 0x1C00A7C80 (ndisRequestDeviceLowPower.c)
 *     ndisPnPIrpStartDevice @ 0x1C00AA5E4 (ndisPnPIrpStartDevice.c)
 *     ndisInitializeAdapter @ 0x1C00AB3E8 (ndisInitializeAdapter.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00C0398 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00E13D0 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00E14A8 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpQueryStop @ 0x1C00E1630 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00E1888 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00E1C80 (ndisWdfPreReleaseHardware.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004D4F4 (WPP_SF_dq.c)
 *     Template_jqxzq @ 0x1C0064DA0 (Template_jqxzq.c)
 */

__int64 __fastcall ndisLogMiniportEvent(__int64 a1, unsigned __int16 a2)
{
  void *v5; // rdx

  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_dq(148LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a2, a1);
  if ( (unsigned __int16)(a2 - 70) <= 6u )
  {
    if ( (Microsoft_Windows_NDISEnableBits & 0x80000000000LL) == 0 )
      return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
    v5 = &MiniportFatalError;
LABEL_9:
    Template_jqxzq(
      *(_QWORD *)(a1 + 3880),
      v5,
      a1 + 4032,
      a1 + 4032,
      *(_DWORD *)(a1 + 4080),
      *(_QWORD *)(a1 + 4048),
      *(_QWORD *)(*(_QWORD *)(a1 + 3880) + 8LL),
      a2);
    return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
  }
  if ( (Microsoft_Windows_NDISEnableBits & 0x40000000000LL) != 0 )
  {
    v5 = &MiniportEvent;
    goto LABEL_9;
  }
  return ndisRecordEvent(*(struct _NDIS_EVENT_LOG **)(a1 + 4504));
}
