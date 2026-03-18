/*
 * XREFs of UsbhLatchPdo @ 0x1C001A5DC
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhSS_SignalPdoWake @ 0x1C0007864 (UsbhSS_SignalPdoWake.c)
 *     UsbhBusSuspend_Action @ 0x1C0008F08 (UsbhBusSuspend_Action.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000D1F0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0019BC0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040230 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_Disable @ 0x1C004060C (UsbhPCE_Disable.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041410 (Usbh_PCE_BusDisconnect_Action.c)
 *     UsbhCycleDevicePort @ 0x1C0042860 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0043A7C (UsbhPortResumeTimeout.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044168 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C78 (UsbhFdoSetD0Warm.c)
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhDriverNotFoundTimer @ 0x1C004AEC0 (UsbhDriverNotFoundTimer.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E178 (UsbhGetHubNodeInfo.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhLatchPdo(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rsi
  KIRQL v9; // bp
  __int64 PortData; // rax
  _DWORD *v11; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx

  v8 = 0LL;
  Log(a1, 256, 1817199695, a2, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    v8 = *(_QWORD *)(PortData + 392);
    if ( v8 )
    {
      v11 = PdoExt(*(_QWORD *)(PortData + 392));
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        *(_DWORD *)v13 = 1668571500;
        v13[4] = v8;
        *((_DWORD *)v13 + 6) = a4;
        v13[5] = a3;
        v14 = v13 + 1;
        v15 = (_QWORD *)*((_QWORD *)v11 + 159);
        if ( (_DWORD *)*v15 != v11 + 316 )
          __fastfail(3u);
        *v14 = v11 + 316;
        v14[1] = v15;
        *v15 = v14;
        *((_QWORD *)v11 + 159) = v14;
      }
      else
      {
        ++v11[320];
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v9);
  return v8;
}
