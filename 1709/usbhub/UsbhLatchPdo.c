/*
 * XREFs of UsbhLatchPdo @ 0x1C000A448
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSS_SignalPdoWake @ 0x1C00062E4 (UsbhSS_SignalPdoWake.c)
 *     UsbhBusSuspend_Action @ 0x1C0007D9C (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000C580 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00247E0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0041020 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C00413FC (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0042200 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C00436A0 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C00448BC (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044F98 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C0048750 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048EBC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049BA0 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049FFC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004A310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004A5EC (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004BD30 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C004EE68 (UsbhGetHubNodeInfo.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0056F70 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x1C000B180 (UsbhRefPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // r14
  __int64 PortData; // rax
  __int64 v11; // rcx

  v8 = 0LL;
  Log(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
      v8 = UsbhRefPdo(v11, *(_QWORD *)(PortData + 392), a3, a4);
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  return v8;
}
