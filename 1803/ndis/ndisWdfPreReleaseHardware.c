/*
 * XREFs of ndisWdfPreReleaseHardware @ 0x1C00EE6D8
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@@@Z @ 0x1C00127CC (-NdisTraceLoggingDeviceRemoved@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_REMOVAL_REASON@.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024678 (ndisReferenceMiniportNoCheck.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ndisPowerSaveStop @ 0x1C00B11E8 (ndisPowerSaveStop.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00B1DD0 (ndisPnPRemoveDeviceEx.c)
 *     ndisWakeUpDevice @ 0x1C00E35E0 (ndisWakeUpDevice.c)
 */

__int64 __fastcall ndisWdfPreReleaseHardware(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // edi
  bool v3; // zf

  v1 = 0;
  ndisLogMiniportEvent((__int64)a1, 0x23u);
  if ( (a1->Flags & 4) == 0 )
  {
    NdisTraceLoggingDeviceRemoved();
    ndisPowerSaveStop(a1, 2);
    KeWaitForSingleObject(&a1->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a1->PnPFlags & 0x100) == 0 && a1->CurrentDevicePowerState > PowerDeviceD0 )
      v1 = ndisWakeUpDevice((__int64)a1);
    ndisReferenceMiniportNoCheck((__int64)a1, 0x1Eu);
  }
  if ( !a1->Ref.ReferenceCount )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = a1->PnPDeviceState == NdisPnPDeviceRemoved;
  a1->OldPnPDeviceState = NdisPnPDeviceStarted;
  if ( !v3 )
    ndisPnPRemoveDeviceEx(a1);
  return v1;
}
